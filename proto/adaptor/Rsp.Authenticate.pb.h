// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Rsp.Authenticate.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Rsp_2eAuthenticate_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Rsp_2eAuthenticate_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_Rsp_2eAuthenticate_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Rsp_2eAuthenticate_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Rsp_2eAuthenticate_2eproto;
namespace rsp {
class AuthenticateField;
class AuthenticateFieldDefaultTypeInternal;
extern AuthenticateFieldDefaultTypeInternal _AuthenticateField_default_instance_;
}  // namespace rsp
PROTOBUF_NAMESPACE_OPEN
template<> ::rsp::AuthenticateField* Arena::CreateMaybeMessage<::rsp::AuthenticateField>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace rsp {

// ===================================================================

class AuthenticateField PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:rsp.AuthenticateField) */ {
 public:
  inline AuthenticateField() : AuthenticateField(nullptr) {}
  virtual ~AuthenticateField();

  AuthenticateField(const AuthenticateField& from);
  AuthenticateField(AuthenticateField&& from) noexcept
    : AuthenticateField() {
    *this = ::std::move(from);
  }

  inline AuthenticateField& operator=(const AuthenticateField& from) {
    CopyFrom(from);
    return *this;
  }
  inline AuthenticateField& operator=(AuthenticateField&& from) noexcept {
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
  static const AuthenticateField& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AuthenticateField* internal_default_instance() {
    return reinterpret_cast<const AuthenticateField*>(
               &_AuthenticateField_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AuthenticateField& a, AuthenticateField& b) {
    a.Swap(&b);
  }
  inline void Swap(AuthenticateField* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AuthenticateField* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AuthenticateField* New() const final {
    return CreateMaybeMessage<AuthenticateField>(nullptr);
  }

  AuthenticateField* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AuthenticateField>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AuthenticateField& from);
  void MergeFrom(const AuthenticateField& from);
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
  void InternalSwap(AuthenticateField* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "rsp.AuthenticateField";
  }
  protected:
  explicit AuthenticateField(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Rsp_2eAuthenticate_2eproto);
    return ::descriptor_table_Rsp_2eAuthenticate_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBrokerIdFieldNumber = 1,
    kUserIdFieldNumber = 2,
    kUserProductInfoFieldNumber = 3,
    kAppIdFieldNumber = 4,
    kAppTypeFieldNumber = 5,
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

  // string user_product_info = 3;
  void clear_user_product_info();
  const std::string& user_product_info() const;
  void set_user_product_info(const std::string& value);
  void set_user_product_info(std::string&& value);
  void set_user_product_info(const char* value);
  void set_user_product_info(const char* value, size_t size);
  std::string* mutable_user_product_info();
  std::string* release_user_product_info();
  void set_allocated_user_product_info(std::string* user_product_info);
  private:
  const std::string& _internal_user_product_info() const;
  void _internal_set_user_product_info(const std::string& value);
  std::string* _internal_mutable_user_product_info();
  public:

  // string app_id = 4;
  void clear_app_id();
  const std::string& app_id() const;
  void set_app_id(const std::string& value);
  void set_app_id(std::string&& value);
  void set_app_id(const char* value);
  void set_app_id(const char* value, size_t size);
  std::string* mutable_app_id();
  std::string* release_app_id();
  void set_allocated_app_id(std::string* app_id);
  private:
  const std::string& _internal_app_id() const;
  void _internal_set_app_id(const std::string& value);
  std::string* _internal_mutable_app_id();
  public:

  // int32 app_type = 5;
  void clear_app_type();
  ::PROTOBUF_NAMESPACE_ID::int32 app_type() const;
  void set_app_type(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_app_type() const;
  void _internal_set_app_type(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:rsp.AuthenticateField)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr broker_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr user_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr user_product_info_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr app_id_;
  ::PROTOBUF_NAMESPACE_ID::int32 app_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Rsp_2eAuthenticate_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AuthenticateField

// string broker_id = 1;
inline void AuthenticateField::clear_broker_id() {
  broker_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& AuthenticateField::broker_id() const {
  // @@protoc_insertion_point(field_get:rsp.AuthenticateField.broker_id)
  return _internal_broker_id();
}
inline void AuthenticateField::set_broker_id(const std::string& value) {
  _internal_set_broker_id(value);
  // @@protoc_insertion_point(field_set:rsp.AuthenticateField.broker_id)
}
inline std::string* AuthenticateField::mutable_broker_id() {
  // @@protoc_insertion_point(field_mutable:rsp.AuthenticateField.broker_id)
  return _internal_mutable_broker_id();
}
inline const std::string& AuthenticateField::_internal_broker_id() const {
  return broker_id_.Get();
}
inline void AuthenticateField::_internal_set_broker_id(const std::string& value) {
  
  broker_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void AuthenticateField::set_broker_id(std::string&& value) {
  
  broker_id_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:rsp.AuthenticateField.broker_id)
}
inline void AuthenticateField::set_broker_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  broker_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:rsp.AuthenticateField.broker_id)
}
inline void AuthenticateField::set_broker_id(const char* value,
    size_t size) {
  
  broker_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:rsp.AuthenticateField.broker_id)
}
inline std::string* AuthenticateField::_internal_mutable_broker_id() {
  
  return broker_id_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* AuthenticateField::release_broker_id() {
  // @@protoc_insertion_point(field_release:rsp.AuthenticateField.broker_id)
  return broker_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void AuthenticateField::set_allocated_broker_id(std::string* broker_id) {
  if (broker_id != nullptr) {
    
  } else {
    
  }
  broker_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), broker_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:rsp.AuthenticateField.broker_id)
}

// string user_id = 2;
inline void AuthenticateField::clear_user_id() {
  user_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& AuthenticateField::user_id() const {
  // @@protoc_insertion_point(field_get:rsp.AuthenticateField.user_id)
  return _internal_user_id();
}
inline void AuthenticateField::set_user_id(const std::string& value) {
  _internal_set_user_id(value);
  // @@protoc_insertion_point(field_set:rsp.AuthenticateField.user_id)
}
inline std::string* AuthenticateField::mutable_user_id() {
  // @@protoc_insertion_point(field_mutable:rsp.AuthenticateField.user_id)
  return _internal_mutable_user_id();
}
inline const std::string& AuthenticateField::_internal_user_id() const {
  return user_id_.Get();
}
inline void AuthenticateField::_internal_set_user_id(const std::string& value) {
  
  user_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void AuthenticateField::set_user_id(std::string&& value) {
  
  user_id_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:rsp.AuthenticateField.user_id)
}
inline void AuthenticateField::set_user_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  user_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:rsp.AuthenticateField.user_id)
}
inline void AuthenticateField::set_user_id(const char* value,
    size_t size) {
  
  user_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:rsp.AuthenticateField.user_id)
}
inline std::string* AuthenticateField::_internal_mutable_user_id() {
  
  return user_id_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* AuthenticateField::release_user_id() {
  // @@protoc_insertion_point(field_release:rsp.AuthenticateField.user_id)
  return user_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void AuthenticateField::set_allocated_user_id(std::string* user_id) {
  if (user_id != nullptr) {
    
  } else {
    
  }
  user_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), user_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:rsp.AuthenticateField.user_id)
}

// string user_product_info = 3;
inline void AuthenticateField::clear_user_product_info() {
  user_product_info_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& AuthenticateField::user_product_info() const {
  // @@protoc_insertion_point(field_get:rsp.AuthenticateField.user_product_info)
  return _internal_user_product_info();
}
inline void AuthenticateField::set_user_product_info(const std::string& value) {
  _internal_set_user_product_info(value);
  // @@protoc_insertion_point(field_set:rsp.AuthenticateField.user_product_info)
}
inline std::string* AuthenticateField::mutable_user_product_info() {
  // @@protoc_insertion_point(field_mutable:rsp.AuthenticateField.user_product_info)
  return _internal_mutable_user_product_info();
}
inline const std::string& AuthenticateField::_internal_user_product_info() const {
  return user_product_info_.Get();
}
inline void AuthenticateField::_internal_set_user_product_info(const std::string& value) {
  
  user_product_info_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void AuthenticateField::set_user_product_info(std::string&& value) {
  
  user_product_info_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:rsp.AuthenticateField.user_product_info)
}
inline void AuthenticateField::set_user_product_info(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  user_product_info_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:rsp.AuthenticateField.user_product_info)
}
inline void AuthenticateField::set_user_product_info(const char* value,
    size_t size) {
  
  user_product_info_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:rsp.AuthenticateField.user_product_info)
}
inline std::string* AuthenticateField::_internal_mutable_user_product_info() {
  
  return user_product_info_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* AuthenticateField::release_user_product_info() {
  // @@protoc_insertion_point(field_release:rsp.AuthenticateField.user_product_info)
  return user_product_info_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void AuthenticateField::set_allocated_user_product_info(std::string* user_product_info) {
  if (user_product_info != nullptr) {
    
  } else {
    
  }
  user_product_info_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), user_product_info,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:rsp.AuthenticateField.user_product_info)
}

// string app_id = 4;
inline void AuthenticateField::clear_app_id() {
  app_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& AuthenticateField::app_id() const {
  // @@protoc_insertion_point(field_get:rsp.AuthenticateField.app_id)
  return _internal_app_id();
}
inline void AuthenticateField::set_app_id(const std::string& value) {
  _internal_set_app_id(value);
  // @@protoc_insertion_point(field_set:rsp.AuthenticateField.app_id)
}
inline std::string* AuthenticateField::mutable_app_id() {
  // @@protoc_insertion_point(field_mutable:rsp.AuthenticateField.app_id)
  return _internal_mutable_app_id();
}
inline const std::string& AuthenticateField::_internal_app_id() const {
  return app_id_.Get();
}
inline void AuthenticateField::_internal_set_app_id(const std::string& value) {
  
  app_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void AuthenticateField::set_app_id(std::string&& value) {
  
  app_id_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:rsp.AuthenticateField.app_id)
}
inline void AuthenticateField::set_app_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  app_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:rsp.AuthenticateField.app_id)
}
inline void AuthenticateField::set_app_id(const char* value,
    size_t size) {
  
  app_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:rsp.AuthenticateField.app_id)
}
inline std::string* AuthenticateField::_internal_mutable_app_id() {
  
  return app_id_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* AuthenticateField::release_app_id() {
  // @@protoc_insertion_point(field_release:rsp.AuthenticateField.app_id)
  return app_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void AuthenticateField::set_allocated_app_id(std::string* app_id) {
  if (app_id != nullptr) {
    
  } else {
    
  }
  app_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), app_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:rsp.AuthenticateField.app_id)
}

// int32 app_type = 5;
inline void AuthenticateField::clear_app_type() {
  app_type_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AuthenticateField::_internal_app_type() const {
  return app_type_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AuthenticateField::app_type() const {
  // @@protoc_insertion_point(field_get:rsp.AuthenticateField.app_type)
  return _internal_app_type();
}
inline void AuthenticateField::_internal_set_app_type(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  app_type_ = value;
}
inline void AuthenticateField::set_app_type(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_app_type(value);
  // @@protoc_insertion_point(field_set:rsp.AuthenticateField.app_type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace rsp

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Rsp_2eAuthenticate_2eproto
