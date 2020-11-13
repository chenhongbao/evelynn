// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg.Rsp.Instrument.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Msg_2eRsp_2eInstrument_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Msg_2eRsp_2eInstrument_2eproto

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
#include "Rsp.Instrument.pb.h"
#include "Rsp.Error.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Msg_2eRsp_2eInstrument_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Msg_2eRsp_2eInstrument_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Msg_2eRsp_2eInstrument_2eproto;
namespace msg {
namespace rsp {
class RspInstrumentMsg;
class RspInstrumentMsgDefaultTypeInternal;
extern RspInstrumentMsgDefaultTypeInternal _RspInstrumentMsg_default_instance_;
}  // namespace rsp
}  // namespace msg
PROTOBUF_NAMESPACE_OPEN
template<> ::msg::rsp::RspInstrumentMsg* Arena::CreateMaybeMessage<::msg::rsp::RspInstrumentMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace msg {
namespace rsp {

// ===================================================================

class RspInstrumentMsg PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:msg.rsp.RspInstrumentMsg) */ {
 public:
  inline RspInstrumentMsg() : RspInstrumentMsg(nullptr) {}
  virtual ~RspInstrumentMsg();

  RspInstrumentMsg(const RspInstrumentMsg& from);
  RspInstrumentMsg(RspInstrumentMsg&& from) noexcept
    : RspInstrumentMsg() {
    *this = ::std::move(from);
  }

  inline RspInstrumentMsg& operator=(const RspInstrumentMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline RspInstrumentMsg& operator=(RspInstrumentMsg&& from) noexcept {
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
  static const RspInstrumentMsg& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RspInstrumentMsg* internal_default_instance() {
    return reinterpret_cast<const RspInstrumentMsg*>(
               &_RspInstrumentMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RspInstrumentMsg& a, RspInstrumentMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(RspInstrumentMsg* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RspInstrumentMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RspInstrumentMsg* New() const final {
    return CreateMaybeMessage<RspInstrumentMsg>(nullptr);
  }

  RspInstrumentMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RspInstrumentMsg>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RspInstrumentMsg& from);
  void MergeFrom(const RspInstrumentMsg& from);
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
  void InternalSwap(RspInstrumentMsg* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "msg.rsp.RspInstrumentMsg";
  }
  protected:
  explicit RspInstrumentMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Msg_2eRsp_2eInstrument_2eproto);
    return ::descriptor_table_Msg_2eRsp_2eInstrument_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInstrumentFieldNumber = 1,
    kErrorFieldNumber = 2,
    kRequestIdFieldNumber = 3,
    kIsLastFieldNumber = 4,
  };
  // .rsp.InstrumentField instrument = 1;
  bool has_instrument() const;
  private:
  bool _internal_has_instrument() const;
  public:
  void clear_instrument();
  const ::rsp::InstrumentField& instrument() const;
  ::rsp::InstrumentField* release_instrument();
  ::rsp::InstrumentField* mutable_instrument();
  void set_allocated_instrument(::rsp::InstrumentField* instrument);
  private:
  const ::rsp::InstrumentField& _internal_instrument() const;
  ::rsp::InstrumentField* _internal_mutable_instrument();
  public:
  void unsafe_arena_set_allocated_instrument(
      ::rsp::InstrumentField* instrument);
  ::rsp::InstrumentField* unsafe_arena_release_instrument();

  // .rsp.ErrorField error = 2;
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

  // int32 request_id = 3;
  void clear_request_id();
  ::PROTOBUF_NAMESPACE_ID::int32 request_id() const;
  void set_request_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_request_id() const;
  void _internal_set_request_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // bool is_last = 4;
  void clear_is_last();
  bool is_last() const;
  void set_is_last(bool value);
  private:
  bool _internal_is_last() const;
  void _internal_set_is_last(bool value);
  public:

  // @@protoc_insertion_point(class_scope:msg.rsp.RspInstrumentMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::rsp::InstrumentField* instrument_;
  ::rsp::ErrorField* error_;
  ::PROTOBUF_NAMESPACE_ID::int32 request_id_;
  bool is_last_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Msg_2eRsp_2eInstrument_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RspInstrumentMsg

// .rsp.InstrumentField instrument = 1;
inline bool RspInstrumentMsg::_internal_has_instrument() const {
  return this != internal_default_instance() && instrument_ != nullptr;
}
inline bool RspInstrumentMsg::has_instrument() const {
  return _internal_has_instrument();
}
inline const ::rsp::InstrumentField& RspInstrumentMsg::_internal_instrument() const {
  const ::rsp::InstrumentField* p = instrument_;
  return p != nullptr ? *p : *reinterpret_cast<const ::rsp::InstrumentField*>(
      &::rsp::_InstrumentField_default_instance_);
}
inline const ::rsp::InstrumentField& RspInstrumentMsg::instrument() const {
  // @@protoc_insertion_point(field_get:msg.rsp.RspInstrumentMsg.instrument)
  return _internal_instrument();
}
inline void RspInstrumentMsg::unsafe_arena_set_allocated_instrument(
    ::rsp::InstrumentField* instrument) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(instrument_);
  }
  instrument_ = instrument;
  if (instrument) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:msg.rsp.RspInstrumentMsg.instrument)
}
inline ::rsp::InstrumentField* RspInstrumentMsg::release_instrument() {
  
  ::rsp::InstrumentField* temp = instrument_;
  instrument_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::rsp::InstrumentField* RspInstrumentMsg::unsafe_arena_release_instrument() {
  // @@protoc_insertion_point(field_release:msg.rsp.RspInstrumentMsg.instrument)
  
  ::rsp::InstrumentField* temp = instrument_;
  instrument_ = nullptr;
  return temp;
}
inline ::rsp::InstrumentField* RspInstrumentMsg::_internal_mutable_instrument() {
  
  if (instrument_ == nullptr) {
    auto* p = CreateMaybeMessage<::rsp::InstrumentField>(GetArena());
    instrument_ = p;
  }
  return instrument_;
}
inline ::rsp::InstrumentField* RspInstrumentMsg::mutable_instrument() {
  // @@protoc_insertion_point(field_mutable:msg.rsp.RspInstrumentMsg.instrument)
  return _internal_mutable_instrument();
}
inline void RspInstrumentMsg::set_allocated_instrument(::rsp::InstrumentField* instrument) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(instrument_);
  }
  if (instrument) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(instrument)->GetArena();
    if (message_arena != submessage_arena) {
      instrument = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, instrument, submessage_arena);
    }
    
  } else {
    
  }
  instrument_ = instrument;
  // @@protoc_insertion_point(field_set_allocated:msg.rsp.RspInstrumentMsg.instrument)
}

// .rsp.ErrorField error = 2;
inline bool RspInstrumentMsg::_internal_has_error() const {
  return this != internal_default_instance() && error_ != nullptr;
}
inline bool RspInstrumentMsg::has_error() const {
  return _internal_has_error();
}
inline const ::rsp::ErrorField& RspInstrumentMsg::_internal_error() const {
  const ::rsp::ErrorField* p = error_;
  return p != nullptr ? *p : *reinterpret_cast<const ::rsp::ErrorField*>(
      &::rsp::_ErrorField_default_instance_);
}
inline const ::rsp::ErrorField& RspInstrumentMsg::error() const {
  // @@protoc_insertion_point(field_get:msg.rsp.RspInstrumentMsg.error)
  return _internal_error();
}
inline void RspInstrumentMsg::unsafe_arena_set_allocated_error(
    ::rsp::ErrorField* error) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(error_);
  }
  error_ = error;
  if (error) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:msg.rsp.RspInstrumentMsg.error)
}
inline ::rsp::ErrorField* RspInstrumentMsg::release_error() {
  
  ::rsp::ErrorField* temp = error_;
  error_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::rsp::ErrorField* RspInstrumentMsg::unsafe_arena_release_error() {
  // @@protoc_insertion_point(field_release:msg.rsp.RspInstrumentMsg.error)
  
  ::rsp::ErrorField* temp = error_;
  error_ = nullptr;
  return temp;
}
inline ::rsp::ErrorField* RspInstrumentMsg::_internal_mutable_error() {
  
  if (error_ == nullptr) {
    auto* p = CreateMaybeMessage<::rsp::ErrorField>(GetArena());
    error_ = p;
  }
  return error_;
}
inline ::rsp::ErrorField* RspInstrumentMsg::mutable_error() {
  // @@protoc_insertion_point(field_mutable:msg.rsp.RspInstrumentMsg.error)
  return _internal_mutable_error();
}
inline void RspInstrumentMsg::set_allocated_error(::rsp::ErrorField* error) {
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
  // @@protoc_insertion_point(field_set_allocated:msg.rsp.RspInstrumentMsg.error)
}

// int32 request_id = 3;
inline void RspInstrumentMsg::clear_request_id() {
  request_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RspInstrumentMsg::_internal_request_id() const {
  return request_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RspInstrumentMsg::request_id() const {
  // @@protoc_insertion_point(field_get:msg.rsp.RspInstrumentMsg.request_id)
  return _internal_request_id();
}
inline void RspInstrumentMsg::_internal_set_request_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  request_id_ = value;
}
inline void RspInstrumentMsg::set_request_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_request_id(value);
  // @@protoc_insertion_point(field_set:msg.rsp.RspInstrumentMsg.request_id)
}

// bool is_last = 4;
inline void RspInstrumentMsg::clear_is_last() {
  is_last_ = false;
}
inline bool RspInstrumentMsg::_internal_is_last() const {
  return is_last_;
}
inline bool RspInstrumentMsg::is_last() const {
  // @@protoc_insertion_point(field_get:msg.rsp.RspInstrumentMsg.is_last)
  return _internal_is_last();
}
inline void RspInstrumentMsg::_internal_set_is_last(bool value) {
  
  is_last_ = value;
}
inline void RspInstrumentMsg::set_is_last(bool value) {
  _internal_set_is_last(value);
  // @@protoc_insertion_point(field_set:msg.rsp.RspInstrumentMsg.is_last)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace rsp
}  // namespace msg

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Msg_2eRsp_2eInstrument_2eproto