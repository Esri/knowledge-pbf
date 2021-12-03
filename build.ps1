
<# Copyright 2021 Esri
 #
 # Licensed under the Apache License Version 2.0 (the "License");
 # you may not use this file except in compliance with the License.
 # You may obtain a copy of the License at
 #
 #     http://www.apache.org/licenses/LICENSE-2.0
 #
 # Unless required by applicable law or agreed to in writing, software
 # distributed under the License is distributed on an "AS IS" BASIS,
 # WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 # See the License for the specific language governing permissions and
 # limitations under the License.
 #>
 
$compiler_path = "bin\protoc.exe"
$proto_folder = Get-Item ".\proto"

# C++
$cpp_out = "Source\CPP"

# C++ for DLL export
$cpp_dllexport_out = "Source\CPP_DLL_EXPORT"
$cpp_dllexport_macro = "EXT_CLASS"

# C#
$cs_out = "Source\CS"

# Java
$java_out = "Source\JAVA\src\main\java"

# Python
$python_out = "Source\Python"


#############################################################


function Compare-Versions($lhs,$rhs)
{
	if ($lhs.Contains("-")) { $lhs = $lhs.Split('-')[0] }
	if ($rhs.Contains("-")) { $rhs = $rhs.Split('-')[0] }

	$lhs_major = [int]$lhs.Split('.')[0]
	$lhs_minor = [int]$lhs.Split('.')[1]
	$lhs_patch = [int]$lhs.Split('.')[2]

	$rhs_major = [int]$rhs.Split('.')[0]
	$rhs_minor = [int]$rhs.Split('.')[1]
	$rhs_patch = [int]$rhs.Split('.')[2]

	if ($lhs_major -gt $rhs_major) {
		return -3
	}

	if ($lhs_major -lt $rhs_major) {
		return 3
	}

	if ($lhs_minor -gt $rhs_minor) {
		return -2
	}

	if ($lhs_minor -lt $rhs_minor) {
		return 2
	}

	if ($lhs_patch -gt $rhs_patch) {
		return -1
	}

	if ($lhs_patch -lt $rhs_patch) {
		return 1
	}

	return 0
}

function Get-Relative-Path($basePath, $path)
{
	Push-Location
	Set-Location $basePath
	try {
		$relativePath = Get-Item $path | Resolve-Path -Relative
	}
	finally {
		Pop-Location
	}
	return $relativePath
}

function Validate-Package()
{
	$proto_paths = New-Object System.Collections.Generic.HashSet[String]	

	Push-Location
	Set-Location $proto_folder.FullName

	try 
	{
		$proto_files = Get-ChildItem -File -Recurse -Filter *.proto
	
		ForEach ($proto_file in $proto_files)
		{
			$relativePath = Get-Item $proto_file.FullName | Resolve-Path -Relative
			$path_parts = $relativePath.Split('\\')

			$file_contents = (cat $proto_file.FullName) | Out-String
			$does_match = $file_contents -match "package\s+([0-9a-zA-Z_]+)(\.[0-9a-zA-Z_]+)*;"

			if (-not $does_match)
			{
				throw ("CRITICAL ERROR! Missing `package` declaration!")
			}

			$pp = ""

			For ($i = 1; $i -lt $Matches.Count; $i++)
			{
				if ($i -gt 1) {
					$pp += '\'
				}

				$package = $Matches[$i]
				if ($package[0] -eq '.')
				{
					$package = $package.Substring(1)
				}			

				if ($package -ne $path_parts[$i])
				{					
					throw ("CRITICAL ERROR! Package specifier does not match folder structure!")
				}

				$pp += $package
			}

			$exists = $proto_paths.Add($pp)
		}
	}
	finally
	{
		Pop-Location
	}
}

function Invoke-Compiler($includes, $out_path_arg, $out_path, $protoFiles)
{	
	$file_rel_paths = @()

	foreach ($file in $protoFiles)
	{
		$proto_file_rel_path = Get-Relative-Path (Get-Location).Path $file.fullname
		$file_rel_paths += $proto_file_rel_path
	}
	
	#Write-Host $file_rel_paths
	$out_arg = $out_path_arg + $out_path
	&$compiler_path $includes $out_arg $file_rel_paths

	if ($LastExitCode -ne 0) {
		throw ("CRITICAL ERROR! Encountered a proto file compilation error!")
	}
}

function Generate-Code($out_path_arg, $out_path)
{
	# Remove existing sources
	Get-ChildItem -Path $out_path -Recurse -Exclude "," | Foreach { Remove-Item -Recurse -Force $_ }

	$imported_files = New-Object System.Collections.Generic.HashSet[String]	

	$files_with_no_imports = @()
	$files_with_imports = @()

	# Prepare parameters and invoke the compiler
	$proto_files = Get-ChildItem -Path $proto_folder.Name -File -Recurse -Filter *.proto
	foreach ($file in $proto_files)
	{
		$file_contents = (cat $file.FullName) | Out-String		

		$arr_of_match_arr = (Select-String -Pattern 'import\s+"(.+)";' -input $file_contents -AllMatches).Matches

		if ($arr_of_match_arr.Count -gt 0)
		{
			$files_with_imports += $file			

			foreach ($match in $arr_of_match_arr) {
				$imported_file_path = $proto_folder.Name + '\' + $match.Groups[1]
				$silence = $imported_files.Add((Get-Item $imported_file_path).FullName)
			}
		}
		else
		{
			$files_with_no_imports += $file
		}
	}

	$files_not_included_anywhere = @()
	foreach ($file in $files_with_no_imports) {
		if (-not $imported_files.Contains($file.FullName)) {
			$files_not_included_anywhere += $file
		}
		else {
			$files_with_imports += $file
		}
	}

	$proto_folder_path_arg = ("--proto_path=" + $proto_folder.Name)

	foreach ($standalone_file in $files_not_included_anywhere) {
		Invoke-Compiler @($proto_folder_path_arg) $out_path_arg $out_path $standalone_file
	}
	
	Invoke-Compiler @($proto_folder_path_arg) $out_path_arg $out_path $files_with_imports
}

function Generate-CPP($path)
{
	Generate-Code "--cpp_out=" $path
}

function Generate-CPP-DLL-EXPORT($path, $export_macro_name)
{
	$cpp_out_param_value = "--cpp_out=dllexport_decl=" + $export_macro_name + ":"
	Generate-Code $cpp_out_param_value $path
}

function Generate-CS($path)
{
	Generate-Code "--csharp_out=" $path
}

function Generate-Java($java_src)
{
	$java_src_folder = New-Item -ItemType Directory -Force -Path $java_src

	# First, validate compiler version is the same as runtime version used in Java
	$protoc_ver = (&$compiler_path --version) | Out-String
	$protoc_ver = ($protoc_ver.Split(' ')[1]).Trim()
	
	# Java wants OPTIMIZE_FOR=SPEED which is different than everybody else
	$files_with_optimize_for_override = @()
	$files_with_optimize_for_override_orig_value = @()
	$optimize_for_speed_line = 'option optimize_for = SPEED;'

	# Prepare parameters and invoke the compiler
	$proto_files = Get-ChildItem -Path $proto_folder.Name -File -Recurse -Filter *.proto
	foreach ($file in $proto_files)
	{
		$file_contents = [System.IO.File]::ReadAllText($file.FullName)

		$arr_of_match_arr = (Select-String -Pattern '(option\s+optimize_for\s*\=\s*LITE_RUNTIME\s*;)' -input $file_contents -AllMatches).Matches

		if ($arr_of_match_arr.Count -gt 0)
		{
			$optimize_for_line = $arr_of_match_arr[0].Groups[1]

			$files_with_optimize_for_override += $file
			$files_with_optimize_for_override_orig_value += $optimize_for_line

			$file_contents = $file_contents -replace $optimize_for_line, $optimize_for_speed_line
			Set-Content -Encoding utf8 -NoNewline -Path $file.FullName -Value $file_contents
		}
	}

	Generate-Code "--java_out=" $java_src

	# Restore the proto files to their original state
	foreach ($file in $files_with_optimize_for_override)
	{
		$original_optimize_for_line = $files_with_optimize_for_override_orig_value[$files_with_optimize_for_override.IndexOf($file)]
		$file_contents = [System.IO.File]::ReadAllText($file.FullName)
		$file_contents = $file_contents -replace $optimize_for_speed_line, $original_optimize_for_line
		Set-Content -Encoding utf8 -NoNewline -Path $file.FullName -Value $file_contents
	}

	# Remove generated files that don't have "com.esri.arcgis" as the root package.
	$java_target_pkg_path = "\com\esri\arcgis"
	$java_target_pkg = Get-Item ($java_src + $java_target_pkg_path)
	Get-ChildItem -Path $java_src -Recurse -Attributes Directory | Where-Object { !$_.FullName.StartsWith($java_target_pkg.FullName) -and !$java_target_pkg.FullName.StartsWith($_.FullName) } | Foreach { Remove-Item -Recurse -Force $_.fullname }
}

function Generate-Python($python_src)
{
	Generate-Code "--python_out=" $python_src
}

function Write-Compiler-Version 
{
	$protoc_ver = (&$compiler_path --version) | Out-String
	$protoc_ver = ($protoc_ver.Split(' ')[1]).Trim()

	$ver_file_path = (Get-Item $compiler_path).Directory.FullName + "\PROTOBUF_VERSION"
	Set-Content -Path $ver_file_path -Value $protoc_ver

	return $protoc_ver
}

function Generate-Directories($directories)
{
	foreach ($dir in $directories) {
		$exists = Test-Path -Path $dir

		if (!$exists) 
		{
			New-Item -ItemType Directory -Force -Path $dir
		}	
	}
}

try 
{
	Validate-Package

	$output_dirs = @()
	$output_dirs += $cpp_out
	$output_dirs += $cpp_dllexport_out
	$output_dirs += $cs_out
	$output_dirs += $java_out
	$output_dirs += $python_out

	Generate-Directories $output_dirs

	Generate-CPP $cpp_out
	Generate-CPP-DLL-EXPORT $cpp_dllexport_out $cpp_dllexport_macro
	Generate-CS $cs_out	
	Generate-Python $python_out

	# Generate Java code last because it's replacing `optimize_for` inside the Proto files.
	# The `Generate-Java` function brings the files back to their original state but keep this last just in case.
	Generate-Java $java_out

	$protoc_ver = Write-Compiler-Version

	Write-Host ("Protobuf "+ $protoc_ver +": Code generation completed without errors.")
}
catch 
{	
	Write-Host $_
	$LastExitCode = 1
	exit $LastExitCode 
}
