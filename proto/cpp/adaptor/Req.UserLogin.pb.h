// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Req.UserLogin.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Req_2eUserLogin_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Req_2eUserLogin_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_Req_2eUserLogin_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Req_2eUserLogin_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Req_2eUserLogin_2eproto;
namespace req {
class UserLoginField;
class UserLoginFieldDefaultTypeInternal;
extern UserLoginFieldDefaultTypeInternal _UserLoginField_default_instance_;
}  // namespace req
PROTOBUF_NAMESPACE_OPEN
template<> ::req::UserLoginField* Arena::CreateMaybeMessage<::req::UserLoginField>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace req {

// ===================================================================

class UserLoginField PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:req.UserLoginField) */ {
 public:
  inline UserLoginField() : UserLoginField(nullptr) {}
  virtual ~UserLoginField();

  UserLoginField(const UserLoginField& from);
  UserLoginField(UserLoginField&& from) noexcept
    : UserLoginField() {
    *this = ::std::move(from);
  }

  inline UserLoginField& operator=(const UserLoginField& from) {
    CopyFrom(from);
    return *this;
  }
  inline UserLoginField& operator=(UserLoginField&& from) noexcept {
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
  static const UserLoginField& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UserLoginField* internal_default_instance() {
    return reinterpret_cast<const UserLoginField*>(
               &_UserLoginField_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(UserLoginField& a, UserLoginField& b) {
    a.Swap(&b);
  }
  inline void Swap(UserLoginField* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(UserLoginField* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline UserLoginField* New() const final {
    return CreateMaybeMessage<UserLoginField>(nullptr);
  }

  UserLoginField* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<UserLoginField>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const UserLoginField& from);
  void MergeFrom(const UserLoginField& from);
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
  void InternalSwap(UserLoginField* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "req.UserLoginField";
  }
  protected:
  explicit UserLoginField(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Req_2eUserLogin_2eproto);
    return ::descriptor_table_Req_2eUserLogin_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBrokerIdFieldNumber = 1,
    kUserIdFieldNumber = 2,
    kPasswordFieldNumber = 3,
  };
  // string broker_id = 1;
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

  // string user_id = 2;
  void clear_user_id();
  const std::string& user_id() const;
  void set_user_id(const std::string& value);
  void set_user_id(std::string&& value);
  void set_user_id(const char* value);
  void set_user_id(const char* value, size_t size);
  std::string* mutable_user_id();
  std::string* release_user_id();
  void set_allocated_user_id(std::string* user_id);
  private:
  const std::string& _internal_user_id() const;
  void _internal_set_user_id(const std::string& value);
  std::string* _internal_mutable_user_id();
  public:

  // string password = 3;
  void clear_password();
  const std::string& password() const;
  void set_password(const std::string& value);
  void set_password(std::string&& value);
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  std::string* mutable_password();
  std::string* release_password();
  void set_allocated_password(std::string* password);
  private:
  const std::string& _internal_password() const;
  void _internal_set_password(const std::string& value);
  std::string* _internal_mutable_password();
  public:

  // @@protoc_insertion_point(class_scope:req.UserLoginField)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr broker_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr user_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr password_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Req_2eUserLogin_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UserLoginField

// string broker_id = 1;
inline void UserLoginField::clear_broker_id() {
  broker_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& UserLoginField::broker_id() const {
  // @@protoc_insertion_point(field_get:req.UserLoginField.broker_id)
  return _internal_broker_id();
}
inline void UserLoginField::set_broker_id(const std::string& value) {
  _internal_set_broker_id(value);
  // @@protoc_insertion_point(field_set:req.UserLoginField.broker_id)
}
inline std::string* UserLoginField::mutable_broker_id() {
  // @@protoc_insertion_point(field_mutable:req.UserLoginField.broker_id)
  return _internal_mutable_broker_id();
}
inline const std::string& UserLoginField::_internal_broker_id() const {
  return broker_id_.Get();
}
inline void UserLoginField::_internal_set_broker_id(const std::string& value) {
  
  broker_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void UserLoginField::set_broker_id(std::string&& value) {
  
  broker_id_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:req.UserLoginField.broker_id)
}
inline void UserLoginField::set_broker_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  broker_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:req.UserLoginField.broker_id)
}
inline void UserLoginField::set_broker_id(const char* value,
    size_t size) {
  
  broker_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:req.UserLoginField.broker_id)
}
inline std::string* UserLoginField::_internal_mutable_broker_id() {
  
  return broker_id_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* UserLoginField::release_broker_id() {
  // @@protoc_insertion_point(field_release:req.UserLoginField.broker_id)
  return broker_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void UserLoginField::set_allocated_broker_id(std::string* broker_id) {
  if (broker_id != nullptr) {
    
  } else {
    
  }
  broker_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), broker_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:req.UserLoginField.broker_id)
}

// string user_id = 2;
inline void UserLoginField::clear_user_id() {
  user_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& UserLoginField::user_id() const {
  // @@protoc_insertion_point(field_get:req.UserLoginField.user_id)
  return _internal_user_id();
}
inline void UserLoginField::set_user_id(const std::string& value) {
  _internal_set_user_id(value);
  // @@protoc_insertion_point(field_set:req.UserLoginField.user_id)
}
inline std::string* UserLoginField::mutable_user_id() {
  // @@protoc_insertion_point(field_mutable:req.UserLoginField.user_id)
  return _internal_mutable_user_id();
}
inline const std::string& UserLoginField::_internal_user_id() const {
  return user_id_.Get();
}
inline void UserLoginField::_internal_set_user_id(const std::string& value) {
  
  user_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void UserLoginField::set_user_id(std::string&& value) {
  
  user_id_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:req.UserLoginField.user_id)
}
inline void UserLoginField::set_user_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  user_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:req.UserLoginField.user_id)
}
inline void UserLoginField::set_user_id(const char* value,
    size_t size) {
  
  user_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:req.UserLoginField.user_id)
}
inline std::string* UserLoginField::_internal_mutable_user_id() {
  
  return user_id_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* UserLoginField::release_user_id() {
  // @@protoc_insertion_point(field_release:req.UserLoginField.user_id)
  return user_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void UserLoginField::set_allocated_user_id(std::string* user_id) {
  if (user_id != nullptr) {
    
  } else {
    
  }
  user_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), user_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:req.UserLoginField.user_id)
}

// string password = 3;
inline void UserLoginField::clear_password() {
  password_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& UserLoginField::password() const {
  // @@protoc_insertion_point(field_get:req.UserLoginField.password)
  return _internal_password();
}
inline void UserLoginField::set_password(const std::string& value) {
  _internal_set_password(value);
  // @@protoc_insertion_point(field_set:req.UserLoginField.password)
}
inline std::string* UserLoginField::mutable_password() {
  // @@protoc_insertion_point(field_mutable:req.UserLoginField.password)
  return _internal_mutable_password();
}
inline const std::string& UserLoginField::_internal_password() const {
  return password_.Get();
}
inline void UserLoginField::_internal_set_password(const std::string& value) {
  
  password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void UserLoginField::set_password(std::string&& value) {
  
  password_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:req.UserLoginField.password)
}
inline void UserLoginField::set_password(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:req.UserLoginField.password)
}
inline void UserLoginField::set_password(const char* value,
    size_t size) {
  
  password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:req.UserLoginField.password)
}
inline std::string* UserLoginField::_internal_mutable_password() {
  
  return password_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* UserLoginField::release_password() {
  // @@protoc_insertion_point(field_release:req.UserLoginField.password)
  return password_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void UserLoginField::set_allocated_password(std::string* password) {
  if (password != nullptr) {
    
  } else {
    
  }
  password_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), password,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:req.UserLoginField.password)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace req

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Req_2eUserLogin_2eproto