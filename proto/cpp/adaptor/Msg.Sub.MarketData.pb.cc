// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg.Sub.MarketData.proto

#include "Msg.Sub.MarketData.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_Sub_2eMarketData_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SubMarketDataField_Sub_2eMarketData_2eproto;
namespace msg {
namespace sub {
class SubMarketDataMsgDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SubMarketDataMsg> _instance;
} _SubMarketDataMsg_default_instance_;
}  // namespace sub
}  // namespace msg
static void InitDefaultsscc_info_SubMarketDataMsg_Msg_2eSub_2eMarketData_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::msg::sub::_SubMarketDataMsg_default_instance_;
    new (ptr) ::msg::sub::SubMarketDataMsg();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::msg::sub::SubMarketDataMsg::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_SubMarketDataMsg_Msg_2eSub_2eMarketData_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_SubMarketDataMsg_Msg_2eSub_2eMarketData_2eproto}, {
      &scc_info_SubMarketDataField_Sub_2eMarketData_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Msg_2eSub_2eMarketData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Msg_2eSub_2eMarketData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Msg_2eSub_2eMarketData_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Msg_2eSub_2eMarketData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::msg::sub::SubMarketDataMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::msg::sub::SubMarketDataMsg, subscribe_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::msg::sub::SubMarketDataMsg)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::msg::sub::_SubMarketDataMsg_default_instance_),
};

const char descriptor_table_protodef_Msg_2eSub_2eMarketData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030Msg.Sub.MarketData.proto\022\007msg.sub\032\024Sub"
  ".MarketData.proto\">\n\020SubMarketDataMsg\022*\n"
  "\tsubscribe\030\001 \001(\0132\027.sub.SubMarketDataFiel"
  "dBC\n\025io.evelynn.base.protoB\025SubMarketDat"
  "aMsgProto\252\002\022Evelynn.Base.Protob\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Msg_2eSub_2eMarketData_2eproto_deps[1] = {
  &::descriptor_table_Sub_2eMarketData_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Msg_2eSub_2eMarketData_2eproto_sccs[1] = {
  &scc_info_SubMarketDataMsg_Msg_2eSub_2eMarketData_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Msg_2eSub_2eMarketData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Msg_2eSub_2eMarketData_2eproto = {
  false, false, descriptor_table_protodef_Msg_2eSub_2eMarketData_2eproto, "Msg.Sub.MarketData.proto", 198,
  &descriptor_table_Msg_2eSub_2eMarketData_2eproto_once, descriptor_table_Msg_2eSub_2eMarketData_2eproto_sccs, descriptor_table_Msg_2eSub_2eMarketData_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_Msg_2eSub_2eMarketData_2eproto::offsets,
  file_level_metadata_Msg_2eSub_2eMarketData_2eproto, 1, file_level_enum_descriptors_Msg_2eSub_2eMarketData_2eproto, file_level_service_descriptors_Msg_2eSub_2eMarketData_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Msg_2eSub_2eMarketData_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Msg_2eSub_2eMarketData_2eproto)), true);
namespace msg {
namespace sub {

// ===================================================================

void SubMarketDataMsg::InitAsDefaultInstance() {
  ::msg::sub::_SubMarketDataMsg_default_instance_._instance.get_mutable()->subscribe_ = const_cast< ::sub::SubMarketDataField*>(
      ::sub::SubMarketDataField::internal_default_instance());
}
class SubMarketDataMsg::_Internal {
 public:
  static const ::sub::SubMarketDataField& subscribe(const SubMarketDataMsg* msg);
};

const ::sub::SubMarketDataField&
SubMarketDataMsg::_Internal::subscribe(const SubMarketDataMsg* msg) {
  return *msg->subscribe_;
}
void SubMarketDataMsg::clear_subscribe() {
  if (GetArena() == nullptr && subscribe_ != nullptr) {
    delete subscribe_;
  }
  subscribe_ = nullptr;
}
SubMarketDataMsg::SubMarketDataMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:msg.sub.SubMarketDataMsg)
}
SubMarketDataMsg::SubMarketDataMsg(const SubMarketDataMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_subscribe()) {
    subscribe_ = new ::sub::SubMarketDataField(*from.subscribe_);
  } else {
    subscribe_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:msg.sub.SubMarketDataMsg)
}

void SubMarketDataMsg::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SubMarketDataMsg_Msg_2eSub_2eMarketData_2eproto.base);
  subscribe_ = nullptr;
}

SubMarketDataMsg::~SubMarketDataMsg() {
  // @@protoc_insertion_point(destructor:msg.sub.SubMarketDataMsg)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SubMarketDataMsg::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete subscribe_;
}

void SubMarketDataMsg::ArenaDtor(void* object) {
  SubMarketDataMsg* _this = reinterpret_cast< SubMarketDataMsg* >(object);
  (void)_this;
}
void SubMarketDataMsg::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SubMarketDataMsg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SubMarketDataMsg& SubMarketDataMsg::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SubMarketDataMsg_Msg_2eSub_2eMarketData_2eproto.base);
  return *internal_default_instance();
}


void SubMarketDataMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:msg.sub.SubMarketDataMsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && subscribe_ != nullptr) {
    delete subscribe_;
  }
  subscribe_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SubMarketDataMsg::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .sub.SubMarketDataField subscribe = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_subscribe(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* SubMarketDataMsg::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:msg.sub.SubMarketDataMsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .sub.SubMarketDataField subscribe = 1;
  if (this->has_subscribe()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::subscribe(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:msg.sub.SubMarketDataMsg)
  return target;
}

size_t SubMarketDataMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:msg.sub.SubMarketDataMsg)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .sub.SubMarketDataField subscribe = 1;
  if (this->has_subscribe()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *subscribe_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SubMarketDataMsg::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:msg.sub.SubMarketDataMsg)
  GOOGLE_DCHECK_NE(&from, this);
  const SubMarketDataMsg* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SubMarketDataMsg>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:msg.sub.SubMarketDataMsg)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:msg.sub.SubMarketDataMsg)
    MergeFrom(*source);
  }
}

void SubMarketDataMsg::MergeFrom(const SubMarketDataMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:msg.sub.SubMarketDataMsg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_subscribe()) {
    _internal_mutable_subscribe()->::sub::SubMarketDataField::MergeFrom(from._internal_subscribe());
  }
}

void SubMarketDataMsg::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:msg.sub.SubMarketDataMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SubMarketDataMsg::CopyFrom(const SubMarketDataMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:msg.sub.SubMarketDataMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SubMarketDataMsg::IsInitialized() const {
  return true;
}

void SubMarketDataMsg::InternalSwap(SubMarketDataMsg* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(subscribe_, other->subscribe_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SubMarketDataMsg::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sub
}  // namespace msg
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::msg::sub::SubMarketDataMsg* Arena::CreateMaybeMessage< ::msg::sub::SubMarketDataMsg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::msg::sub::SubMarketDataMsg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
