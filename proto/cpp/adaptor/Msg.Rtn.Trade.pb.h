// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg.Rtn.Trade.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Msg_2eRtn_2eTrade_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Msg_2eRtn_2eTrade_2eproto

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
#include "Rtn.Trade.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Msg_2eRtn_2eTrade_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Msg_2eRtn_2eTrade_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Msg_2eRtn_2eTrade_2eproto;
namespace msg {
namespace rtn {
class RtnTradeMsg;
class RtnTradeMsgDefaultTypeInternal;
extern RtnTradeMsgDefaultTypeInternal _RtnTradeMsg_default_instance_;
}  // namespace rtn
}  // namespace msg
PROTOBUF_NAMESPACE_OPEN
template<> ::msg::rtn::RtnTradeMsg* Arena::CreateMaybeMessage<::msg::rtn::RtnTradeMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace msg {
namespace rtn {

// ===================================================================

class RtnTradeMsg PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:msg.rtn.RtnTradeMsg) */ {
 public:
  inline RtnTradeMsg() : RtnTradeMsg(nullptr) {}
  virtual ~RtnTradeMsg();

  RtnTradeMsg(const RtnTradeMsg& from);
  RtnTradeMsg(RtnTradeMsg&& from) noexcept
    : RtnTradeMsg() {
    *this = ::std::move(from);
  }

  inline RtnTradeMsg& operator=(const RtnTradeMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline RtnTradeMsg& operator=(RtnTradeMsg&& from) noexcept {
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
  static const RtnTradeMsg& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RtnTradeMsg* internal_default_instance() {
    return reinterpret_cast<const RtnTradeMsg*>(
               &_RtnTradeMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RtnTradeMsg& a, RtnTradeMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(RtnTradeMsg* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RtnTradeMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RtnTradeMsg* New() const final {
    return CreateMaybeMessage<RtnTradeMsg>(nullptr);
  }

  RtnTradeMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RtnTradeMsg>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RtnTradeMsg& from);
  void MergeFrom(const RtnTradeMsg& from);
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
  void InternalSwap(RtnTradeMsg* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "msg.rtn.RtnTradeMsg";
  }
  protected:
  explicit RtnTradeMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Msg_2eRtn_2eTrade_2eproto);
    return ::descriptor_table_Msg_2eRtn_2eTrade_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTradeFieldNumber = 1,
  };
  // .rtn.TradeField trade = 1;
  bool has_trade() const;
  private:
  bool _internal_has_trade() const;
  public:
  void clear_trade();
  const ::rtn::TradeField& trade() const;
  ::rtn::TradeField* release_trade();
  ::rtn::TradeField* mutable_trade();
  void set_allocated_trade(::rtn::TradeField* trade);
  private:
  const ::rtn::TradeField& _internal_trade() const;
  ::rtn::TradeField* _internal_mutable_trade();
  public:
  void unsafe_arena_set_allocated_trade(
      ::rtn::TradeField* trade);
  ::rtn::TradeField* unsafe_arena_release_trade();

  // @@protoc_insertion_point(class_scope:msg.rtn.RtnTradeMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::rtn::TradeField* trade_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Msg_2eRtn_2eTrade_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RtnTradeMsg

// .rtn.TradeField trade = 1;
inline bool RtnTradeMsg::_internal_has_trade() const {
  return this != internal_default_instance() && trade_ != nullptr;
}
inline bool RtnTradeMsg::has_trade() const {
  return _internal_has_trade();
}
inline const ::rtn::TradeField& RtnTradeMsg::_internal_trade() const {
  const ::rtn::TradeField* p = trade_;
  return p != nullptr ? *p : *reinterpret_cast<const ::rtn::TradeField*>(
      &::rtn::_TradeField_default_instance_);
}
inline const ::rtn::TradeField& RtnTradeMsg::trade() const {
  // @@protoc_insertion_point(field_get:msg.rtn.RtnTradeMsg.trade)
  return _internal_trade();
}
inline void RtnTradeMsg::unsafe_arena_set_allocated_trade(
    ::rtn::TradeField* trade) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(trade_);
  }
  trade_ = trade;
  if (trade) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:msg.rtn.RtnTradeMsg.trade)
}
inline ::rtn::TradeField* RtnTradeMsg::release_trade() {
  
  ::rtn::TradeField* temp = trade_;
  trade_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::rtn::TradeField* RtnTradeMsg::unsafe_arena_release_trade() {
  // @@protoc_insertion_point(field_release:msg.rtn.RtnTradeMsg.trade)
  
  ::rtn::TradeField* temp = trade_;
  trade_ = nullptr;
  return temp;
}
inline ::rtn::TradeField* RtnTradeMsg::_internal_mutable_trade() {
  
  if (trade_ == nullptr) {
    auto* p = CreateMaybeMessage<::rtn::TradeField>(GetArena());
    trade_ = p;
  }
  return trade_;
}
inline ::rtn::TradeField* RtnTradeMsg::mutable_trade() {
  // @@protoc_insertion_point(field_mutable:msg.rtn.RtnTradeMsg.trade)
  return _internal_mutable_trade();
}
inline void RtnTradeMsg::set_allocated_trade(::rtn::TradeField* trade) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(trade_);
  }
  if (trade) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(trade)->GetArena();
    if (message_arena != submessage_arena) {
      trade = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, trade, submessage_arena);
    }
    
  } else {
    
  }
  trade_ = trade;
  // @@protoc_insertion_point(field_set_allocated:msg.rtn.RtnTradeMsg.trade)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace rtn
}  // namespace msg

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Msg_2eRtn_2eTrade_2eproto