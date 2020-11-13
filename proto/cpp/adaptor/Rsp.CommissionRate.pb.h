// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Rsp.CommissionRate.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Rsp_2eCommissionRate_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Rsp_2eCommissionRate_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Rsp_2eCommissionRate_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Rsp_2eCommissionRate_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Rsp_2eCommissionRate_2eproto;
namespace rsp {
class CommissionRateField;
class CommissionRateFieldDefaultTypeInternal;
extern CommissionRateFieldDefaultTypeInternal _CommissionRateField_default_instance_;
}  // namespace rsp
PROTOBUF_NAMESPACE_OPEN
template<> ::rsp::CommissionRateField* Arena::CreateMaybeMessage<::rsp::CommissionRateField>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace rsp {

// ===================================================================

class CommissionRateField PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:rsp.CommissionRateField) */ {
 public:
  inline CommissionRateField() : CommissionRateField(nullptr) {}
  virtual ~CommissionRateField();

  CommissionRateField(const CommissionRateField& from);
  CommissionRateField(CommissionRateField&& from) noexcept
    : CommissionRateField() {
    *this = ::std::move(from);
  }

  inline CommissionRateField& operator=(const CommissionRateField& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommissionRateField& operator=(CommissionRateField&& from) noexcept {
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
  static const CommissionRateField& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CommissionRateField* internal_default_instance() {
    return reinterpret_cast<const CommissionRateField*>(
               &_CommissionRateField_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommissionRateField& a, CommissionRateField& b) {
    a.Swap(&b);
  }
  inline void Swap(CommissionRateField* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CommissionRateField* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CommissionRateField* New() const final {
    return CreateMaybeMessage<CommissionRateField>(nullptr);
  }

  CommissionRateField* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CommissionRateField>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CommissionRateField& from);
  void MergeFrom(const CommissionRateField& from);
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
  void InternalSwap(CommissionRateField* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "rsp.CommissionRateField";
  }
  protected:
  explicit CommissionRateField(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Rsp_2eCommissionRate_2eproto);
    return ::descriptor_table_Rsp_2eCommissionRate_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInstrumentIdFieldNumber = 1,
    kBrokerIdFieldNumber = 2,
    kInvestorIdFieldNumber = 3,
    kExchangeIdFieldNumber = 10,
    kOpenRatioByMoneyFieldNumber = 4,
    kOpenRatioByVolumeFieldNumber = 5,
    kCloseRatioByMoneyFieldNumber = 6,
    kCloseRatioByVolumeFieldNumber = 7,
    kCloseTodayRatioByMoneyFieldNumber = 8,
    kCloseTodayRatioByVolumeFieldNumber = 9,
  };
  // string instrument_id = 1;
  void clear_instrument_id();
  const std::string& instrument_id() const;
  void set_instrument_id(const std::string& value);
  void set_instrument_id(std::string&& value);
  void set_instrument_id(const char* value);
  void set_instrument_id(const char* value, size_t size);
  std::string* mutable_instrument_id();
  std::string* release_instrument_id();
  void set_allocated_instrument_id(std::string* instrument_id);
  private:
  const std::string& _internal_instrument_id() const;
  void _internal_set_instrument_id(const std::string& value);
  std::string* _internal_mutable_instrument_id();
  public:

  // string broker_id = 2;
  void clear_broker_id();
  const std::string& broker_id() const;
  void set_broker_id(const std::string& value);
  void set_broker_id(std::string&& value);
  void set_broker_id(const char* value);
  void set_broker_id(const char* value, size_t size);
  std::string* mutable_broker_id();
  std::string* release_broker_id();
  void set_allocated_broker_id(std::string* broker_id);
  private:
  const std::string& _internal_broker_id() const;
  void _internal_set_broker_id(const std::string& value);
  std::string* _internal_mutable_broker_id();
  public:

  // string investor_id = 3;
  void clear_investor_id();
  const std::string& investor_id() const;
  void set_investor_id(const std::string& value);
  void set_investor_id(std::string&& value);
  void set_investor_id(const char* value);
  void set_investor_id(const char* value, size_t size);
  std::string* mutable_investor_id();
  std::string* release_investor_id();
  void set_allocated_investor_id(std::string* investor_id);
  private:
  const std::string& _internal_investor_id() const;
  void _internal_set_investor_id(const std::string& value);
  std::string* _internal_mutable_investor_id();
  public:

  // string exchange_id = 10;
  void clear_exchange_id();
  const std::string& exchange_id() const;
  void set_exchange_id(const std::string& value);
  void set_exchange_id(std::string&& value);
  void set_exchange_id(const char* value);
  void set_exchange_id(const char* value, size_t size);
  std::string* mutable_exchange_id();
  std::string* release_exchange_id();
  void set_allocated_exchange_id(std::string* exchange_id);
  private:
  const std::string& _internal_exchange_id() const;
  void _internal_set_exchange_id(const std::string& value);
  std::string* _internal_mutable_exchange_id();
  public:

  // double open_ratio_by_money = 4;
  void clear_open_ratio_by_money();
  double open_ratio_by_money() const;
  void set_open_ratio_by_money(double value);
  private:
  double _internal_open_ratio_by_money() const;
  void _internal_set_open_ratio_by_money(double value);
  public:

  // double open_ratio_by_volume = 5;
  void clear_open_ratio_by_volume();
  double open_ratio_by_volume() const;
  void set_open_ratio_by_volume(double value);
  private:
  double _internal_open_ratio_by_volume() const;
  void _internal_set_open_ratio_by_volume(double value);
  public:

  // double close_ratio_by_money = 6;
  void clear_close_ratio_by_money();
  double close_ratio_by_money() const;
  void set_close_ratio_by_money(double value);
  private:
  double _internal_close_ratio_by_money() const;
  void _internal_set_close_ratio_by_money(double value);
  public:

  // double close_ratio_by_volume = 7;
  void clear_close_ratio_by_volume();
  double close_ratio_by_volume() const;
  void set_close_ratio_by_volume(double value);
  private:
  double _internal_close_ratio_by_volume() const;
  void _internal_set_close_ratio_by_volume(double value);
  public:

  // double close_today_ratio_by_money = 8;
  void clear_close_today_ratio_by_money();
  double close_today_ratio_by_money() const;
  void set_close_today_ratio_by_money(double value);
  private:
  double _internal_close_today_ratio_by_money() const;
  void _internal_set_close_today_ratio_by_money(double value);
  public:

  // double close_today_ratio_by_volume = 9;
  void clear_close_today_ratio_by_volume();
  double close_today_ratio_by_volume() const;
  void set_close_today_ratio_by_volume(double value);
  private:
  double _internal_close_today_ratio_by_volume() const;
  void _internal_set_close_today_ratio_by_volume(double value);
  public:

  // @@protoc_insertion_point(class_scope:rsp.CommissionRateField)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr instrument_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr broker_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr investor_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr exchange_id_;
  double open_ratio_by_money_;
  double open_ratio_by_volume_;
  double close_ratio_by_money_;
  double close_ratio_by_volume_;
  double close_today_ratio_by_money_;
  double close_today_ratio_by_volume_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Rsp_2eCommissionRate_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommissionRateField

// string instrument_id = 1;
inline void CommissionRateField::clear_instrument_id() {
  instrument_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& CommissionRateField::instrument_id() const {
  // @@protoc_insertion_point(field_get:rsp.CommissionRateField.instrument_id)
  return _internal_instrument_id();
}
inline void CommissionRateField::set_instrument_id(const std::string& value) {
  _internal_set_instrument_id(value);
  // @@protoc_insertion_point(field_set:rsp.CommissionRateField.instrument_id)
}
inline std::string* CommissionRateField::mutable_instrument_id() {
  // @@protoc_insertion_point(field_mutable:rsp.CommissionRateField.instrument_id)
  return _internal_mutable_instrument_id();
}
inline const std::string& CommissionRateField::_internal_instrument_id() const {
  return instrument_id_.Get();
}
inline void CommissionRateField::_internal_set_instrument_id(const std::string& value) {
  
  instrument_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void CommissionRateField::set_instrument_id(std::string&& value) {
  
  instrument_id_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:rsp.CommissionRateField.instrument_id)
}
inline void CommissionRateField::set_instrument_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  instrument_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:rsp.CommissionRateField.instrument_id)
}
inline void CommissionRateField::set_instrument_id(const char* value,
    size_t size) {
  
  instrument_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:rsp.CommissionRateField.instrument_id)
}
inline std::string* CommissionRateField::_internal_mutable_instrument_id() {
  
  return instrument_id_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* CommissionRateField::release_instrument_id() {
  // @@protoc_insertion_point(field_release:rsp.CommissionRateField.instrument_id)
  return instrument_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CommissionRateField::set_allocated_instrument_id(std::string* instrument_id) {
  if (instrument_id != nullptr) {
    
  } else {
    
  }
  instrument_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), instrument_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:rsp.CommissionRateField.instrument_id)
}

// string broker_id = 2;
inline void CommissionRateField::clear_broker_id() {
  broker_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& CommissionRateField::broker_id() const {
  // @@protoc_insertion_point(field_get:rsp.CommissionRateField.broker_id)
  return _internal_broker_id();
}
inline void CommissionRateField::set_broker_id(const std::string& value) {
  _internal_set_broker_id(value);
  // @@protoc_insertion_point(field_set:rsp.CommissionRateField.broker_id)
}
inline std::string* CommissionRateField::mutable_broker_id() {
  // @@protoc_insertion_point(field_mutable:rsp.CommissionRateField.broker_id)
  return _internal_mutable_broker_id();
}
inline const std::string& CommissionRateField::_internal_broker_id() const {
  return broker_id_.Get();
}
inline void CommissionRateField::_internal_set_broker_id(const std::string& value) {
  
  broker_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void CommissionRateField::set_broker_id(std::string&& value) {
  
  broker_id_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:rsp.CommissionRateField.broker_id)
}
inline void CommissionRateField::set_broker_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  broker_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:rsp.CommissionRateField.broker_id)
}
inline void CommissionRateField::set_broker_id(const char* value,
    size_t size) {
  
  broker_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:rsp.CommissionRateField.broker_id)
}
inline std::string* CommissionRateField::_internal_mutable_broker_id() {
  
  return broker_id_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* CommissionRateField::release_broker_id() {
  // @@protoc_insertion_point(field_release:rsp.CommissionRateField.broker_id)
  return broker_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CommissionRateField::set_allocated_broker_id(std::string* broker_id) {
  if (broker_id != nullptr) {
    
  } else {
    
  }
  broker_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), broker_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:rsp.CommissionRateField.broker_id)
}

// string investor_id = 3;
inline void CommissionRateField::clear_investor_id() {
  investor_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& CommissionRateField::investor_id() const {
  // @@protoc_insertion_point(field_get:rsp.CommissionRateField.investor_id)
  return _internal_investor_id();
}
inline void CommissionRateField::set_investor_id(const std::string& value) {
  _internal_set_investor_id(value);
  // @@protoc_insertion_point(field_set:rsp.CommissionRateField.investor_id)
}
inline std::string* CommissionRateField::mutable_investor_id() {
  // @@protoc_insertion_point(field_mutable:rsp.CommissionRateField.investor_id)
  return _internal_mutable_investor_id();
}
inline const std::string& CommissionRateField::_internal_investor_id() const {
  return investor_id_.Get();
}
inline void CommissionRateField::_internal_set_investor_id(const std::string& value) {
  
  investor_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void CommissionRateField::set_investor_id(std::string&& value) {
  
  investor_id_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:rsp.CommissionRateField.investor_id)
}
inline void CommissionRateField::set_investor_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  investor_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:rsp.CommissionRateField.investor_id)
}
inline void CommissionRateField::set_investor_id(const char* value,
    size_t size) {
  
  investor_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:rsp.CommissionRateField.investor_id)
}
inline std::string* CommissionRateField::_internal_mutable_investor_id() {
  
  return investor_id_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* CommissionRateField::release_investor_id() {
  // @@protoc_insertion_point(field_release:rsp.CommissionRateField.investor_id)
  return investor_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CommissionRateField::set_allocated_investor_id(std::string* investor_id) {
  if (investor_id != nullptr) {
    
  } else {
    
  }
  investor_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), investor_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:rsp.CommissionRateField.investor_id)
}

// double open_ratio_by_money = 4;
inline void CommissionRateField::clear_open_ratio_by_money() {
  open_ratio_by_money_ = 0;
}
inline double CommissionRateField::_internal_open_ratio_by_money() const {
  return open_ratio_by_money_;
}
inline double CommissionRateField::open_ratio_by_money() const {
  // @@protoc_insertion_point(field_get:rsp.CommissionRateField.open_ratio_by_money)
  return _internal_open_ratio_by_money();
}
inline void CommissionRateField::_internal_set_open_ratio_by_money(double value) {
  
  open_ratio_by_money_ = value;
}
inline void CommissionRateField::set_open_ratio_by_money(double value) {
  _internal_set_open_ratio_by_money(value);
  // @@protoc_insertion_point(field_set:rsp.CommissionRateField.open_ratio_by_money)
}

// double open_ratio_by_volume = 5;
inline void CommissionRateField::clear_open_ratio_by_volume() {
  open_ratio_by_volume_ = 0;
}
inline double CommissionRateField::_internal_open_ratio_by_volume() const {
  return open_ratio_by_volume_;
}
inline double CommissionRateField::open_ratio_by_volume() const {
  // @@protoc_insertion_point(field_get:rsp.CommissionRateField.open_ratio_by_volume)
  return _internal_open_ratio_by_volume();
}
inline void CommissionRateField::_internal_set_open_ratio_by_volume(double value) {
  
  open_ratio_by_volume_ = value;
}
inline void CommissionRateField::set_open_ratio_by_volume(double value) {
  _internal_set_open_ratio_by_volume(value);
  // @@protoc_insertion_point(field_set:rsp.CommissionRateField.open_ratio_by_volume)
}

// double close_ratio_by_money = 6;
inline void CommissionRateField::clear_close_ratio_by_money() {
  close_ratio_by_money_ = 0;
}
inline double CommissionRateField::_internal_close_ratio_by_money() const {
  return close_ratio_by_money_;
}
inline double CommissionRateField::close_ratio_by_money() const {
  // @@protoc_insertion_point(field_get:rsp.CommissionRateField.close_ratio_by_money)
  return _internal_close_ratio_by_money();
}
inline void CommissionRateField::_internal_set_close_ratio_by_money(double value) {
  
  close_ratio_by_money_ = value;
}
inline void CommissionRateField::set_close_ratio_by_money(double value) {
  _internal_set_close_ratio_by_money(value);
  // @@protoc_insertion_point(field_set:rsp.CommissionRateField.close_ratio_by_money)
}

// double close_ratio_by_volume = 7;
inline void CommissionRateField::clear_close_ratio_by_volume() {
  close_ratio_by_volume_ = 0;
}
inline double CommissionRateField::_internal_close_ratio_by_volume() const {
  return close_ratio_by_volume_;
}
inline double CommissionRateField::close_ratio_by_volume() const {
  // @@protoc_insertion_point(field_get:rsp.CommissionRateField.close_ratio_by_volume)
  return _internal_close_ratio_by_volume();
}
inline void CommissionRateField::_internal_set_close_ratio_by_volume(double value) {
  
  close_ratio_by_volume_ = value;
}
inline void CommissionRateField::set_close_ratio_by_volume(double value) {
  _internal_set_close_ratio_by_volume(value);
  // @@protoc_insertion_point(field_set:rsp.CommissionRateField.close_ratio_by_volume)
}

// double close_today_ratio_by_money = 8;
inline void CommissionRateField::clear_close_today_ratio_by_money() {
  close_today_ratio_by_money_ = 0;
}
inline double CommissionRateField::_internal_close_today_ratio_by_money() const {
  return close_today_ratio_by_money_;
}
inline double CommissionRateField::close_today_ratio_by_money() const {
  // @@protoc_insertion_point(field_get:rsp.CommissionRateField.close_today_ratio_by_money)
  return _internal_close_today_ratio_by_money();
}
inline void CommissionRateField::_internal_set_close_today_ratio_by_money(double value) {
  
  close_today_ratio_by_money_ = value;
}
inline void CommissionRateField::set_close_today_ratio_by_money(double value) {
  _internal_set_close_today_ratio_by_money(value);
  // @@protoc_insertion_point(field_set:rsp.CommissionRateField.close_today_ratio_by_money)
}

// double close_today_ratio_by_volume = 9;
inline void CommissionRateField::clear_close_today_ratio_by_volume() {
  close_today_ratio_by_volume_ = 0;
}
inline double CommissionRateField::_internal_close_today_ratio_by_volume() const {
  return close_today_ratio_by_volume_;
}
inline double CommissionRateField::close_today_ratio_by_volume() const {
  // @@protoc_insertion_point(field_get:rsp.CommissionRateField.close_today_ratio_by_volume)
  return _internal_close_today_ratio_by_volume();
}
inline void CommissionRateField::_internal_set_close_today_ratio_by_volume(double value) {
  
  close_today_ratio_by_volume_ = value;
}
inline void CommissionRateField::set_close_today_ratio_by_volume(double value) {
  _internal_set_close_today_ratio_by_volume(value);
  // @@protoc_insertion_point(field_set:rsp.CommissionRateField.close_today_ratio_by_volume)
}

// string exchange_id = 10;
inline void CommissionRateField::clear_exchange_id() {
  exchange_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& CommissionRateField::exchange_id() const {
  // @@protoc_insertion_point(field_get:rsp.CommissionRateField.exchange_id)
  return _internal_exchange_id();
}
inline void CommissionRateField::set_exchange_id(const std::string& value) {
  _internal_set_exchange_id(value);
  // @@protoc_insertion_point(field_set:rsp.CommissionRateField.exchange_id)
}
inline std::string* CommissionRateField::mutable_exchange_id() {
  // @@protoc_insertion_point(field_mutable:rsp.CommissionRateField.exchange_id)
  return _internal_mutable_exchange_id();
}
inline const std::string& CommissionRateField::_internal_exchange_id() const {
  return exchange_id_.Get();
}
inline void CommissionRateField::_internal_set_exchange_id(const std::string& value) {
  
  exchange_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void CommissionRateField::set_exchange_id(std::string&& value) {
  
  exchange_id_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:rsp.CommissionRateField.exchange_id)
}
inline void CommissionRateField::set_exchange_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  exchange_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:rsp.CommissionRateField.exchange_id)
}
inline void CommissionRateField::set_exchange_id(const char* value,
    size_t size) {
  
  exchange_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:rsp.CommissionRateField.exchange_id)
}
inline std::string* CommissionRateField::_internal_mutable_exchange_id() {
  
  return exchange_id_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* CommissionRateField::release_exchange_id() {
  // @@protoc_insertion_point(field_release:rsp.CommissionRateField.exchange_id)
  return exchange_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CommissionRateField::set_allocated_exchange_id(std::string* exchange_id) {
  if (exchange_id != nullptr) {
    
  } else {
    
  }
  exchange_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), exchange_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:rsp.CommissionRateField.exchange_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace rsp

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Rsp_2eCommissionRate_2eproto