// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg.Rsp.Error.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Msg_2eRsp_2eError_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Msg_2eRsp_2eError_2eproto

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
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "Rsp.Error.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Msg_2eRsp_2eError_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Msg_2eRsp_2eError_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Msg_2eRsp_2eError_2eproto;
namespace msg {
namespace rsp {
class RspErrorMsg;
class RspErrorMsgDefaultTypeInternal;
extern RspErrorMsgDefaultTypeInternal _RspErrorMsg_default_instance_;
}  // namespace rsp
}  // namespace msg
PROTOBUF_NAMESPACE_OPEN
template<> ::msg::rsp::RspErrorMsg* Arena::CreateMaybeMessage<::msg::rsp::RspErrorMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace msg {
namespace rsp {

// ===================================================================

class RspErrorMsg PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:msg.rsp.RspErrorMsg) */ {
 public:
  inline RspErrorMsg() : RspErrorMsg(nullptr) {}
  virtual ~RspErrorMsg();

  RspErrorMsg(const RspErrorMsg& from);
  RspErrorMsg(RspErrorMsg&& from) noexcept
    : RspErrorMsg() {
    *this = ::std::move(from);
  }

  inline RspErrorMsg& operator=(const RspErrorMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline RspErrorMsg& operator=(RspErrorMsg&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RspErrorMsg& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RspErrorMsg* internal_default_instance() {
    return reinterpret_cast<const RspErrorMsg*>(
               &_RspErrorMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RspErrorMsg& a, RspErrorMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(RspErrorMsg* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RspErrorMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RspErrorMsg* New() const final {
    return CreateMaybeMessage<RspErrorMsg>(nullptr);
  }

  RspErrorMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RspErrorMsg>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RspErrorMsg& from);
  void MergeFrom(const RspErrorMsg& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RspErrorMsg* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "msg.rsp.RspErrorMsg";
  }
  protected:
  explicit RspErrorMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Msg_2eRsp_2eError_2eproto);
    return ::descriptor_table_Msg_2eRsp_2eError_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrorFieldNumber = 1,
    kRequestIdFieldNumber = 2,
    kIsLastFieldNumber = 3,
  };
  // .rsp.ErrorField error = 1;
  bool has_error() const;
  private:
  bool _internal_has_error() const;
  public:
  void clear_error();
  const ::rsp::ErrorField& error() const;
  ::rsp::ErrorField* release_error();
  ::rsp::ErrorField* mutable_error();
  void set_allocated_error(::rsp::ErrorField* error);
  private:
  const ::rsp::ErrorField& _internal_error() const;
  ::rsp::ErrorField* _internal_mutable_error();
  public:
  void unsafe_arena_set_allocated_error(
      ::rsp::ErrorField* error);
  ::rsp::ErrorField* unsafe_arena_release_error();

  // int32 request_id = 2;
  void clear_request_id();
  ::PROTOBUF_NAMESPACE_ID::int32 request_id() const;
  void set_request_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_request_id() const;
  void _internal_set_request_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // bool is_last = 3;
  void clear_is_last();
  bool is_last() const;
  void set_is_last(bool value);
  private:
  bool _internal_is_last() const;
  void _internal_set_is_last(bool value);
  public:

  // @@protoc_insertion_point(class_scope:msg.rsp.RspErrorMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::rsp::ErrorField* error_;
  ::PROTOBUF_NAMESPACE_ID::int32 request_id_;
  bool is_last_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Msg_2eRsp_2eError_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RspErrorMsg

// .rsp.ErrorField error = 1;
inline bool RspErrorMsg::_internal_has_error() const {
  return this != internal_default_instance() && error_ != nullptr;
}
inline bool RspErrorMsg::has_error() const {
  return _internal_has_error();
}
inline const ::rsp::ErrorField& RspErrorMsg::_internal_error() const {
  const ::rsp::ErrorField* p = error_;
  return p != nullptr ? *p : *reinterpret_cast<const ::rsp::ErrorField*>(
      &::rsp::_ErrorField_default_instance_);
}
inline const ::rsp::ErrorField& RspErrorMsg::error() const {
  // @@protoc_insertion_point(field_get:msg.rsp.RspErrorMsg.error)
  return _internal_error();
}
inline void RspErrorMsg::unsafe_arena_set_allocated_error(
    ::rsp::ErrorField* error) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(error_);
  }
  error_ = error;
  if (error) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:msg.rsp.RspErrorMsg.error)
}
inline ::rsp::ErrorField* RspErrorMsg::release_error() {
  
  ::rsp::ErrorField* temp = error_;
  error_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::rsp::ErrorField* RspErrorMsg::unsafe_arena_release_error() {
  // @@protoc_insertion_point(field_release:msg.rsp.RspErrorMsg.error)
  
  ::rsp::ErrorField* temp = error_;
  error_ = nullptr;
  return temp;
}
inline ::rsp::ErrorField* RspErrorMsg::_internal_mutable_error() {
  
  if (error_ == nullptr) {
    auto* p = CreateMaybeMessage<::rsp::ErrorField>(GetArena());
    error_ = p;
  }
  return error_;
}
inline ::rsp::ErrorField* RspErrorMsg::mutable_error() {
  // @@protoc_insertion_point(field_mutable:msg.rsp.RspErrorMsg.error)
  return _internal_mutable_error();
}
inline void RspErrorMsg::set_allocated_error(::rsp::ErrorField* error) {
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
  // @@protoc_insertion_point(field_set_allocated:msg.rsp.RspErrorMsg.error)
}

// int32 request_id = 2;
inline void RspErrorMsg::clear_request_id() {
  request_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RspErrorMsg::_internal_request_id() const {
  return request_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RspErrorMsg::request_id() const {
  // @@protoc_insertion_point(field_get:msg.rsp.RspErrorMsg.request_id)
  return _internal_request_id();
}
inline void RspErrorMsg::_internal_set_request_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  request_id_ = value;
}
inline void RspErrorMsg::set_request_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_request_id(value);
  // @@protoc_insertion_point(field_set:msg.rsp.RspErrorMsg.request_id)
}

// bool is_last = 3;
inline void RspErrorMsg::clear_is_last() {
  is_last_ = false;
}
inline bool RspErrorMsg::_internal_is_last() const {
  return is_last_;
}
inline bool RspErrorMsg::is_last() const {
  // @@protoc_insertion_point(field_get:msg.rsp.RspErrorMsg.is_last)
  return _internal_is_last();
}
inline void RspErrorMsg::_internal_set_is_last(bool value) {
  
  is_last_ = value;
}
inline void RspErrorMsg::set_is_last(bool value) {
  _internal_set_is_last(value);
  // @@protoc_insertion_point(field_set:msg.rsp.RspErrorMsg.is_last)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace rsp
}  // namespace msg

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Msg_2eRsp_2eError_2eproto
