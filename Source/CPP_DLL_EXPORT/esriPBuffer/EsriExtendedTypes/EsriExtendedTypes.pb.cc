// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: esriPBuffer/EsriExtendedTypes/EsriExtendedTypes.proto

#include "esriPBuffer/EsriExtendedTypes/EsriExtendedTypes.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace esriPBuffer {
namespace EsriExtendedTypes {
}  // namespace EsriExtendedTypes
}  // namespace esriPBuffer
namespace esriPBuffer {
namespace EsriExtendedTypes {
bool FieldType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> FieldType_strings[14] = {};

static const char FieldType_names[] =
  "esriFieldTypeBlob"
  "esriFieldTypeDate"
  "esriFieldTypeDouble"
  "esriFieldTypeGUID"
  "esriFieldTypeGeometry"
  "esriFieldTypeGlobalID"
  "esriFieldTypeInteger"
  "esriFieldTypeOID"
  "esriFieldTypeRaster"
  "esriFieldTypeSingle"
  "esriFieldTypeSmallInteger"
  "esriFieldTypeString"
  "esriFieldTypeXML"
  "esriFieldType_UNSPECIFIED";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry FieldType_entries[] = {
  { {FieldType_names + 0, 17}, 9 },
  { {FieldType_names + 17, 17}, 6 },
  { {FieldType_names + 34, 19}, 4 },
  { {FieldType_names + 53, 17}, 11 },
  { {FieldType_names + 70, 21}, 8 },
  { {FieldType_names + 91, 21}, 12 },
  { {FieldType_names + 112, 20}, 2 },
  { {FieldType_names + 132, 16}, 7 },
  { {FieldType_names + 148, 19}, 10 },
  { {FieldType_names + 167, 19}, 3 },
  { {FieldType_names + 186, 25}, 1 },
  { {FieldType_names + 211, 19}, 5 },
  { {FieldType_names + 230, 16}, 13 },
  { {FieldType_names + 246, 25}, 0 },
};

static const int FieldType_entries_by_number[] = {
  13, // 0 -> esriFieldType_UNSPECIFIED
  10, // 1 -> esriFieldTypeSmallInteger
  6, // 2 -> esriFieldTypeInteger
  9, // 3 -> esriFieldTypeSingle
  2, // 4 -> esriFieldTypeDouble
  11, // 5 -> esriFieldTypeString
  1, // 6 -> esriFieldTypeDate
  7, // 7 -> esriFieldTypeOID
  4, // 8 -> esriFieldTypeGeometry
  0, // 9 -> esriFieldTypeBlob
  8, // 10 -> esriFieldTypeRaster
  3, // 11 -> esriFieldTypeGUID
  5, // 12 -> esriFieldTypeGlobalID
  12, // 13 -> esriFieldTypeXML
};

const std::string& FieldType_Name(
    FieldType value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          FieldType_entries,
          FieldType_entries_by_number,
          14, FieldType_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      FieldType_entries,
      FieldType_entries_by_number,
      14, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     FieldType_strings[idx].get();
}
bool FieldType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, FieldType* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      FieldType_entries, 14, name, &int_value);
  if (success) {
    *value = static_cast<FieldType>(int_value);
  }
  return success;
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace EsriExtendedTypes
}  // namespace esriPBuffer
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
