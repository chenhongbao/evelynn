// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg.Rtn.Order.proto

#include "Msg.Rtn.Order.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_Rtn_2eOrder_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_OrderField_Rtn_2eOrder_2eproto;
namespace msg {
namespace rtn {
class RtnOrderMsgDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<RtnOrderMsg> _instance;
} _RtnOrderMsg_default_instance_;
}  // namespace rtn
}  // namespace msg
static void InitDefaultsscc_info_RtnOrderMsg_Msg_2eRtn_2eOrder_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::msg::rtn::_RtnOrderMsg_default_instance_;
    new (ptr) ::msg::rtn::RtnOrderMsg();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::msg::rtn::RtnOrderMsg::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_RtnOrderMsg_Msg_2eRtn_2eOrder_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_RtnOrderMsg_Msg_2eRtn_2eOrder_2eproto}, {
      &scc_info_OrderField_Rtn_2eOrder_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Msg_2eRtn_2eOrder_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Msg_2eRtn_2eOrder_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Msg_2eRtn_2eOrder_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Msg_2eRtn_2eOrder_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::msg::rtn::RtnOrderMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::msg::rtn::RtnOrderMsg, order_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::msg::rtn::RtnOrderMsg)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::msg::rtn::_RtnOrderMsg_default_instance_),
};

const char descriptor_table_protodef_Msg_2eRtn_2eOrder_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023Msg.Rtn.Order.proto\022\007msg.rtn\032\017Rtn.Orde"
  "r.proto\"-\n\013RtnOrderMsg\022\036\n\005order\030\001 \001(\0132\017."
  "rtn.OrderFieldB>\n\025io.evelynn.base.protoB"
  "\020RtnOrderMsgProto\252\002\022Evelynn.Base.Protob\006"
  "proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Msg_2eRtn_2eOrder_2eproto_deps[1] = {
  &::descriptor_table_Rtn_2eOrder_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Msg_2eRtn_2eOrder_2eproto_sccs[1] = {
  &scc_info_RtnOrderMsg_Msg_2eRtn_2eOrder_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Msg_2eRtn_2eOrder_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Msg_2eRtn_2eOrder_2eproto = {
  false, false, descriptor_table_protodef_Msg_2eRtn_2eOrder_2eproto, "Msg.Rtn.Order.proto", 166,
  &descriptor_table_Msg_2eRtn_2eOrder_2eproto_once, descriptor_table_Msg_2eRtn_2eOrder_2eproto_sccs, descriptor_table_Msg_2eRtn_2eOrder_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_Msg_2eRtn_2eOrder_2eproto::offsets,
  file_level_metadata_Msg_2eRtn_2eOrder_2eproto, 1, file_level_enum_descriptors_Msg_2eRtn_2eOrder_2eproto, file_level_service_descriptors_Msg_2eRtn_2eOrder_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Msg_2eRtn_2eOrder_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Msg_2eRtn_2eOrder_2eproto)), true);
namespace msg {
namespace rtn {

// ===================================================================

void RtnOrderMsg::InitAsDefaultInstance() {
  ::msg::rtn::_RtnOrderMsg_default_instance_._instance.get_mutable()->order_ = const_cast< ::rtn::OrderField*>(
      ::rtn::OrderField::internal_default_instance());
}
class RtnOrderMsg::_Internal {
 public:
  static const ::rtn::OrderField& order(const RtnOrderMsg* msg);
};

const ::rtn::OrderField&
RtnOrderMsg::_Internal::order(const RtnOrderMsg* msg) {
  return *msg->order_;
}
void RtnOrderMsg::clear_order() {
  if (GetArena() == nullptr && order_ != nullptr) {
    delete order_;
  }
  order_ = nullptr;
}
RtnOrderMsg::RtnOrderMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:msg.rtn.RtnOrderMsg)
}
RtnOrderMsg::RtnOrderMsg(const RtnOrderMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_order()) {
    order_ = new ::rtn::OrderField(*from.order_);
  } else {
    order_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:msg.rtn.RtnOrderMsg)
}

void RtnOrderMsg::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_RtnOrderMsg_Msg_2eRtn_2eOrder_2eproto.base);
  order_ = nullptr;
}

RtnOrderMsg::~RtnOrderMsg() {
  // @@protoc_insertion_point(destructor:msg.rtn.RtnOrderMsg)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void RtnOrderMsg::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete order_;
}

void RtnOrderMsg::ArenaDtor(void* object) {
  RtnOrderMsg* _this = reinterpret_cast< RtnOrderMsg* >(object);
  (void)_this;
}
void RtnOrderMsg::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RtnOrderMsg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RtnOrderMsg& RtnOrderMsg::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_RtnOrderMsg_Msg_2eRtn_2eOrder_2eproto.base);
  return *internal_default_instance();
}


void RtnOrderMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:msg.rtn.RtnOrderMsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && order_ != nullptr) {
    delete order_;
  }
  order_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RtnOrderMsg::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .rtn.OrderField order = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_order(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* RtnOrderMsg::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:msg.rtn.RtnOrderMsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .rtn.OrderField order = 1;
  if (this->has_order()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::order(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:msg.rtn.RtnOrderMsg)
  return target;
}

size_t RtnOrderMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:msg.rtn.RtnOrderMsg)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .rtn.OrderField order = 1;
  if (this->has_order()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *order_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RtnOrderMsg::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:msg.rtn.RtnOrderMsg)
  GOOGLE_DCHECK_NE(&from, this);
  const RtnOrderMsg* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RtnOrderMsg>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:msg.rtn.RtnOrderMsg)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:msg.rtn.RtnOrderMsg)
    MergeFrom(*source);
  }
}

void RtnOrderMsg::MergeFrom(const RtnOrderMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:msg.rtn.RtnOrderMsg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_order()) {
    _internal_mutable_order()->::rtn::OrderField::MergeFrom(from._internal_order());
  }
}

void RtnOrderMsg::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:msg.rtn.RtnOrderMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RtnOrderMsg::CopyFrom(const RtnOrderMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:msg.rtn.RtnOrderMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RtnOrderMsg::IsInitialized() const {
  return true;
}

void RtnOrderMsg::InternalSwap(RtnOrderMsg* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(order_, other->order_);
}

::PROTOBUF_NAMESPACE_ID::Metadata RtnOrderMsg::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace rtn
}  // namespace msg
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::msg::rtn::RtnOrderMsg* Arena::CreateMaybeMessage< ::msg::rtn::RtnOrderMsg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::msg::rtn::RtnOrderMsg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>