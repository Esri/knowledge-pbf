# Only invoke this script from the root of the repo!
#
# This script generates JS code tailored for specific purposes.
#
# Running this script requires NodeJS installed locally and `npm` accessible from the command line (in your PATH env var).
#

$proto_folder_path = "proto"

# Javascript
$javascript_out = "Source\JS"

function Generate-Bundle-KnowledgeGraph($out_path)
{
	$out_file_name = "EsriKnowledgeGraph"

	$out_file_path = $out_path + "\" + $out_file_name + ".js"

	pbjs -t static-module -w closure -p $proto_folder_path -o $out_file_path esriPBuffer/EsriExtendedTypes/EsriExtendedTypes.proto esriPBuffer/ObjectIdentifierSet.proto esriPBuffer/EsriTypes.proto esriPBuffer/graph/GraphObjectIdentifierSet.proto esriPBuffer/graph/SearchTypes.proto esriPBuffer/graph/AddDomainRequest.proto esriPBuffer/graph/AddDomainResponse.proto esriPBuffer/graph/AddFieldsRequest.proto esriPBuffer/graph/AddFieldsResponse.proto esriPBuffer/graph/AddIndexesRequest.proto esriPBuffer/graph/AddIndexesResponse.proto esriPBuffer/graph/AddNamedTypesRequest.proto esriPBuffer/graph/AddNamedTypesResponse.proto esriPBuffer/graph/ApplyEditsRequest.proto esriPBuffer/graph/ApplyEditsResponse.proto esriPBuffer/graph/DataModelTypes.proto esriPBuffer/graph/DeleteDomainResponse.proto esriPBuffer/graph/DeleteFieldRequest.proto esriPBuffer/graph/DeleteFieldResponse.proto esriPBuffer/graph/DeleteIndexesRequest.proto esriPBuffer/graph/DeleteIndexesResponse.proto esriPBuffer/graph/DeleteNamedTypeResponse.proto esriPBuffer/graph/EsriGraphTypes.proto esriPBuffer/graph/QueryDataModelResponse.proto esriPBuffer/graph/QueryRequest.proto esriPBuffer/graph/QueryResponse.proto esriPBuffer/graph/SearchQueryRequest.proto esriPBuffer/graph/SyncDataModelResponse.proto esriPBuffer/graph/UpdateDomainRequest.proto esriPBuffer/graph/UpdateDomainResponse.proto esriPBuffer/graph/UpdateFieldRequest.proto esriPBuffer/graph/UpdateFieldResponse.proto esriPBuffer/graph/UpdateNamedTypeRequest.proto esriPBuffer/graph/UpdateNamedTypeResponse.proto esriPBuffer/graph/UpdateSearchIndexRequest.proto esriPBuffer/graph/UpdateSearchIndexResponse.proto
	$min_file_path = $out_path + "\" + $out_file_name + ".min.js"
	minify $out_file_path > $min_file_path
}

function Generate-JS
{
	$out_path = $javascript_out + "\KnowledgeGraph"
	$kg_js_folder = New-Item -ItemType Directory -Force -Path $out_path
	Generate-Bundle-KnowledgeGraph $out_path
}

####

# Please do not change these package versions unless there is a very good technical reason to do so!
# In the past we found differences across compiler versions that resulted in the breakage of client apps.
# Please have someone familliar with Javascript review the updated output if you do HAVE TO update the package versions!
npm install -g protobufjs@6.11.2
npm install -g minify@5.1.1

Generate-JS