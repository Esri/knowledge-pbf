// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: esriPBuffer/graph/AddDomainResponse.proto

#include "esriPBuffer/graph/AddDomainResponse.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_esriPBuffer_2fgraph_2fEsriGraphTypes_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Error_esriPBuffer_2fgraph_2fEsriGraphTypes_2eproto;
namespace esriPBuffer {
namespace graph {
class GraphDomainAddResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GraphDomainAddResponse> _instance;
} _GraphDomainAddResponse_default_instance_;
}  // namespace graph
}  // namespace esriPBuffer
static void InitDefaultsscc_info_GraphDomainAddResponse_esriPBuffer_2fgraph_2fAddDomainResponse_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::esriPBuffer::graph::_GraphDomainAddResponse_default_instance_;
    new (ptr) ::esriPBuffer::graph::GraphDomainAddResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::esriPBuffer::graph::GraphDomainAddResponse::InitAsDefaultInstance();
}

EXT_CLASS ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_GraphDomainAddResponse_esriPBuffer_2fgraph_2fAddDomainResponse_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_GraphDomainAddResponse_esriPBuffer_2fgraph_2fAddDomainResponse_2eproto}, {
      &scc_info_Error_esriPBuffer_2fgraph_2fEsriGraphTypes_2eproto.base,}};

namespace esriPBuffer {
namespace graph {

// ===================================================================

void GraphDomainAddResponse::InitAsDefaultInstance() {
  ::esriPBuffer::graph::_GraphDomainAddResponse_default_instance_._instance.get_mutable()->error_ = const_cast< ::esriPBuffer::graph::Error*>(
      ::esriPBuffer::graph::Error::internal_default_instance());
}
class GraphDomainAddResponse::_Internal {
 public:
  static const ::esriPBuffer::graph::Error& error(const GraphDomainAddResponse* msg);
};

const ::esriPBuffer::graph::Error&
GraphDomainAddResponse::_Internal::error(const GraphDomainAddResponse* msg) {
  return *msg->error_;
}
void GraphDomainAddResponse::clear_error() {
  if (GetArena() == nullptr && error_ != nullptr) {
    delete error_;
  }
  error_ = nullptr;
}
GraphDomainAddResponse::GraphDomainAddResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:esriPBuffer.graph.GraphDomainAddResponse)
}
GraphDomainAddResponse::GraphDomainAddResponse(const GraphDomainAddResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  if (from._internal_has_error()) {
    error_ = new ::esriPBuffer::graph::Error(*from.error_);
  } else {
    error_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:esriPBuffer.graph.GraphDomainAddResponse)
}

void GraphDomainAddResponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GraphDomainAddResponse_esriPBuffer_2fgraph_2fAddDomainResponse_2eproto.base);
  error_ = nullptr;
}

GraphDomainAddResponse::~GraphDomainAddResponse() {
  // @@protoc_insertion_point(destructor:esriPBuffer.graph.GraphDomainAddResponse)
  SharedDtor();
  _internal_metadata_.Delete<std::string>();
}

void GraphDomainAddResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete error_;
}

void GraphDomainAddResponse::ArenaDtor(void* object) {
  GraphDomainAddResponse* _this = reinterpret_cast< GraphDomainAddResponse* >(object);
  (void)_this;
}
void GraphDomainAddResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GraphDomainAddResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GraphDomainAddResponse& GraphDomainAddResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GraphDomainAddResponse_esriPBuffer_2fgraph_2fAddDomainResponse_2eproto.base);
  return *internal_default_instance();
}


void GraphDomainAddResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:esriPBuffer.graph.GraphDomainAddResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && error_ != nullptr) {
    delete error_;
  }
  error_ = nullptr;
  _internal_metadata_.Clear<std::string>();
}

const char* GraphDomainAddResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .esriPBuffer.graph.Error error = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_error(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* GraphDomainAddResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:esriPBuffer.graph.GraphDomainAddResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .esriPBuffer.graph.Error error = 1;
  if (this->has_error()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::error(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:esriPBuffer.graph.GraphDomainAddResponse)
  return target;
}

size_t GraphDomainAddResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:esriPBuffer.graph.GraphDomainAddResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .esriPBuffer.graph.Error error = 1;
  if (this->has_error()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *error_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GraphDomainAddResponse::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const GraphDomainAddResponse*>(
      &from));
}

void GraphDomainAddResponse::MergeFrom(const GraphDomainAddResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:esriPBuffer.graph.GraphDomainAddResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_error()) {
    _internal_mutable_error()->::esriPBuffer::graph::Error::MergeFrom(from._internal_error());
  }
}

void GraphDomainAddResponse::CopyFrom(const GraphDomainAddResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:esriPBuffer.graph.GraphDomainAddResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GraphDomainAddResponse::IsInitialized() const {
  return true;
}

void GraphDomainAddResponse::InternalSwap(GraphDomainAddResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<std::string>(&other->_internal_metadata_);
  swap(error_, other->error_);
}

std::string GraphDomainAddResponse::GetTypeName() const {
  return "esriPBuffer.graph.GraphDomainAddResponse";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace graph
}  // namespace esriPBuffer
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::esriPBuffer::graph::GraphDomainAddResponse* Arena::CreateMaybeMessage< ::esriPBuffer::graph::GraphDomainAddResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::esriPBuffer::graph::GraphDomainAddResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
