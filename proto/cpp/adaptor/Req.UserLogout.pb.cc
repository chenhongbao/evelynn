// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Req.UserLogout.proto

#include "Req.UserLogout.pb.h"

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
class UserLogoutFieldDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<UserLogoutField> _instance;
} _UserLogoutField_default_instance_;
}  // namespace req
static void InitDefaultsscc_info_UserLogoutField_Req_2eUserLogout_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::req::_UserLogoutField_default_instance_;
    new (ptr) ::req::UserLogoutField();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::req::UserLogoutField::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_UserLogoutField_Req_2eUserLogout_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_UserLogoutField_Req_2eUserLogout_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Req_2eUserLogout_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Req_2eUserLogout_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Req_2eUserLogout_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Req_2eUserLogout_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::req::UserLogoutField, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::req::UserLogoutField, broker_id_),
  PROTOBUF_FIELD_OFFSET(::req::UserLogoutField, user_id_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::req::UserLogoutField)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::req::_UserLogoutField_default_instance_),
};

const char descriptor_table_protodef_Req_2eUserLogout_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024Req.UserLogout.proto\022\003req\"5\n\017UserLogou"
  "tField\022\021\n\tbroker_id\030\001 \001(\t\022\017\n\007user_id\030\002 \001"
  "(\tBB\n\025io.evelynn.base.protoB\024UserLogoutF"
  "ieldProto\252\002\022Evelynn.Base.Protob\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Req_2eUserLogout_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Req_2eUserLogout_2eproto_sccs[1] = {
  &scc_info_UserLogoutField_Req_2eUserLogout_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Req_2eUserLogout_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Req_2eUserLogout_2eproto = {
  false, false, descriptor_table_protodef_Req_2eUserLogout_2eproto, "Req.UserLogout.proto", 158,
  &descriptor_table_Req_2eUserLogout_2eproto_once, descriptor_table_Req_2eUserLogout_2eproto_sccs, descriptor_table_Req_2eUserLogout_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_Req_2eUserLogout_2eproto::offsets,
  file_level_metadata_Req_2eUserLogout_2eproto, 1, file_level_enum_descriptors_Req_2eUserLogout_2eproto, file_level_service_descriptors_Req_2eUserLogout_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Req_2eUserLogout_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Req_2eUserLogout_2eproto)), true);
namespace req {

// ===================================================================

void UserLogoutField::InitAsDefaultInstance() {
}
class UserLogoutField::_Internal {
 public:
};

UserLogoutField::UserLogoutField(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:req.UserLogoutField)
}
UserLogoutField::UserLogoutField(const UserLogoutField& from)
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
  // @@protoc_insertion_point(copy_constructor:req.UserLogoutField)
}

void UserLogoutField::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_UserLogoutField_Req_2eUserLogout_2eproto.base);
  broker_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  user_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

UserLogoutField::~UserLogoutField() {
  // @@protoc_insertion_point(destructor:req.UserLogoutField)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void UserLogoutField::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  broker_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  user_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void UserLogoutField::ArenaDtor(void* object) {
  UserLogoutField* _this = reinterpret_cast< UserLogoutField* >(object);
  (void)_this;
}
void UserLogoutField::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void UserLogoutField::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const UserLogoutField& UserLogoutField::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_UserLogoutField_Req_2eUserLogout_2eproto.base);
  return *internal_default_instance();
}


void UserLogoutField::Clear() {
// @@protoc_insertion_point(message_clear_start:req.UserLogoutField)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  broker_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  user_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UserLogoutField::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "req.UserLogoutField.broker_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string user_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_user_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "req.UserLogoutField.user_id"));
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

::PROTOBUF_NAMESPACE_ID::uint8* UserLogoutField::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:req.UserLogoutField)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string broker_id = 1;
  if (this->broker_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_broker_id().data(), static_cast<int>(this->_internal_broker_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "req.UserLogoutField.broker_id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_broker_id(), target);
  }

  // string user_id = 2;
  if (this->user_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_user_id().data(), static_cast<int>(this->_internal_user_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "req.UserLogoutField.user_id");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_user_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:req.UserLogoutField)
  return target;
}

size_t UserLogoutField::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:req.UserLogoutField)
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

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void UserLogoutField::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:req.UserLogoutField)
  GOOGLE_DCHECK_NE(&from, this);
  const UserLogoutField* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<UserLogoutField>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:req.UserLogoutField)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:req.UserLogoutField)
    MergeFrom(*source);
  }
}

void UserLogoutField::MergeFrom(const UserLogoutField& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:req.UserLogoutField)
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
}

void UserLogoutField::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:req.UserLogoutField)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserLogoutField::CopyFrom(const UserLogoutField& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:req.UserLogoutField)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserLogoutField::IsInitialized() const {
  return true;
}

void UserLogoutField::InternalSwap(UserLogoutField* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  broker_id_.Swap(&other->broker_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  user_id_.Swap(&other->user_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata UserLogoutField::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace req
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::req::UserLogoutField* Arena::CreateMaybeMessage< ::req::UserLogoutField >(Arena* arena) {
  return Arena::CreateMessageInternal< ::req::UserLogoutField >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
