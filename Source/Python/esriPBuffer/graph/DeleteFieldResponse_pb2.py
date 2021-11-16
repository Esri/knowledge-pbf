# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: esriPBuffer/graph/DeleteFieldResponse.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from esriPBuffer.graph import EsriGraphTypes_pb2 as esriPBuffer_dot_graph_dot_EsriGraphTypes__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='esriPBuffer/graph/DeleteFieldResponse.proto',
  package='esriPBuffer.graph',
  syntax='proto3',
  serialized_options=b'\n\036com.esri.arcgis.protobuf.graphH\003\370\001\001',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n+esriPBuffer/graph/DeleteFieldResponse.proto\x12\x11\x65sriPBuffer.graph\x1a&esriPBuffer/graph/EsriGraphTypes.proto\"F\n\x1bGraphPropertyDeleteResponse\x12\'\n\x05\x65rror\x18\x01 \x01(\x0b\x32\x18.esriPBuffer.graph.ErrorB%\n\x1e\x63om.esri.arcgis.protobuf.graphH\x03\xf8\x01\x01\x62\x06proto3'
  ,
  dependencies=[esriPBuffer_dot_graph_dot_EsriGraphTypes__pb2.DESCRIPTOR,])




_GRAPHPROPERTYDELETERESPONSE = _descriptor.Descriptor(
  name='GraphPropertyDeleteResponse',
  full_name='esriPBuffer.graph.GraphPropertyDeleteResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='error', full_name='esriPBuffer.graph.GraphPropertyDeleteResponse.error', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=106,
  serialized_end=176,
)

_GRAPHPROPERTYDELETERESPONSE.fields_by_name['error'].message_type = esriPBuffer_dot_graph_dot_EsriGraphTypes__pb2._ERROR
DESCRIPTOR.message_types_by_name['GraphPropertyDeleteResponse'] = _GRAPHPROPERTYDELETERESPONSE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

GraphPropertyDeleteResponse = _reflection.GeneratedProtocolMessageType('GraphPropertyDeleteResponse', (_message.Message,), {
  'DESCRIPTOR' : _GRAPHPROPERTYDELETERESPONSE,
  '__module__' : 'esriPBuffer.graph.DeleteFieldResponse_pb2'
  # @@protoc_insertion_point(class_scope:esriPBuffer.graph.GraphPropertyDeleteResponse)
  })
_sym_db.RegisterMessage(GraphPropertyDeleteResponse)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
