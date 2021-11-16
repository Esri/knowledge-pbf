// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: esriPBuffer/graph/QueryDataModelResponse.proto

#include "esriPBuffer/graph/QueryDataModelResponse.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_esriPBuffer_2fEsriTypes_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_EsriTypes_Domain_esriPBuffer_2fEsriTypes_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_esriPBuffer_2fEsriTypes_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_EsriTypes_SpatialReference_esriPBuffer_2fEsriTypes_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_esriPBuffer_2fgraph_2fDataModelTypes_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_EntityType_esriPBuffer_2fgraph_2fDataModelTypes_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_esriPBuffer_2fgraph_2fDataModelTypes_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GraphDocumentEntityTypeInfo_esriPBuffer_2fgraph_2fDataModelTypes_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_esriPBuffer_2fgraph_2fDataModelTypes_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_RelationshipType_esriPBuffer_2fgraph_2fDataModelTypes_2eproto;
namespace esriPBuffer {
namespace graph {
class GraphDataModelDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GraphDataModel> _instance;
} _GraphDataModel_default_instance_;
}  // namespace graph
}  // namespace esriPBuffer
static void InitDefaultsscc_info_GraphDataModel_esriPBuffer_2fgraph_2fQueryDataModelResponse_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::esriPBuffer::graph::_GraphDataModel_default_instance_;
    new (ptr) ::esriPBuffer::graph::GraphDataModel();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::esriPBuffer::graph::GraphDataModel::InitAsDefaultInstance();
}

EXT_CLASS ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<5> scc_info_GraphDataModel_esriPBuffer_2fgraph_2fQueryDataModelResponse_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 5, 0, InitDefaultsscc_info_GraphDataModel_esriPBuffer_2fgraph_2fQueryDataModelResponse_2eproto}, {
      &scc_info_EsriTypes_SpatialReference_esriPBuffer_2fEsriTypes_2eproto.base,
      &scc_info_EsriTypes_Domain_esriPBuffer_2fEsriTypes_2eproto.base,
      &scc_info_EntityType_esriPBuffer_2fgraph_2fDataModelTypes_2eproto.base,
      &scc_info_RelationshipType_esriPBuffer_2fgraph_2fDataModelTypes_2eproto.base,
      &scc_info_GraphDocumentEntityTypeInfo_esriPBuffer_2fgraph_2fDataModelTypes_2eproto.base,}};

namespace esriPBuffer {
namespace graph {

// ===================================================================

void GraphDataModel::InitAsDefaultInstance() {
  ::esriPBuffer::graph::_GraphDataModel_default_instance_._instance.get_mutable()->spatial_reference_ = const_cast< ::esriPBuffer::EsriTypes_SpatialReference*>(
      ::esriPBuffer::EsriTypes_SpatialReference::internal_default_instance());
  ::esriPBuffer::graph::_GraphDataModel_default_instance_._instance.get_mutable()->doc_entity_type_info_ = const_cast< ::esriPBuffer::graph::GraphDocumentEntityTypeInfo*>(
      ::esriPBuffer::graph::GraphDocumentEntityTypeInfo::internal_default_instance());
}
class GraphDataModel::_Internal {
 public:
  static const ::esriPBuffer::EsriTypes_SpatialReference& spatial_reference(const GraphDataModel* msg);
  static const ::esriPBuffer::graph::GraphDocumentEntityTypeInfo& doc_entity_type_info(const GraphDataModel* msg);
};

const ::esriPBuffer::EsriTypes_SpatialReference&
GraphDataModel::_Internal::spatial_reference(const GraphDataModel* msg) {
  return *msg->spatial_reference_;
}
const ::esriPBuffer::graph::GraphDocumentEntityTypeInfo&
GraphDataModel::_Internal::doc_entity_type_info(const GraphDataModel* msg) {
  return *msg->doc_entity_type_info_;
}
void GraphDataModel::clear_spatial_reference() {
  if (GetArena() == nullptr && spatial_reference_ != nullptr) {
    delete spatial_reference_;
  }
  spatial_reference_ = nullptr;
}
void GraphDataModel::clear_domains() {
  domains_.Clear();
}
void GraphDataModel::clear_entity_types() {
  entity_types_.Clear();
}
void GraphDataModel::clear_relationship_types() {
  relationship_types_.Clear();
}
void GraphDataModel::clear_doc_entity_type_info() {
  if (GetArena() == nullptr && doc_entity_type_info_ != nullptr) {
    delete doc_entity_type_info_;
  }
  doc_entity_type_info_ = nullptr;
}
GraphDataModel::GraphDataModel(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena),
  domains_(arena),
  entity_types_(arena),
  relationship_types_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:esriPBuffer.graph.GraphDataModel)
}
GraphDataModel::GraphDataModel(const GraphDataModel& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      domains_(from.domains_),
      entity_types_(from.entity_types_),
      relationship_types_(from.relationship_types_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  objectid_property_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_objectid_property().empty()) {
    objectid_property_.SetLite(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_objectid_property(),
      GetArena());
  }
  globalid_property_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_globalid_property().empty()) {
    globalid_property_.SetLite(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_globalid_property(),
      GetArena());
  }
  origin_entity_globalid_property_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_origin_entity_globalid_property().empty()) {
    origin_entity_globalid_property_.SetLite(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_origin_entity_globalid_property(),
      GetArena());
  }
  dest_entity_globalid_property_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_dest_entity_globalid_property().empty()) {
    dest_entity_globalid_property_.SetLite(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_dest_entity_globalid_property(),
      GetArena());
  }
  if (from._internal_has_spatial_reference()) {
    spatial_reference_ = new ::esriPBuffer::EsriTypes_SpatialReference(*from.spatial_reference_);
  } else {
    spatial_reference_ = nullptr;
  }
  if (from._internal_has_doc_entity_type_info()) {
    doc_entity_type_info_ = new ::esriPBuffer::graph::GraphDocumentEntityTypeInfo(*from.doc_entity_type_info_);
  } else {
    doc_entity_type_info_ = nullptr;
  }
  ::memcpy(&data_model_timestamp_, &from.data_model_timestamp_,
    static_cast<size_t>(reinterpret_cast<char*>(&strict_) -
    reinterpret_cast<char*>(&data_model_timestamp_)) + sizeof(strict_));
  // @@protoc_insertion_point(copy_constructor:esriPBuffer.graph.GraphDataModel)
}

void GraphDataModel::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GraphDataModel_esriPBuffer_2fgraph_2fQueryDataModelResponse_2eproto.base);
  objectid_property_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  globalid_property_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  origin_entity_globalid_property_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  dest_entity_globalid_property_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&spatial_reference_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&strict_) -
      reinterpret_cast<char*>(&spatial_reference_)) + sizeof(strict_));
}

GraphDataModel::~GraphDataModel() {
  // @@protoc_insertion_point(destructor:esriPBuffer.graph.GraphDataModel)
  SharedDtor();
  _internal_metadata_.Delete<std::string>();
}

void GraphDataModel::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  objectid_property_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  globalid_property_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  origin_entity_globalid_property_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  dest_entity_globalid_property_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete spatial_reference_;
  if (this != internal_default_instance()) delete doc_entity_type_info_;
}

void GraphDataModel::ArenaDtor(void* object) {
  GraphDataModel* _this = reinterpret_cast< GraphDataModel* >(object);
  (void)_this;
}
void GraphDataModel::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GraphDataModel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GraphDataModel& GraphDataModel::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GraphDataModel_esriPBuffer_2fgraph_2fQueryDataModelResponse_2eproto.base);
  return *internal_default_instance();
}


void GraphDataModel::Clear() {
// @@protoc_insertion_point(message_clear_start:esriPBuffer.graph.GraphDataModel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  domains_.Clear();
  entity_types_.Clear();
  relationship_types_.Clear();
  objectid_property_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  globalid_property_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  origin_entity_globalid_property_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  dest_entity_globalid_property_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  if (GetArena() == nullptr && spatial_reference_ != nullptr) {
    delete spatial_reference_;
  }
  spatial_reference_ = nullptr;
  if (GetArena() == nullptr && doc_entity_type_info_ != nullptr) {
    delete doc_entity_type_info_;
  }
  doc_entity_type_info_ = nullptr;
  ::memset(&data_model_timestamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&strict_) -
      reinterpret_cast<char*>(&data_model_timestamp_)) + sizeof(strict_));
  _internal_metadata_.Clear<std::string>();
}

const char* GraphDataModel::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint64 data_model_timestamp = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          data_model_timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .esriPBuffer.EsriTypes.SpatialReference spatial_reference = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_spatial_reference(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .esriPBuffer.EsriTypes.Domain domains = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_domains(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .esriPBuffer.graph.EntityType entity_types = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_entity_types(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .esriPBuffer.graph.RelationshipType relationship_types = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_relationship_types(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else goto handle_unusual;
        continue;
      // bool strict = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          strict_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string objectid_property = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_objectid_property();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, nullptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string globalid_property = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          auto str = _internal_mutable_globalid_property();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, nullptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string origin_entity_globalid_property = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          auto str = _internal_mutable_origin_entity_globalid_property();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, nullptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string dest_entity_globalid_property = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          auto str = _internal_mutable_dest_entity_globalid_property();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, nullptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .esriPBuffer.graph.GraphDocumentEntityTypeInfo doc_entity_type_info = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          ptr = ctx->ParseMessage(_internal_mutable_doc_entity_type_info(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<std::string>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* GraphDataModel::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:esriPBuffer.graph.GraphDataModel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 data_model_timestamp = 1;
  if (this->data_model_timestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_data_model_timestamp(), target);
  }

  // .esriPBuffer.EsriTypes.SpatialReference spatial_reference = 2;
  if (this->has_spatial_reference()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::spatial_reference(this), target, stream);
  }

  // repeated .esriPBuffer.EsriTypes.Domain domains = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_domains_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_domains(i), target, stream);
  }

  // repeated .esriPBuffer.graph.EntityType entity_types = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_entity_types_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_entity_types(i), target, stream);
  }

  // repeated .esriPBuffer.graph.RelationshipType relationship_types = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_relationship_types_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, this->_internal_relationship_types(i), target, stream);
  }

  // bool strict = 6;
  if (this->strict() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(6, this->_internal_strict(), target);
  }

  // string objectid_property = 7;
  if (this->objectid_property().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_objectid_property().data(), static_cast<int>(this->_internal_objectid_property().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "esriPBuffer.graph.GraphDataModel.objectid_property");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_objectid_property(), target);
  }

  // string globalid_property = 8;
  if (this->globalid_property().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_globalid_property().data(), static_cast<int>(this->_internal_globalid_property().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "esriPBuffer.graph.GraphDataModel.globalid_property");
    target = stream->WriteStringMaybeAliased(
        8, this->_internal_globalid_property(), target);
  }

  // string origin_entity_globalid_property = 9;
  if (this->origin_entity_globalid_property().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_origin_entity_globalid_property().data(), static_cast<int>(this->_internal_origin_entity_globalid_property().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "esriPBuffer.graph.GraphDataModel.origin_entity_globalid_property");
    target = stream->WriteStringMaybeAliased(
        9, this->_internal_origin_entity_globalid_property(), target);
  }

  // string dest_entity_globalid_property = 10;
  if (this->dest_entity_globalid_property().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_dest_entity_globalid_property().data(), static_cast<int>(this->_internal_dest_entity_globalid_property().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "esriPBuffer.graph.GraphDataModel.dest_entity_globalid_property");
    target = stream->WriteStringMaybeAliased(
        10, this->_internal_dest_entity_globalid_property(), target);
  }

  // .esriPBuffer.graph.GraphDocumentEntityTypeInfo doc_entity_type_info = 11;
  if (this->has_doc_entity_type_info()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        11, _Internal::doc_entity_type_info(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:esriPBuffer.graph.GraphDataModel)
  return target;
}

size_t GraphDataModel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:esriPBuffer.graph.GraphDataModel)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .esriPBuffer.EsriTypes.Domain domains = 3;
  total_size += 1UL * this->_internal_domains_size();
  for (const auto& msg : this->domains_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .esriPBuffer.graph.EntityType entity_types = 4;
  total_size += 1UL * this->_internal_entity_types_size();
  for (const auto& msg : this->entity_types_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .esriPBuffer.graph.RelationshipType relationship_types = 5;
  total_size += 1UL * this->_internal_relationship_types_size();
  for (const auto& msg : this->relationship_types_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string objectid_property = 7;
  if (this->objectid_property().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_objectid_property());
  }

  // string globalid_property = 8;
  if (this->globalid_property().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_globalid_property());
  }

  // string origin_entity_globalid_property = 9;
  if (this->origin_entity_globalid_property().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_origin_entity_globalid_property());
  }

  // string dest_entity_globalid_property = 10;
  if (this->dest_entity_globalid_property().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_dest_entity_globalid_property());
  }

  // .esriPBuffer.EsriTypes.SpatialReference spatial_reference = 2;
  if (this->has_spatial_reference()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *spatial_reference_);
  }

  // .esriPBuffer.graph.GraphDocumentEntityTypeInfo doc_entity_type_info = 11;
  if (this->has_doc_entity_type_info()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *doc_entity_type_info_);
  }

  // uint64 data_model_timestamp = 1;
  if (this->data_model_timestamp() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_data_model_timestamp());
  }

  // bool strict = 6;
  if (this->strict() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GraphDataModel::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const GraphDataModel*>(
      &from));
}

void GraphDataModel::MergeFrom(const GraphDataModel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:esriPBuffer.graph.GraphDataModel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  domains_.MergeFrom(from.domains_);
  entity_types_.MergeFrom(from.entity_types_);
  relationship_types_.MergeFrom(from.relationship_types_);
  if (from.objectid_property().size() > 0) {
    _internal_set_objectid_property(from._internal_objectid_property());
  }
  if (from.globalid_property().size() > 0) {
    _internal_set_globalid_property(from._internal_globalid_property());
  }
  if (from.origin_entity_globalid_property().size() > 0) {
    _internal_set_origin_entity_globalid_property(from._internal_origin_entity_globalid_property());
  }
  if (from.dest_entity_globalid_property().size() > 0) {
    _internal_set_dest_entity_globalid_property(from._internal_dest_entity_globalid_property());
  }
  if (from.has_spatial_reference()) {
    _internal_mutable_spatial_reference()->::esriPBuffer::EsriTypes_SpatialReference::MergeFrom(from._internal_spatial_reference());
  }
  if (from.has_doc_entity_type_info()) {
    _internal_mutable_doc_entity_type_info()->::esriPBuffer::graph::GraphDocumentEntityTypeInfo::MergeFrom(from._internal_doc_entity_type_info());
  }
  if (from.data_model_timestamp() != 0) {
    _internal_set_data_model_timestamp(from._internal_data_model_timestamp());
  }
  if (from.strict() != 0) {
    _internal_set_strict(from._internal_strict());
  }
}

void GraphDataModel::CopyFrom(const GraphDataModel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:esriPBuffer.graph.GraphDataModel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GraphDataModel::IsInitialized() const {
  return true;
}

void GraphDataModel::InternalSwap(GraphDataModel* other) {
  using std::swap;
  _internal_metadata_.Swap<std::string>(&other->_internal_metadata_);
  domains_.InternalSwap(&other->domains_);
  entity_types_.InternalSwap(&other->entity_types_);
  relationship_types_.InternalSwap(&other->relationship_types_);
  objectid_property_.Swap(&other->objectid_property_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  globalid_property_.Swap(&other->globalid_property_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  origin_entity_globalid_property_.Swap(&other->origin_entity_globalid_property_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  dest_entity_globalid_property_.Swap(&other->dest_entity_globalid_property_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GraphDataModel, strict_)
      + sizeof(GraphDataModel::strict_)
      - PROTOBUF_FIELD_OFFSET(GraphDataModel, spatial_reference_)>(
          reinterpret_cast<char*>(&spatial_reference_),
          reinterpret_cast<char*>(&other->spatial_reference_));
}

std::string GraphDataModel::GetTypeName() const {
  return "esriPBuffer.graph.GraphDataModel";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace graph
}  // namespace esriPBuffer
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::esriPBuffer::graph::GraphDataModel* Arena::CreateMaybeMessage< ::esriPBuffer::graph::GraphDataModel >(Arena* arena) {
  return Arena::CreateMessageInternal< ::esriPBuffer::graph::GraphDataModel >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
