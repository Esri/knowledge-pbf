// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: esriPBuffer/EsriExtendedTypes/EsriExtendedTypes.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_esriPBuffer_2fEsriExtendedTypes_2fEsriExtendedTypes_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_esriPBuffer_2fEsriExtendedTypes_2fEsriExtendedTypes_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_esriPBuffer_2fEsriExtendedTypes_2fEsriExtendedTypes_2eproto EXT_CLASS
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct EXT_CLASS TableStruct_esriPBuffer_2fEsriExtendedTypes_2fEsriExtendedTypes_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace esriPBuffer {
namespace EsriExtendedTypes {

enum FieldType : int {
  esriFieldType_UNSPECIFIED = 0,
  esriFieldTypeSmallInteger = 1,
  esriFieldTypeInteger = 2,
  esriFieldTypeSingle = 3,
  esriFieldTypeDouble = 4,
  esriFieldTypeString = 5,
  esriFieldTypeDate = 6,
  esriFieldTypeOID = 7,
  esriFieldTypeGeometry = 8,
  esriFieldTypeBlob = 9,
  esriFieldTypeRaster = 10,
  esriFieldTypeGUID = 11,
  esriFieldTypeGlobalID = 12,
  esriFieldTypeXML = 13,
  FieldType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  FieldType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
EXT_CLASS bool FieldType_IsValid(int value);
constexpr FieldType FieldType_MIN = esriFieldType_UNSPECIFIED;
constexpr FieldType FieldType_MAX = esriFieldTypeXML;
constexpr int FieldType_ARRAYSIZE = FieldType_MAX + 1;

const std::string& FieldType_Name(FieldType value);
template<typename T>
inline const std::string& FieldType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, FieldType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function FieldType_Name.");
  return FieldType_Name(static_cast<FieldType>(enum_t_value));
}
bool FieldType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, FieldType* value);
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace EsriExtendedTypes
}  // namespace esriPBuffer

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::esriPBuffer::EsriExtendedTypes::FieldType> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_esriPBuffer_2fEsriExtendedTypes_2fEsriExtendedTypes_2eproto
