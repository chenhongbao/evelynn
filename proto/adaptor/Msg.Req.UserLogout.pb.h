// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg.Req.UserLogout.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Msg_2eReq_2eUserLogout_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Msg_2eReq_2eUserLogout_2eproto

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
#include "Req.UserLogout.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Msg_2eReq_2eUserLogout_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Msg_2eReq_2eUserLogout_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Msg_2eReq_2eUserLogout_2eproto;
namespace msg {
namespace req {
class ReqUserLogoutMsg;
class ReqUserLogoutMsgDefaultTypeInternal;
extern ReqUserLogoutMsgDefaultTypeInternal _ReqUserLogoutMsg_default_instance_;
}  // namespace req
}  // namespace msg
PROTOBUF_NAMESPACE_OPEN
template<> ::msg::req::ReqUserLogoutMsg* Arena::CreateMaybeMessage<::msg::req::ReqUserLogoutMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace msg {
namespace req {

// ===================================================================

class ReqUserLogoutMsg PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:msg.req.ReqUserLogoutMsg) */ {
 public:
  inline ReqUserLogoutMsg() : ReqUserLogoutMsg(nullptr) {}
  virtual ~ReqUserLogoutMsg();

  ReqUserLogoutMsg(const ReqUserLogoutMsg& from);
  ReqUserLogoutMsg(ReqUserLogoutMsg&& from) noexcept
    : ReqUserLogoutMsg() {
    *this = ::std::move(from);
  }

  inline ReqUserLogoutMsg& operator=(const ReqUserLogoutMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline ReqUserLogoutMsg& operator=(ReqUserLogoutMsg&& from) noexcept {
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
  static const ReqUserLogoutMsg& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ReqUserLogoutMsg* internal_default_instance() {
    return reinterpret_cast<const ReqUserLogoutMsg*>(
               &_ReqUserLogoutMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ReqUserLogoutMsg& a, ReqUserLogoutMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(ReqUserLogoutMsg* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ReqUserLogoutMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ReqUserLogoutMsg* New() const final {
    return CreateMaybeMessage<ReqUserLogoutMsg>(nullptr);
  }

  ReqUserLogoutMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ReqUserLogoutMsg>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ReqUserLogoutMsg& from);
  void MergeFrom(const ReqUserLogoutMsg& from);
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
  void InternalSwap(ReqUserLogoutMsg* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "msg.req.ReqUserLogoutMsg";
  }
  protected:
  explicit ReqUserLogoutMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Msg_2eReq_2eUserLogout_2eproto);
    return ::descriptor_table_Msg_2eReq_2eUserLogout_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLogoutFieldNumber = 1,
    kRequestIdFieldNumber = 2,
  };
  // .req.UserLogoutField logout = 1;
  bool has_logout() const;
  private:
  bool _internal_has_logout() const;
  public:
  void clear_logout();
  const ::req::UserLogoutField& logout() const;
  ::req::UserLogoutField* release_logout();
  ::req::UserLogoutField* mutable_logout();
  void set_allocated_logout(::req::UserLogoutField* logout);
  private:
  const ::req::UserLogoutField& _internal_logout() const;
  ::req::UserLogoutField* _internal_mutable_logout();
  public:
  void unsafe_arena_set_allocated_logout(
      ::req::UserLogoutField* logout);
  ::req::UserLogoutField* unsafe_arena_release_logout();

  // int32 request_id = 2;
  void clear_request_id();
  ::PROTOBUF_NAMESPACE_ID::int32 request_id() const;
  void set_request_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_request_id() const;
  void _internal_set_request_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:msg.req.ReqUserLogoutMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::req::UserLogoutField* logout_;
  ::PROTOBUF_NAMESPACE_ID::int32 request_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Msg_2eReq_2eUserLogout_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ReqUserLogoutMsg

// .req.UserLogoutField logout = 1;
inline bool ReqUserLogoutMsg::_internal_has_logout() const {
  return this != internal_default_instance() && logout_ != nullptr;
}
inline bool ReqUserLogoutMsg::has_logout() const {
  return _internal_has_logout();
}
inline const ::req::UserLogoutField& ReqUserLogoutMsg::_internal_logout() const {
  const ::req::UserLogoutField* p = logout_;
  return p != nullptr ? *p : *reinterpret_cast<const ::req::UserLogoutField*>(
      &::req::_UserLogoutField_default_instance_);
}
inline const ::req::UserLogoutField& ReqUserLogoutMsg::logout() const {
  // @@protoc_insertion_point(field_get:msg.req.ReqUserLogoutMsg.logout)
  return _internal_logout();
}
inline void ReqUserLogoutMsg::unsafe_arena_set_allocated_logout(
    ::req::UserLogoutField* logout) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(logout_);
  }
  logout_ = logout;
  if (logout) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:msg.req.ReqUserLogoutMsg.logout)
}
inline ::req::UserLogoutField* ReqUserLogoutMsg::release_logout() {
  
  ::req::UserLogoutField* temp = logout_;
  logout_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::req::UserLogoutField* ReqUserLogoutMsg::unsafe_arena_release_logout() {
  // @@protoc_insertion_point(field_release:msg.req.ReqUserLogoutMsg.logout)
  
  ::req::UserLogoutField* temp = logout_;
  logout_ = nullptr;
  return temp;
}
inline ::req::UserLogoutField* ReqUserLogoutMsg::_internal_mutable_logout() {
  
  if (logout_ == nullptr) {
    auto* p = CreateMaybeMessage<::req::UserLogoutField>(GetArena());
    logout_ = p;
  }
  return logout_;
}
inline ::req::UserLogoutField* ReqUserLogoutMsg::mutable_logout() {
  // @@protoc_insertion_point(field_mutable:msg.req.ReqUserLogoutMsg.logout)
  return _internal_mutable_logout();
}
inline void ReqUserLogoutMsg::set_allocated_logout(::req::UserLogoutField* logout) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(logout_);
  }
  if (logout) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(logout)->GetArena();
    if (message_arena != submessage_arena) {
      logout = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, logout, submessage_arena);
    }
    
  } else {
    
  }
  logout_ = logout;
  // @@protoc_insertion_point(field_set_allocated:msg.req.ReqUserLogoutMsg.logout)
}

// int32 request_id = 2;
inline void ReqUserLogoutMsg::clear_request_id() {
  request_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ReqUserLogoutMsg::_internal_request_id() const {
  return request_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ReqUserLogoutMsg::request_id() const {
  // @@protoc_insertion_point(field_get:msg.req.ReqUserLogoutMsg.request_id)
  return _internal_request_id();
}
inline void ReqUserLogoutMsg::_internal_set_request_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  request_id_ = value;
}
inline void ReqUserLogoutMsg::set_request_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_request_id(value);
  // @@protoc_insertion_point(field_set:msg.req.ReqUserLogoutMsg.request_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace req
}  // namespace msg

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Msg_2eReq_2eUserLogout_2eproto