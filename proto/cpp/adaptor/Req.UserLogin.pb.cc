// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Req.UserLogin.proto

#include "Req.UserLogin.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace req {
class UserLoginFieldDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<UserLoginField> _instance;
} _UserLoginField_default_instance_;
}  // namespace req
static void InitDefaultsscc_info_UserLoginField_Req_2eUserLogin_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::req::_UserLoginField_default_instance_;
    new (ptr) ::req::UserLoginField();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::req::UserLoginField::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_UserLoginField_Req_2eUserLogin_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_UserLoginField_Req_2eUserLogin_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Req_2eUserLogin_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Req_2eUserLogin_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Req_2eUserLogin_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Req_2eUserLogin_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::req::UserLoginField, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::req::UserLoginField, broker_id_),
  PROTOBUF_FIELD_OFFSET(::req::UserLoginField, user_id_),
  PROTOBUF_FIELD_OFFSET(::req::UserLoginField, password_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::req::UserLoginField)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::req::_UserLoginField_default_instance_),
};

const char descriptor_table_protodef_Req_2eUserLogin_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023Req.UserLogin.proto\022\003req\"F\n\016UserLoginF"
  "ield\022\021\n\tbroker_id\030\001 \001(\t\022\017\n\007user_id\030\002 \001(\t"
  "\022\020\n\010password\030\003 \001(\tBD\n\025io.evelynn.base.pr"
  "otoB\026ReqUserLoginFieldProto\252\002\022Evelynn.Ba"
  "se.Protob\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Req_2eUserLogin_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Req_2eUserLogin_2eproto_sccs[1] = {
  &scc_info_UserLoginField_Req_2eUserLogin_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Req_2eUserLogin_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Req_2eUserLogin_2eproto = {
  false, false, descriptor_table_protodef_Req_2eUserLogin_2eproto, "Req.UserLogin.proto", 176,
  &descriptor_table_Req_2eUserLogin_2eproto_once, descriptor_table_Req_2eUserLogin_2eproto_sccs, descriptor_table_Req_2eUserLogin_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_Req_2eUserLogin_2eproto::offsets,
  file_level_metadata_Req_2eUserLogin_2eproto, 1, file_level_enum_descriptors_Req_2eUserLogin_2eproto, file_level_service_descriptors_Req_2eUserLogin_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Req_2eUserLogin_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Req_2eUserLogin_2eproto)), true);
namespace req {

// ===================================================================

void UserLoginField::InitAsDefaultInstance() {
}
class UserLoginField::_Internal {
 public:
};

UserLoginField::UserLoginField(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:req.UserLoginField)
}
UserLoginField::UserLoginField(const UserLoginField& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  broker_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_broker_id().empty()) {
    broker_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_broker_id(),
      GetArena());
  }
  user_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_user_id().empty()) {
    user_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_user_id(),
      GetArena());
  }
  password_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_password().empty()) {
    password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_password(),
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:req.UserLoginField)
}

void UserLoginField::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_UserLoginField_Req_2eUserLogin_2eproto.base);
  broker_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  user_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  password_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

UserLoginField::~UserLoginField() {
  // @@protoc_insertion_point(destructor:req.UserLoginField)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void UserLoginField::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  broker_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  user_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  password_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void UserLoginField::ArenaDtor(void* object) {
  UserLoginField* _this = reinterpret_cast< UserLoginField* >(object);
  (void)_this;
}
void UserLoginField::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void UserLoginField::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const UserLoginField& UserLoginField::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_UserLoginField_Req_2eUserLogin_2eproto.base);
  return *internal_default_instance();
}


void UserLoginField::Clear() {
// @@protoc_insertion_point(message_clear_start:req.UserLoginField)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  broker_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  user_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  password_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UserLoginField::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string broker_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_broker_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "req.UserLoginField.broker_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string user_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_user_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "req.UserLoginField.user_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string password = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_password();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "req.UserLoginField.password"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* UserLoginField::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:req.UserLoginField)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string broker_id = 1;
  if (this->broker_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_broker_id().data(), static_cast<int>(this->_internal_broker_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "req.UserLoginField.broker_id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_broker_id(), target);
  }

  // string user_id = 2;
  if (this->user_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_user_id().data(), static_cast<int>(this->_internal_user_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "req.UserLoginField.user_id");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_user_id(), target);
  }

  // string password = 3;
  if (this->password().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_password().data(), static_cast<int>(this->_internal_password().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "req.UserLoginField.password");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_password(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:req.UserLoginField)
  return target;
}

size_t UserLoginField::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:req.UserLoginField)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string broker_id = 1;
  if (this->broker_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_broker_id());
  }

  // string user_id = 2;
  if (this->user_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_user_id());
  }

  // string password = 3;
  if (this->password().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_password());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void UserLoginField::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:req.UserLoginField)
  GOOGLE_DCHECK_NE(&from, this);
  const UserLoginField* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<UserLoginField>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:req.UserLoginField)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:req.UserLoginField)
    MergeFrom(*source);
  }
}

void UserLoginField::MergeFrom(const UserLoginField& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:req.UserLoginField)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.broker_id().size() > 0) {
    _internal_set_broker_id(from._internal_broker_id());
  }
  if (from.user_id().size() > 0) {
    _internal_set_user_id(from._internal_user_id());
  }
  if (from.password().size() > 0) {
    _internal_set_password(from._internal_password());
  }
}

void UserLoginField::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:req.UserLoginField)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserLoginField::CopyFrom(const UserLoginField& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:req.UserLoginField)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserLoginField::IsInitialized() const {
  return true;
}

void UserLoginField::InternalSwap(UserLoginField* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  broker_id_.Swap(&other->broker_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  user_id_.Swap(&other->user_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  password_.Swap(&other->password_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata UserLoginField::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace req
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::req::UserLoginField* Arena::CreateMaybeMessage< ::req::UserLoginField >(Arena* arena) {
  return Arena::CreateMessageInternal< ::req::UserLoginField >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
