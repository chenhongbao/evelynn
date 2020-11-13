// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg.Req.OrderInsert.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Msg_2eReq_2eOrderInsert_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Msg_2eReq_2eOrderInsert_2eproto

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
#include "Req.InputOrder.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Msg_2eReq_2eOrderInsert_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Msg_2eReq_2eOrderInsert_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Msg_2eReq_2eOrderInsert_2eproto;
namespace msg {
namespace req {
class ReqOrderInsertMsg;
class ReqOrderInsertMsgDefaultTypeInternal;
extern ReqOrderInsertMsgDefaultTypeInternal _ReqOrderInsertMsg_default_instance_;
}  // namespace req
}  // namespace msg
PROTOBUF_NAMESPACE_OPEN
template<> ::msg::req::ReqOrderInsertMsg* Arena::CreateMaybeMessage<::msg::req::ReqOrderInsertMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace msg {
namespace req {

// ===================================================================

class ReqOrderInsertMsg PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:msg.req.ReqOrderInsertMsg) */ {
 public:
  inline ReqOrderInsertMsg() : ReqOrderInsertMsg(nullptr) {}
  virtual ~ReqOrderInsertMsg();

  ReqOrderInsertMsg(const ReqOrderInsertMsg& from);
  ReqOrderInsertMsg(ReqOrderInsertMsg&& from) noexcept
    : ReqOrderInsertMsg() {
    *this = ::std::move(from);
  }

  inline ReqOrderInsertMsg& operator=(const ReqOrderInsertMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline ReqOrderInsertMsg& operator=(ReqOrderInsertMsg&& from) noexcept {
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
  static const ReqOrderInsertMsg& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ReqOrderInsertMsg* internal_default_instance() {
    return reinterpret_cast<const ReqOrderInsertMsg*>(
               &_ReqOrderInsertMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ReqOrderInsertMsg& a, ReqOrderInsertMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(ReqOrderInsertMsg* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ReqOrderInsertMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ReqOrderInsertMsg* New() const final {
    return CreateMaybeMessage<ReqOrderInsertMsg>(nullptr);
  }

  ReqOrderInsertMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ReqOrderInsertMsg>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ReqOrderInsertMsg& from);
  void MergeFrom(const ReqOrderInsertMsg& from);
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
  void InternalSwap(ReqOrderInsertMsg* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "msg.req.ReqOrderInsertMsg";
  }
  protected:
  explicit ReqOrderInsertMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Msg_2eReq_2eOrderInsert_2eproto);
    return ::descriptor_table_Msg_2eReq_2eOrderInsert_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInputOrderFieldNumber = 1,
    kRequestIdFieldNumber = 2,
  };
  // .req.InputOrderField input_order = 1;
  bool has_input_order() const;
  private:
  bool _internal_has_input_order() const;
  public:
  void clear_input_order();
  const ::req::InputOrderField& input_order() const;
  ::req::InputOrderField* release_input_order();
  ::req::InputOrderField* mutable_input_order();
  void set_allocated_input_order(::req::InputOrderField* input_order);
  private:
  const ::req::InputOrderField& _internal_input_order() const;
  ::req::InputOrderField* _internal_mutable_input_order();
  public:
  void unsafe_arena_set_allocated_input_order(
      ::req::InputOrderField* input_order);
  ::req::InputOrderField* unsafe_arena_release_input_order();

  // int32 request_id = 2;
  void clear_request_id();
  ::PROTOBUF_NAMESPACE_ID::int32 request_id() const;
  void set_request_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_request_id() const;
  void _internal_set_request_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:msg.req.ReqOrderInsertMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::req::InputOrderField* input_order_;
  ::PROTOBUF_NAMESPACE_ID::int32 request_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Msg_2eReq_2eOrderInsert_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ReqOrderInsertMsg

// .req.InputOrderField input_order = 1;
inline bool ReqOrderInsertMsg::_internal_has_input_order() const {
  return this != internal_default_instance() && input_order_ != nullptr;
}
inline bool ReqOrderInsertMsg::has_input_order() const {
  return _internal_has_input_order();
}
inline const ::req::InputOrderField& ReqOrderInsertMsg::_internal_input_order() const {
  const ::req::InputOrderField* p = input_order_;
  return p != nullptr ? *p : *reinterpret_cast<const ::req::InputOrderField*>(
      &::req::_InputOrderField_default_instance_);
}
inline const ::req::InputOrderField& ReqOrderInsertMsg::input_order() const {
  // @@protoc_insertion_point(field_get:msg.req.ReqOrderInsertMsg.input_order)
  return _internal_input_order();
}
inline void ReqOrderInsertMsg::unsafe_arena_set_allocated_input_order(
    ::req::InputOrderField* input_order) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(input_order_);
  }
  input_order_ = input_order;
  if (input_order) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:msg.req.ReqOrderInsertMsg.input_order)
}
inline ::req::InputOrderField* ReqOrderInsertMsg::release_input_order() {
  
  ::req::InputOrderField* temp = input_order_;
  input_order_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::req::InputOrderField* ReqOrderInsertMsg::unsafe_arena_release_input_order() {
  // @@protoc_insertion_point(field_release:msg.req.ReqOrderInsertMsg.input_order)
  
  ::req::InputOrderField* temp = input_order_;
  input_order_ = nullptr;
  return temp;
}
inline ::req::InputOrderField* ReqOrderInsertMsg::_internal_mutable_input_order() {
  
  if (input_order_ == nullptr) {
    auto* p = CreateMaybeMessage<::req::InputOrderField>(GetArena());
    input_order_ = p;
  }
  return input_order_;
}
inline ::req::InputOrderField* ReqOrderInsertMsg::mutable_input_order() {
  // @@protoc_insertion_point(field_mutable:msg.req.ReqOrderInsertMsg.input_order)
  return _internal_mutable_input_order();
}
inline void ReqOrderInsertMsg::set_allocated_input_order(::req::InputOrderField* input_order) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(input_order_);
  }
  if (input_order) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(input_order)->GetArena();
    if (message_arena != submessage_arena) {
      input_order = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, input_order, submessage_arena);
    }
    
  } else {
    
  }
  input_order_ = input_order;
  // @@protoc_insertion_point(field_set_allocated:msg.req.ReqOrderInsertMsg.input_order)
}

// int32 request_id = 2;
inline void ReqOrderInsertMsg::clear_request_id() {
  request_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ReqOrderInsertMsg::_internal_request_id() const {
  return request_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ReqOrderInsertMsg::request_id() const {
  // @@protoc_insertion_point(field_get:msg.req.ReqOrderInsertMsg.request_id)
  return _internal_request_id();
}
inline void ReqOrderInsertMsg::_internal_set_request_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  request_id_ = value;
}
inline void ReqOrderInsertMsg::set_request_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_request_id(value);
  // @@protoc_insertion_point(field_set:msg.req.ReqOrderInsertMsg.request_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace req
}  // namespace msg

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Msg_2eReq_2eOrderInsert_2eproto