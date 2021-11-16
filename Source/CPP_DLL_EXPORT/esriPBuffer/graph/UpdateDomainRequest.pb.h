// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: esriPBuffer/graph/UpdateDomainRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_esriPBuffer_2fgraph_2fUpdateDomainRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_esriPBuffer_2fgraph_2fUpdateDomainRequest_2eproto

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
#include "esriPBuffer/EsriTypes.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_esriPBuffer_2fgraph_2fUpdateDomainRequest_2eproto EXT_CLASS
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct EXT_CLASS TableStruct_esriPBuffer_2fgraph_2fUpdateDomainRequest_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace esriPBuffer {
namespace graph {
class DomainMask;
class DomainMaskDefaultTypeInternal;
EXT_CLASS extern DomainMaskDefaultTypeInternal _DomainMask_default_instance_;
class DomainUpdateRequest;
class DomainUpdateRequestDefaultTypeInternal;
EXT_CLASS extern DomainUpdateRequestDefaultTypeInternal _DomainUpdateRequest_default_instance_;
}  // namespace graph
}  // namespace esriPBuffer
PROTOBUF_NAMESPACE_OPEN
template<> EXT_CLASS ::esriPBuffer::graph::DomainMask* Arena::CreateMaybeMessage<::esriPBuffer::graph::DomainMask>(Arena*);
template<> EXT_CLASS ::esriPBuffer::graph::DomainUpdateRequest* Arena::CreateMaybeMessage<::esriPBuffer::graph::DomainUpdateRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace esriPBuffer {
namespace graph {

// ===================================================================

class EXT_CLASS DomainMask PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:esriPBuffer.graph.DomainMask) */ {
 public:
  inline DomainMask() : DomainMask(nullptr) {}
  virtual ~DomainMask();

  DomainMask(const DomainMask& from);
  DomainMask(DomainMask&& from) noexcept
    : DomainMask() {
    *this = ::std::move(from);
  }

  inline DomainMask& operator=(const DomainMask& from) {
    CopyFrom(from);
    return *this;
  }
  inline DomainMask& operator=(DomainMask&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const DomainMask& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DomainMask* internal_default_instance() {
    return reinterpret_cast<const DomainMask*>(
               &_DomainMask_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DomainMask& a, DomainMask& b) {
    a.Swap(&b);
  }
  inline void Swap(DomainMask* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(DomainMask* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DomainMask* New() const final {
    return CreateMaybeMessage<DomainMask>(nullptr);
  }

  DomainMask* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DomainMask>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const DomainMask& from);
  void MergeFrom(const DomainMask& from);
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
  void InternalSwap(DomainMask* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "esriPBuffer.graph.DomainMask";
  }
  protected:
  explicit DomainMask(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUpdateTypeFieldNumber = 1,
    kUpdateNameFieldNumber = 2,
    kUpdateDomainFieldNumber = 3,
    kUpdateFieldTypeFieldNumber = 4,
    kUpdateMergePolicyFieldNumber = 5,
    kUpdateSplitPolicyFieldNumber = 6,
  };
  // bool update_type = 1;
  void clear_update_type();
  bool update_type() const;
  void set_update_type(bool value);
  private:
  bool _internal_update_type() const;
  void _internal_set_update_type(bool value);
  public:

  // bool update_name = 2;
  void clear_update_name();
  bool update_name() const;
  void set_update_name(bool value);
  private:
  bool _internal_update_name() const;
  void _internal_set_update_name(bool value);
  public:

  // bool update_domain = 3;
  void clear_update_domain();
  bool update_domain() const;
  void set_update_domain(bool value);
  private:
  bool _internal_update_domain() const;
  void _internal_set_update_domain(bool value);
  public:

  // bool update_field_type = 4;
  void clear_update_field_type();
  bool update_field_type() const;
  void set_update_field_type(bool value);
  private:
  bool _internal_update_field_type() const;
  void _internal_set_update_field_type(bool value);
  public:

  // bool update_merge_policy = 5;
  void clear_update_merge_policy();
  bool update_merge_policy() const;
  void set_update_merge_policy(bool value);
  private:
  bool _internal_update_merge_policy() const;
  void _internal_set_update_merge_policy(bool value);
  public:

  // bool update_split_policy = 6;
  void clear_update_split_policy();
  bool update_split_policy() const;
  void set_update_split_policy(bool value);
  private:
  bool _internal_update_split_policy() const;
  void _internal_set_update_split_policy(bool value);
  public:

  // @@protoc_insertion_point(class_scope:esriPBuffer.graph.DomainMask)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool update_type_;
  bool update_name_;
  bool update_domain_;
  bool update_field_type_;
  bool update_merge_policy_;
  bool update_split_policy_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_esriPBuffer_2fgraph_2fUpdateDomainRequest_2eproto;
};
// -------------------------------------------------------------------

class EXT_CLASS DomainUpdateRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:esriPBuffer.graph.DomainUpdateRequest) */ {
 public:
  inline DomainUpdateRequest() : DomainUpdateRequest(nullptr) {}
  virtual ~DomainUpdateRequest();

  DomainUpdateRequest(const DomainUpdateRequest& from);
  DomainUpdateRequest(DomainUpdateRequest&& from) noexcept
    : DomainUpdateRequest() {
    *this = ::std::move(from);
  }

  inline DomainUpdateRequest& operator=(const DomainUpdateRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline DomainUpdateRequest& operator=(DomainUpdateRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const DomainUpdateRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DomainUpdateRequest* internal_default_instance() {
    return reinterpret_cast<const DomainUpdateRequest*>(
               &_DomainUpdateRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(DomainUpdateRequest& a, DomainUpdateRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(DomainUpdateRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(DomainUpdateRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DomainUpdateRequest* New() const final {
    return CreateMaybeMessage<DomainUpdateRequest>(nullptr);
  }

  DomainUpdateRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DomainUpdateRequest>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const DomainUpdateRequest& from);
  void MergeFrom(const DomainUpdateRequest& from);
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
  void InternalSwap(DomainUpdateRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "esriPBuffer.graph.DomainUpdateRequest";
  }
  protected:
  explicit DomainUpdateRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMaskFieldNumber = 1,
    kDomainFieldNumber = 2,
  };
  // .esriPBuffer.graph.DomainMask mask = 1;
  bool has_mask() const;
  private:
  bool _internal_has_mask() const;
  public:
  void clear_mask();
  const ::esriPBuffer::graph::DomainMask& mask() const;
  ::esriPBuffer::graph::DomainMask* release_mask();
  ::esriPBuffer::graph::DomainMask* mutable_mask();
  void set_allocated_mask(::esriPBuffer::graph::DomainMask* mask);
  private:
  const ::esriPBuffer::graph::DomainMask& _internal_mask() const;
  ::esriPBuffer::graph::DomainMask* _internal_mutable_mask();
  public:
  void unsafe_arena_set_allocated_mask(
      ::esriPBuffer::graph::DomainMask* mask);
  ::esriPBuffer::graph::DomainMask* unsafe_arena_release_mask();

  // .esriPBuffer.EsriTypes.Domain domain = 2;
  bool has_domain() const;
  private:
  bool _internal_has_domain() const;
  public:
  void clear_domain();
  const ::esriPBuffer::EsriTypes_Domain& domain() const;
  ::esriPBuffer::EsriTypes_Domain* release_domain();
  ::esriPBuffer::EsriTypes_Domain* mutable_domain();
  void set_allocated_domain(::esriPBuffer::EsriTypes_Domain* domain);
  private:
  const ::esriPBuffer::EsriTypes_Domain& _internal_domain() const;
  ::esriPBuffer::EsriTypes_Domain* _internal_mutable_domain();
  public:
  void unsafe_arena_set_allocated_domain(
      ::esriPBuffer::EsriTypes_Domain* domain);
  ::esriPBuffer::EsriTypes_Domain* unsafe_arena_release_domain();

  // @@protoc_insertion_point(class_scope:esriPBuffer.graph.DomainUpdateRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::esriPBuffer::graph::DomainMask* mask_;
  ::esriPBuffer::EsriTypes_Domain* domain_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_esriPBuffer_2fgraph_2fUpdateDomainRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DomainMask

// bool update_type = 1;
inline void DomainMask::clear_update_type() {
  update_type_ = false;
}
inline bool DomainMask::_internal_update_type() const {
  return update_type_;
}
inline bool DomainMask::update_type() const {
  // @@protoc_insertion_point(field_get:esriPBuffer.graph.DomainMask.update_type)
  return _internal_update_type();
}
inline void DomainMask::_internal_set_update_type(bool value) {
  
  update_type_ = value;
}
inline void DomainMask::set_update_type(bool value) {
  _internal_set_update_type(value);
  // @@protoc_insertion_point(field_set:esriPBuffer.graph.DomainMask.update_type)
}

// bool update_name = 2;
inline void DomainMask::clear_update_name() {
  update_name_ = false;
}
inline bool DomainMask::_internal_update_name() const {
  return update_name_;
}
inline bool DomainMask::update_name() const {
  // @@protoc_insertion_point(field_get:esriPBuffer.graph.DomainMask.update_name)
  return _internal_update_name();
}
inline void DomainMask::_internal_set_update_name(bool value) {
  
  update_name_ = value;
}
inline void DomainMask::set_update_name(bool value) {
  _internal_set_update_name(value);
  // @@protoc_insertion_point(field_set:esriPBuffer.graph.DomainMask.update_name)
}

// bool update_domain = 3;
inline void DomainMask::clear_update_domain() {
  update_domain_ = false;
}
inline bool DomainMask::_internal_update_domain() const {
  return update_domain_;
}
inline bool DomainMask::update_domain() const {
  // @@protoc_insertion_point(field_get:esriPBuffer.graph.DomainMask.update_domain)
  return _internal_update_domain();
}
inline void DomainMask::_internal_set_update_domain(bool value) {
  
  update_domain_ = value;
}
inline void DomainMask::set_update_domain(bool value) {
  _internal_set_update_domain(value);
  // @@protoc_insertion_point(field_set:esriPBuffer.graph.DomainMask.update_domain)
}

// bool update_field_type = 4;
inline void DomainMask::clear_update_field_type() {
  update_field_type_ = false;
}
inline bool DomainMask::_internal_update_field_type() const {
  return update_field_type_;
}
inline bool DomainMask::update_field_type() const {
  // @@protoc_insertion_point(field_get:esriPBuffer.graph.DomainMask.update_field_type)
  return _internal_update_field_type();
}
inline void DomainMask::_internal_set_update_field_type(bool value) {
  
  update_field_type_ = value;
}
inline void DomainMask::set_update_field_type(bool value) {
  _internal_set_update_field_type(value);
  // @@protoc_insertion_point(field_set:esriPBuffer.graph.DomainMask.update_field_type)
}

// bool update_merge_policy = 5;
inline void DomainMask::clear_update_merge_policy() {
  update_merge_policy_ = false;
}
inline bool DomainMask::_internal_update_merge_policy() const {
  return update_merge_policy_;
}
inline bool DomainMask::update_merge_policy() const {
  // @@protoc_insertion_point(field_get:esriPBuffer.graph.DomainMask.update_merge_policy)
  return _internal_update_merge_policy();
}
inline void DomainMask::_internal_set_update_merge_policy(bool value) {
  
  update_merge_policy_ = value;
}
inline void DomainMask::set_update_merge_policy(bool value) {
  _internal_set_update_merge_policy(value);
  // @@protoc_insertion_point(field_set:esriPBuffer.graph.DomainMask.update_merge_policy)
}

// bool update_split_policy = 6;
inline void DomainMask::clear_update_split_policy() {
  update_split_policy_ = false;
}
inline bool DomainMask::_internal_update_split_policy() const {
  return update_split_policy_;
}
inline bool DomainMask::update_split_policy() const {
  // @@protoc_insertion_point(field_get:esriPBuffer.graph.DomainMask.update_split_policy)
  return _internal_update_split_policy();
}
inline void DomainMask::_internal_set_update_split_policy(bool value) {
  
  update_split_policy_ = value;
}
inline void DomainMask::set_update_split_policy(bool value) {
  _internal_set_update_split_policy(value);
  // @@protoc_insertion_point(field_set:esriPBuffer.graph.DomainMask.update_split_policy)
}

// -------------------------------------------------------------------

// DomainUpdateRequest

// .esriPBuffer.graph.DomainMask mask = 1;
inline bool DomainUpdateRequest::_internal_has_mask() const {
  return this != internal_default_instance() && mask_ != nullptr;
}
inline bool DomainUpdateRequest::has_mask() const {
  return _internal_has_mask();
}
inline void DomainUpdateRequest::clear_mask() {
  if (GetArena() == nullptr && mask_ != nullptr) {
    delete mask_;
  }
  mask_ = nullptr;
}
inline const ::esriPBuffer::graph::DomainMask& DomainUpdateRequest::_internal_mask() const {
  const ::esriPBuffer::graph::DomainMask* p = mask_;
  return p != nullptr ? *p : *reinterpret_cast<const ::esriPBuffer::graph::DomainMask*>(
      &::esriPBuffer::graph::_DomainMask_default_instance_);
}
inline const ::esriPBuffer::graph::DomainMask& DomainUpdateRequest::mask() const {
  // @@protoc_insertion_point(field_get:esriPBuffer.graph.DomainUpdateRequest.mask)
  return _internal_mask();
}
inline void DomainUpdateRequest::unsafe_arena_set_allocated_mask(
    ::esriPBuffer::graph::DomainMask* mask) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(mask_);
  }
  mask_ = mask;
  if (mask) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:esriPBuffer.graph.DomainUpdateRequest.mask)
}
inline ::esriPBuffer::graph::DomainMask* DomainUpdateRequest::release_mask() {
  
  ::esriPBuffer::graph::DomainMask* temp = mask_;
  mask_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::esriPBuffer::graph::DomainMask* DomainUpdateRequest::unsafe_arena_release_mask() {
  // @@protoc_insertion_point(field_release:esriPBuffer.graph.DomainUpdateRequest.mask)
  
  ::esriPBuffer::graph::DomainMask* temp = mask_;
  mask_ = nullptr;
  return temp;
}
inline ::esriPBuffer::graph::DomainMask* DomainUpdateRequest::_internal_mutable_mask() {
  
  if (mask_ == nullptr) {
    auto* p = CreateMaybeMessage<::esriPBuffer::graph::DomainMask>(GetArena());
    mask_ = p;
  }
  return mask_;
}
inline ::esriPBuffer::graph::DomainMask* DomainUpdateRequest::mutable_mask() {
  // @@protoc_insertion_point(field_mutable:esriPBuffer.graph.DomainUpdateRequest.mask)
  return _internal_mutable_mask();
}
inline void DomainUpdateRequest::set_allocated_mask(::esriPBuffer::graph::DomainMask* mask) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete mask_;
  }
  if (mask) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::GetArena(mask);
    if (message_arena != submessage_arena) {
      mask = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, mask, submessage_arena);
    }
    
  } else {
    
  }
  mask_ = mask;
  // @@protoc_insertion_point(field_set_allocated:esriPBuffer.graph.DomainUpdateRequest.mask)
}

// .esriPBuffer.EsriTypes.Domain domain = 2;
inline bool DomainUpdateRequest::_internal_has_domain() const {
  return this != internal_default_instance() && domain_ != nullptr;
}
inline bool DomainUpdateRequest::has_domain() const {
  return _internal_has_domain();
}
inline const ::esriPBuffer::EsriTypes_Domain& DomainUpdateRequest::_internal_domain() const {
  const ::esriPBuffer::EsriTypes_Domain* p = domain_;
  return p != nullptr ? *p : *reinterpret_cast<const ::esriPBuffer::EsriTypes_Domain*>(
      &::esriPBuffer::_EsriTypes_Domain_default_instance_);
}
inline const ::esriPBuffer::EsriTypes_Domain& DomainUpdateRequest::domain() const {
  // @@protoc_insertion_point(field_get:esriPBuffer.graph.DomainUpdateRequest.domain)
  return _internal_domain();
}
inline void DomainUpdateRequest::unsafe_arena_set_allocated_domain(
    ::esriPBuffer::EsriTypes_Domain* domain) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(domain_);
  }
  domain_ = domain;
  if (domain) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:esriPBuffer.graph.DomainUpdateRequest.domain)
}
inline ::esriPBuffer::EsriTypes_Domain* DomainUpdateRequest::release_domain() {
  
  ::esriPBuffer::EsriTypes_Domain* temp = domain_;
  domain_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::esriPBuffer::EsriTypes_Domain* DomainUpdateRequest::unsafe_arena_release_domain() {
  // @@protoc_insertion_point(field_release:esriPBuffer.graph.DomainUpdateRequest.domain)
  
  ::esriPBuffer::EsriTypes_Domain* temp = domain_;
  domain_ = nullptr;
  return temp;
}
inline ::esriPBuffer::EsriTypes_Domain* DomainUpdateRequest::_internal_mutable_domain() {
  
  if (domain_ == nullptr) {
    auto* p = CreateMaybeMessage<::esriPBuffer::EsriTypes_Domain>(GetArena());
    domain_ = p;
  }
  return domain_;
}
inline ::esriPBuffer::EsriTypes_Domain* DomainUpdateRequest::mutable_domain() {
  // @@protoc_insertion_point(field_mutable:esriPBuffer.graph.DomainUpdateRequest.domain)
  return _internal_mutable_domain();
}
inline void DomainUpdateRequest::set_allocated_domain(::esriPBuffer::EsriTypes_Domain* domain) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(domain_);
  }
  if (domain) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(domain)->GetArena();
    if (message_arena != submessage_arena) {
      domain = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, domain, submessage_arena);
    }
    
  } else {
    
  }
  domain_ = domain;
  // @@protoc_insertion_point(field_set_allocated:esriPBuffer.graph.DomainUpdateRequest.domain)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace graph
}  // namespace esriPBuffer

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_esriPBuffer_2fgraph_2fUpdateDomainRequest_2eproto
