# arcgis-pbf
Integrate pbf format in arcgis services

Pbf is a compact binary encoding for geographic data.

Pbf provides lossless compression of esri data into protocol buffers. Advantages over using json:

* Very compact: typically makes esri responses 6 times smaller.
* 2-2.5x smaller even when comparing gzipped sizes.
* Very fast encoding and decoding.
* Built in schema file for pbf format (proto files).
* Versioning support. Pbf contains version number that can be used to support old/new Arcbuf binary files
* Easy language integration. We will be shipping serialization/deserialization code in different languages including C#/C++/JAVA/JS/Python. More languages can also be added as needed using Google protocol buffer compiler.
* It is based on the underlying binary format of vector tiles

![alt text](https://devtopia.esri.com/khal2396/arcgis-pbf/blob/master/imgs/PbfComparison.png)

# Json Alternative In REST API: Pbf Binary Format 
While JSON is currently a well-accepted data serialization format, so was XML in its time. 
Many people felt XML will never be replaced. But it is worth noting the other new formats 
that are available now that are more optimized than JSON such as google protocol buffer 
binary format.

When to use REST API with Json?
* Data need to be human readable
* Data from the service is directly consumed by a web browser
* No ready to tie the data model to a schema

# Why Not Json?
JSON has several features that make it a great candidate for general purpose data interchange. 
The followings are the main json features:
* The message is valid as long as JSON is well-formed. 
* JSON is simple and supports a minimal and straightforward set of data types: strings, numbers, booleans, objects, arrays, and a null value. 
* The data is represented in JavaScript syntax, which makes it both human-readable and easy to parse in all languages.

These features make JSON a useful general purpose format, but the typical use cases for spatial data may cause us to seek alternatives. 
Spatial data typically need to be optimized along the following lines:
* Keep network traffic small and fast
* Minimize the amount of computation for efficient encoding and decoding
* Use only small amounts of memory and storage

JSON might not the best candidate for meeting these requirements. 
Some of the JSON drawbacks are:

* JSON is not a space-efficient encoding. All data is expressed as ASCII strings, often with white space added and binary data must be escaped. 
* The JSON simplicity of the data format introduces complexity in implementation. JSON’s simple types rarely match the underlying data model types typically used to represent spatial data. 
* Lack of Schema. Arrays can contain any number of types, and there are no constraints on how the fields of an object are used or whether they are used consistently. Valid JSON contain arbitrary data that violates the data model, and it is up to the parser to solve any given data structure. 
JSON might not be the best technology for encoding spatial data.

# The future of Binary in REST
REST provides a good model for interacting with spatial data. Each client can easily make its state information available, and can standardize 
on a way to create, read, update, and delete that data. But developers need REST without JSON. 
Binary encodings might be better suited for spatial data, and with the advantage of automatically enforced schemas. 
The traditional REST implementation of JSON over HTTP might not be the best option in all cases. 
JSON’s string-oriented payloads might be less efficient comparing to binary encodings when it comes to data 
transmission in terms of speed and ease of parsing. 
Encodings like Protobuf might be a compelling alternative to JSON.

# Using Protobuf in esri Pbf format

![alt text](https://devtopia.esri.com/khal2396/arcgis-pbf/blob/master/imgs/PbfFeatureCollection.png)

Protobuf has three main components that we have to deal with:
* Message descriptors. When using Protobuf we have to define our messages structures in arcbuf.proto files. 
* Message implementations. Messages definitions are not enough to represent and exchange data in any programming language. 
We have to generate proxies/classes/objects to deal with data in the chosen programming language. 
Google provides code generators for the most common programming languages.
* Parsing and Serialization. After defining and creating Protobuf messages, 
we need to be able to exchange these messages. Google protocol buffer provides 
lib in many supported programming languages.

# FeatureCollection Proto Definition (Query API f=pbf)
```
syntax = "proto3";
package esriPBuffer;
option optimize_for = LITE_RUNTIME;

message FeatureCollectionPBuffer {
		// FieldType
		enum FieldType {
			esriFieldTypeSmallInteger = 0;
			esriFieldTypeInteger = 1;
			esriFieldTypeSingle = 2;
			esriFieldTypeDouble = 3;
			esriFieldTypeString = 4;
			esriFieldTypeDate = 5;
			esriFieldTypeOID = 6;
			esriFieldTypeGeometry = 7;
			esriFieldTypeBlob = 8;
			esriFieldTypeRaster = 9;
			esriFieldTypeGUID = 10;
			esriFieldTypeGlobalID = 11;
			esriFieldTypeXML = 12;
		}

		// GeometryType
		enum GeometryType {
			esriGeometryTypePoint = 0;
			esriGeometryTypeMultipoint = 1;
			esriGeometryTypePolyline = 2;
			esriGeometryTypePolygon = 3;
			esriGeometryTypeMultipatch = 4;
		}

		// FieldType
		enum SQLType {
			sqlTypeBigInt = 0;
			sqlTypeBinary = 1;
			sqlTypeBit = 2;
			sqlTypeChar = 3;
			sqlTypeDate = 4;
			sqlTypeDecimal = 5;
			sqlTypeDouble = 6;
			sqlTypeFloat = 7;
			sqlTypeGeometry = 8;
			sqlTypeGUID = 9;
			sqlTypeInteger = 10;
			sqlTypeLongNVarchar = 11;
			sqlTypeLongVarbinary = 12;
			sqlTypeLongVarchar = 13;
			sqlTypeNChar = 14;
			sqlTypeNVarchar = 15;
			sqlTypeOther = 16;
			sqlTypeReal = 17;
			sqlTypeSmallInt = 18;
			sqlTypeSqlXml = 19;
			sqlTypeTime = 20;
			sqlTypeTimestamp = 21;
			sqlTypeTimestamp2 = 22;
			sqlTypeTinyInt = 23;
			sqlTypeVarbinary = 24;
			sqlTypeVarchar = 25;
		}

		enum QuantizeOriginPostion {
			upperLeft = 0;
			lowerLeft = 1;
		}

		message SpatialReference {
			uint32 wkid = 1;
			uint32 lastestWkid = 2;
			uint32 vcsWkid = 3;
			uint32 latestVcsWkid = 4;
			string wkt = 5;
		}

		message Field {
			string name = 1; 
			FieldType fieldType = 2;
			string alias = 3; 
			SQLType sqlType = 4;
			string domain = 5; 
			string defaultValue = 6;
		}

		 message Value {
			oneof value_type {
				// Exactly one of these values must be present in a valid message
				string string_value = 1;
				float  float_value = 2;
				double double_value = 3;
				sint32 sint_value = 4;
				uint32 uint_value = 5;
				int64  int64_value = 6;
				uint64 uint64_value = 7;
				sint64 sint64_value = 8;
				bool bool_value = 9;
			}
		}

		message Geometry {
			GeometryType geometryType = 1;
			repeated uint32 lengths = 2 [packed = true]; // coordinate structure in lengths
			repeated sint32 coords = 3 [packed = true]; // delta-encoded integer values
		}
		
		message esriShapeBuffer {
			bytes bytes = 1;
		}

		message Feature {
			//repeated uint32 attributes = 1 [packed = true];
			repeated Value attributes = 1;
			oneof compressed_geometry {
				Geometry geometry = 2;
				esriShapeBuffer shapeBuffer = 3;
			}
			Geometry centroid = 4;
		}

		message UniqueIdField {
			string name = 1;
			bool isSystemMaintained = 2;
		}

		message GeometryProperties {
			string shapeAreaFieldName = 1;
			string shapeLengthFieldName = 2;
			string units = 3;
		}

		message ServerGens {
			uint64 minServerGen = 1; 
			uint64 serverGen = 2;
		}

		message Scale {
			double xScale = 1;
			double yScale = 2;
			double mScale = 3;
			double zScale = 4;
		}

		message Translate {
			double xTranslate = 1;
			double yTranslate = 2;
			double mTranslate = 3;
			double zTranslate = 4;
		}

		message Transform {
			QuantizeOriginPostion quantizeOriginPostion= 1;
			Scale scale = 2;
			Translate translate = 3;
		}

		message FeatureResult {
			string objectIdFieldName = 1;
			UniqueIdField uniqueIdField = 2;
			string globalIdFieldName = 3;
			string geohashFieldName = 4;
			GeometryProperties geometryProperties = 5;
			ServerGens serverGens = 6;
			GeometryType geometryType = 7; 
			SpatialReference spatialReference = 8;
			bool exceededTransferLimit = 9;
			bool hasZ = 10;
			bool hasM = 11;
			Transform transform = 12;
			repeated Field fields = 13;
			repeated Value values = 14;
			repeated Feature features = 15;
		}

		message CountResult{
			uint64 count = 1;
		}

		message ObjectIdsResult {
			string objectIdFieldName = 1;
			ServerGens serverGens = 2;
			repeated uint64 objectIds = 3 [packed = true];
		}

		message QueryResult
		{
			oneof Results {
				FeatureResult featureResult = 1;
				CountResult countResult = 2;
				ObjectIdsResult idsResult = 3;
			}
		}

		// Any compliant implementation must first read the version
		// number encoded in this message and choose the correct
		// implementation for this version number before proceeding to
		// decode other parts of this message.
		string version = 1;
		QueryResult queryResult = 2;
}
```
# Response ContentType
Any operation that supports f=pbf needs to return "application/x-protobuf" http content type:

e.g. in .NET:
```
	Context.Response.ContentType = "application/x-protobuf"
```
# Pbf Schema Definition Internals
Pbf schema is described in fileName.proto file. The binary format schema consists of the following definition.
```
syntax = "proto3";
package esriPBuffer;
option optimize_for = LITE_RUNTIME;
```

* First there is a syntax defined with the value proto3. This is the version of google Protobuf that is 
currently used in defining pbf format, which currently the latest google protocol buffer version. 
It is important to note that previous versions of Protobuf used to allow the developers to be more restrictive, 
about the messages that they exchanged, through the usage of the required keyword. 
This is now deprecated and not available anymore.
* Second there is a package ArcBuffer definition. This configuration is used to nest 
the generated classes/objects created. This will be the namespace of the generated classes.
* Third, there is an option optimize_for definition. This configuration controls the 
generated classes and the required runtime library. Options available are SPEED, 
CODE_SIZE, or LITE_RUNTIME. 
The query pbf format messages/enum are very simple and easy to understand. 
The enum and messages are mapped to the json query results when the query result contains 
count only, object IDs or feature collection results. 
Each message and enum has a tag number. This tag needs to be unique per message or enum. 
The tag is important and is enforced by google compiler. The tag also cannot be changed 
between different versions of pbf. This would guarantee backward compatibility with older clients.

# Enums:
```
	// GeometryType
	enum GeometryType {
		esriGeometryTypePoint = 0;
		esriGeometryTypeMultipoint = 1;
		esriGeoemtryTypePolyline = 2;
		esriGeometryTypePolygon = 3;
		esriGeometryTypeMultipatch = 4;
	}

	// FieldType
	enum FieldType {
		esriFieldTypeSmallInteger = 0;
		esriFieldTypeInteger = 1;
		esriFieldTypeSingle = 2;
		esriFieldTypeDouble = 3;
		esriFieldTypeString = 4;
		esriFieldTypeDate = 5;
		esriFieldTypeOID = 6;
		esriFieldTypeGeometry = 7;
		esriFieldTypeBlob = 8;
		esriFieldTypeRaster = 9;
		esriFieldTypeGUID = 10;
		esriFieldTypeGlobalID = 11;
		esriFieldTypeXML = 12;
	}

	// FieldType
	enum SQLType {
		sqlTypeBigInt = 0;
		sqlTypeBinary = 1;
		sqlTypeBit = 2;
		sqlTypeChar = 3;
		sqlTypeDate = 4;
		sqlTypeDecimal = 5;
		sqlTypeDouble = 6;
		sqlTypeFloat = 7;
		sqlTypeGeometry = 8;
		sqlTypeGUID = 9;
		sqlTypeInteger = 10;
		sqlTypeLongNVarchar = 11;
		sqlTypeLongVarbinary = 12;
		sqlTypeLongVarchar = 13;
		sqlTypeNChar = 14;
		sqlTypeNVarchar = 15;
		sqlTypeOther = 16;
		sqlTypeReal = 17;
		sqlTypeSmallInt = 18;
		sqlTypeSqlXml = 19;
		sqlTypeTime = 20;
		sqlTypeTimestamp = 21;
		sqlTypeTimestamp2 = 22;
		sqlTypeTinyInt = 23;
		sqlTypeVarbinary = 24;
		sqlTypeVarchar = 25;
	}

	enum QuantizeOriginPostion {
		upperLeft = 0;
		lowerLeft = 1;
	}
 ```
# Messages:
## Field
```
	message Field {       
		string name = 1; 
		FieldType fieldType = 2;
		string alias = 3; 
		SQLType sqlType = 4;
		string domain = 5; 
		string defaultValue = 6;
	}
```
## Spatial Reference
```
	message SpatialReference {       
		uint32 wkid = 1;
		uint32 lastestWkid = 2;
		uint32 vcsWkid = 3;
		uint32 latestVcsWkid = 4;
		string wkt = 5;
	}
```
## Geometry/Feature
```
	message Geometry {
		GeometryType geometryType = 1;
		repeated uint32 lengths = 2 [packed = true]; // coordinate lengths
		repeated sint32 coords = 3 [packed = true]; // delta-encoded integers
	}    
	message esriShapeBuffer {
		bytes bytes = 1;
	}
	message Feature {
		repeated Value attributes = 1;
		oneof compressed_geometry {
			Geometry geometry = 2;
			esriShapeBuffer shapeBuffer = 3;
		}
		Geometry centroid = 4;
	}
```
The geometry representation in pbf uses a single buffer optimized representation where 
the geometry message contains the geometry type, length array and the quantized uint coordinate array.

# Message Code Generation

To generate the source code for the proto messages, I have used two libraries:
* I have used the [Protocol Compiler](https://developers.google.com/protocol-buffers/docs/downloads) 
provided by Google to generate C#, Java, C++,Python, JS,
* There is also a [JavaScript compiler](https://github.com/dcodeIO/protobuf.js) (protobuf.js) to 
generate JS source code based on FeatureCollection.proto. Protobuf.js is well documented here.

The following commands are used to generate the source code to read and write pbf binary format.

## All languages
In the root folder of the repo, run this:

`.\build.ps1`

Any errors during code generation will be reported. Otherwise, you'll get a message saying `Code generation has completed without errors`. See [CONTRIBUTING.md](CONTRIBUTING.md) for more details.

# Pbf Parsing and Serialization with JS
JS code generation

An optimized JS compiler is available from google to generate an optimize JS code to encode and decode pbf binary format.
Here are the steps to generate arcbuf.js using google js compiler:
```
# Install google protobufjs lib
npm install -g protobufjs

# Generate FeatureCollection.js based on FeatureCollection.proto schema file
pbjs -t static-module -w commonjs -o \
    FeatureCollection.js \
    FeatureCollection.proto

npm install -g browserify
# Running browserify to bundle protobuf.js and message objects together.
browserify FeatureCollection.js -o FeatureCollectionBundle.js
```
# JS Example:
```
Index.html:

<html>
<body>
 <!-- This has Arcbuf.js and protobuf.js code. -->
  <script src="FeatureCollectionBundle.js"></script>
</body>
</html>

  Query Get request with &f=pbf

let req = {
  method: 'GET',
  responseType: 'arraybuffer', // make it clear that it can handle binary
  url: '/some-arcbuf-get-endpoint'
};
return $http(req).then(function(response) {
  // Need to encapsulate the response on Uint8Array to avoid
  // getting it converted to string.
  Ctrl.FeatureCollection = FeatureCollection.decode(new Uint8Array(response.data)).queryResults;
});
```

# Query Examples (f=pbf)
Here is a description of what the query result looks like in the pbf format.

## Example 1: Feature Query Results

```
{
  version: 1
  featureResult: {
    objectIdFieldName: "ObjectId"
    globalIdFieldName: "globalId"
    geometryType: "esriGeometryTypePolyline"
    fields: field1
    fields: field2
    fields: field3
    features {
      attributes: "Egypt"
      attributes: 1.23
      attributes: "T1"
      geometry: [3 2]
      geometry: [2 2 0 8 8 0 1 1 2 4]
    }
    features {
      attributes: "USA"
      attributes: 2.23
      attributes: "T2"
      geometry: [3 2]
      geometry: [1 1 1 9 7 2 1 1 1 2]
    }
    features {
      attributes: "France"
      attributes: 3.23
      attributes: "T2"
      geometry: [3 2]
      geometry: [3 3 2 4 5 3 3 3 4 5]
    }
  }
}
```

Here are the coordinates of the 3 features above before quantization:

### Feature 1:
```
	Path1: {(2,2), (2,10), (10,10)}
	Path2: (1,1), (3,5)
```
### Feature 2:
```
	Path1: {(1,1), (2,10), (9, 9)}
	Path2: (1,1), (2,3)
```
### Feature 3:
```
	Path1: {(3, 3), (5,7), (10, 10)}
	Path2: (3, 3), (7, 8)
```
## Example 2: ObjectIds Query
```
{
	version: 1
	idsResult: {
		objectIdFieldName: "ObjectId"
		globalIdFieldName: "globalId"
		objectIds: 1
		objectIds: 3
		objectIds: 8
	}
}
```

## Example 2: Count Query
```
{
	version: 1
		countResult: {
		count: 14
	}
}
```
