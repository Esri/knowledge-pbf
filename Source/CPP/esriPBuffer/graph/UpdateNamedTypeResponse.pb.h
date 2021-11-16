// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: esriPBuffer/graph/UpdateNamedTypeResponse.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_esriPBuffer_2fgraph_2fUpdateNamedTypeResponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_esriPBuffer_2fgraph_2fUpdateNamedTypeResponse_2eproto

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
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "esriPBuffer/graph/EsriGraphTypes.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_esriPBuffer_2fgraph_2fUpdateNamedTypeResponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_esriPBuffer_2fgraph_2fUpdateNamedTypeResponse_2eproto {
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
namespace esriPBuffer {
namespace graph {
class GraphNamedObjectTypeUpdateResponse;
class GraphNamedObjectTypeUpdateResponseDefaultTypeInternal;
extern GraphNamedObjectTypeUpdateResponseDefaultTypeInternal _GraphNamedObjectTypeUpdateResponse_default_instance_;
}  // namespace graph
}  // namespace esriPBuffer
PROTOBUF_NAMESPACE_OPEN
template<> ::esriPBuffer::graph::GraphNamedObjectTypeUpdateResponse* Arena::CreateMaybeMessage<::esriPBuffer::graph::GraphNamedObjectTypeUpdateResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace esriPBuffer {
namespace graph {

// ===================================================================

class GraphNamedObjectTypeUpdateResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:esriPBuffer.graph.GraphNamedObjectTypeUpdateResponse) */ {
 public:
  inline GraphNamedObjectTypeUpdateResponse() : GraphNamedObjectTypeUpdateResponse(nullptr) {}
  virtual ~GraphNamedObjectTypeUpdateResponse();

  GraphNamedObjectTypeUpdateResponse(const GraphNamedObjectTypeUpdateResponse& from);
  GraphNamedObjectTypeUpdateResponse(GraphNamedObjectTypeUpdateResponse&& from) noexcept
    : GraphNamedObjectTypeUpdateResponse() {
    *this = ::std::move(from);
  }

  inline GraphNamedObjectTypeUpdateResponse& operator=(const GraphNamedObjectTypeUpdateResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline GraphNamedObjectTypeUpdateResponse& operator=(GraphNamedObjectTypeUpdateResponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const GraphNamedObjectTypeUpdateResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GraphNamedObjectTypeUpdateResponse* internal_default_instance() {
    return reinterpret_cast<const GraphNamedObjectTypeUpdateResponse*>(
               &_GraphNamedObjectTypeUpdateResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GraphNamedObjectTypeUpdateResponse& a, GraphNamedObjectTypeUpdateResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(GraphNamedObjectTypeUpdateResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GraphNamedObjectTypeUpdateResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GraphNamedObjectTypeUpdateResponse* New() const final {
    return CreateMaybeMessage<GraphNamedObjectTypeUpdateResponse>(nullptr);
  }

  GraphNamedObjectTypeUpdateResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GraphNamedObjectTypeUpdateResponse>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const GraphNamedObjectTypeUpdateResponse& from);
  void MergeFrom(const GraphNamedObjectTypeUpdateResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(GraphNamedObjectTypeUpdateResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "esriPBuffer.graph.GraphNamedObjectTypeUpdateResponse";
  }
  protected:
  explicit GraphNamedObjectTypeUpdateResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrorFieldNumber = 1,
  };
  // .esriPBuffer.graph.Error error = 1;
  bool has_error() const;
  private:
  bool _internal_has_error() const;
  public:
  void clear_error();
  const ::esriPBuffer::graph::Error& error() const;
  ::esriPBuffer::graph::Error* release_error();
  ::esriPBuffer::graph::Error* mutable_error();
  void set_allocated_error(::esriPBuffer::graph::Error* error);
  private:
  const ::esriPBuffer::graph::Error& _internal_error() const;
  ::esriPBuffer::graph::Error* _internal_mutable_error();
  public:
  void unsafe_arena_set_allocated_error(
      ::esriPBuffer::graph::Error* error);
  ::esriPBuffer::graph::Error* unsafe_arena_release_error();

  // @@protoc_insertion_point(class_scope:esriPBuffer.graph.GraphNamedObjectTypeUpdateResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::esriPBuffer::graph::Error* error_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_esriPBuffer_2fgraph_2fUpdateNamedTypeResponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GraphNamedObjectTypeUpdateResponse

// .esriPBuffer.graph.Error error = 1;
inline bool GraphNamedObjectTypeUpdateResponse::_internal_has_error() const {
  return this != internal_default_instance() && error_ != nullptr;
}
inline bool GraphNamedObjectTypeUpdateResponse::has_error() const {
  return _internal_has_error();
}
inline const ::esriPBuffer::graph::Error& GraphNamedObjectTypeUpdateResponse::_internal_error() const {
  const ::esriPBuffer::graph::Error* p = error_;
  return p != nullptr ? *p : *reinterpret_cast<const ::esriPBuffer::graph::Error*>(
      &::esriPBuffer::graph::_Error_default_instance_);
}
inline const ::esriPBuffer::graph::Error& GraphNamedObjectTypeUpdateResponse::error() const {
  // @@protoc_insertion_point(field_get:esriPBuffer.graph.GraphNamedObjectTypeUpdateResponse.error)
  return _internal_error();
}
inline void GraphNamedObjectTypeUpdateResponse::unsafe_arena_set_allocated_error(
    ::esriPBuffer::graph::Error* error) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(error_);
  }
  error_ = error;
  if (error) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:esriPBuffer.graph.GraphNamedObjectTypeUpdateResponse.error)
}
inline ::esriPBuffer::graph::Error* GraphNamedObjectTypeUpdateResponse::release_error() {
  
  ::esriPBuffer::graph::Error* temp = error_;
  error_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::esriPBuffer::graph::Error* GraphNamedObjectTypeUpdateResponse::unsafe_arena_release_error() {
  // @@protoc_insertion_point(field_release:esriPBuffer.graph.GraphNamedObjectTypeUpdateResponse.error)
  
  ::esriPBuffer::graph::Error* temp = error_;
  error_ = nullptr;
  return temp;
}
inline ::esriPBuffer::graph::Error* GraphNamedObjectTypeUpdateResponse::_internal_mutable_error() {
  
  if (error_ == nullptr) {
    auto* p = CreateMaybeMessage<::esriPBuffer::graph::Error>(GetArena());
    error_ = p;
  }
  return error_;
}
inline ::esriPBuffer::graph::Error* GraphNamedObjectTypeUpdateResponse::mutable_error() {
  // @@protoc_insertion_point(field_mutable:esriPBuffer.graph.GraphNamedObjectTypeUpdateResponse.error)
  return _internal_mutable_error();
}
inline void GraphNamedObjectTypeUpdateResponse::set_allocated_error(::esriPBuffer::graph::Error* error) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(error_);
  }
  if (error) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(error)->GetArena();
    if (message_arena != submessage_arena) {
      error = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, error, submessage_arena);
    }
    
  } else {
    
  }
  error_ = error;
  // @@protoc_insertion_point(field_set_allocated:esriPBuffer.graph.GraphNamedObjectTypeUpdateResponse.error)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace graph
}  // namespace esriPBuffer

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_esriPBuffer_2fgraph_2fUpdateNamedTypeResponse_2eproto
