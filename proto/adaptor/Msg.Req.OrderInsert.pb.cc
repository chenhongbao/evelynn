// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg.Req.OrderInsert.proto

#include "Msg.Req.OrderInsert.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_Req_2eInputOrder_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_InputOrderField_Req_2eInputOrder_2eproto;
namespace msg {
namespace req {
class ReqOrderInsertMsgDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ReqOrderInsertMsg> _instance;
} _ReqOrderInsertMsg_default_instance_;
}  // namespace req
}  // namespace msg
static void InitDefaultsscc_info_ReqOrderInsertMsg_Msg_2eReq_2eOrderInsert_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::msg::req::_ReqOrderInsertMsg_default_instance_;
    new (ptr) ::msg::req::ReqOrderInsertMsg();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::msg::req::ReqOrderInsertMsg::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ReqOrderInsertMsg_Msg_2eReq_2eOrderInsert_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_ReqOrderInsertMsg_Msg_2eReq_2eOrderInsert_2eproto}, {
      &scc_info_InputOrderField_Req_2eInputOrder_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Msg_2eReq_2eOrderInsert_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Msg_2eReq_2eOrderInsert_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Msg_2eReq_2eOrderInsert_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Msg_2eReq_2eOrderInsert_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::msg::req::ReqOrderInsertMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::msg::req::ReqOrderInsertMsg, input_order_),
  PROTOBUF_FIELD_OFFSET(::msg::req::ReqOrderInsertMsg, request_id_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::msg::req::ReqOrderInsertMsg)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::msg::req::_ReqOrderInsertMsg_default_instance_),
};

const char descriptor_table_protodef_Msg_2eReq_2eOrderInsert_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031Msg.Req.OrderInsert.proto\022\007msg.req\032\024Re"
  "q.InputOrder.proto\"R\n\021ReqOrderInsertMsg\022"
  ")\n\013input_order\030\001 \001(\0132\024.req.InputOrderFie"
  "ld\022\022\n\nrequest_id\030\002 \001(\005BD\n\025io.evelynn.bas"
  "e.protoB\026ReqOrderInsertMsgProto\252\002\022Evelyn"
  "n.Base.Protob\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Msg_2eReq_2eOrderInsert_2eproto_deps[1] = {
  &::descriptor_table_Req_2eInputOrder_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Msg_2eReq_2eOrderInsert_2eproto_sccs[1] = {
  &scc_info_ReqOrderInsertMsg_Msg_2eReq_2eOrderInsert_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Msg_2eReq_2eOrderInsert_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Msg_2eReq_2eOrderInsert_2eproto = {
  false, false, descriptor_table_protodef_Msg_2eReq_2eOrderInsert_2eproto, "Msg.Req.OrderInsert.proto", 220,
  &descriptor_table_Msg_2eReq_2eOrderInsert_2eproto_once, descriptor_table_Msg_2eReq_2eOrderInsert_2eproto_sccs, descriptor_table_Msg_2eReq_2eOrderInsert_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_Msg_2eReq_2eOrderInsert_2eproto::offsets,
  file_level_metadata_Msg_2eReq_2eOrderInsert_2eproto, 1, file_level_enum_descriptors_Msg_2eReq_2eOrderInsert_2eproto, file_level_service_descriptors_Msg_2eReq_2eOrderInsert_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Msg_2eReq_2eOrderInsert_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Msg_2eReq_2eOrderInsert_2eproto)), true);
namespace msg {
namespace req {

// ===================================================================

void ReqOrderInsertMsg::InitAsDefaultInstance() {
  ::msg::req::_ReqOrderInsertMsg_default_instance_._instance.get_mutable()->input_order_ = const_cast< ::req::InputOrderField*>(
      ::req::InputOrderField::internal_default_instance());
}
class ReqOrderInsertMsg::_Internal {
 public:
  static const ::req::InputOrderField& input_order(const ReqOrderInsertMsg* msg);
};

const ::req::InputOrderField&
ReqOrderInsertMsg::_Internal::input_order(const ReqOrderInsertMsg* msg) {
  return *msg->input_order_;
}
void ReqOrderInsertMsg::clear_input_order() {
  if (GetArena() == nullptr && input_order_ != nullptr) {
    delete input_order_;
  }
  input_order_ = nullptr;
}
ReqOrderInsertMsg::ReqOrderInsertMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:msg.req.ReqOrderInsertMsg)
}
ReqOrderInsertMsg::ReqOrderInsertMsg(const ReqOrderInsertMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_input_order()) {
    input_order_ = new ::req::InputOrderField(*from.input_order_);
  } else {
    input_order_ = nullptr;
  }
  request_id_ = from.request_id_;
  // @@protoc_insertion_point(copy_constructor:msg.req.ReqOrderInsertMsg)
}

void ReqOrderInsertMsg::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ReqOrderInsertMsg_Msg_2eReq_2eOrderInsert_2eproto.base);
  ::memset(&input_order_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&request_id_) -
      reinterpret_cast<char*>(&input_order_)) + sizeof(request_id_));
}

ReqOrderInsertMsg::~ReqOrderInsertMsg() {
  // @@protoc_insertion_point(destructor:msg.req.ReqOrderInsertMsg)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ReqOrderInsertMsg::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete input_order_;
}

void ReqOrderInsertMsg::ArenaDtor(void* object) {
  ReqOrderInsertMsg* _this = reinterpret_cast< ReqOrderInsertMsg* >(object);
  (void)_this;
}
void ReqOrderInsertMsg::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ReqOrderInsertMsg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ReqOrderInsertMsg& ReqOrderInsertMsg::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ReqOrderInsertMsg_Msg_2eReq_2eOrderInsert_2eproto.base);
  return *internal_default_instance();
}


void ReqOrderInsertMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:msg.req.ReqOrderInsertMsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && input_order_ != nullptr) {
    delete input_order_;
  }
  input_order_ = nullptr;
  request_id_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ReqOrderInsertMsg::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .req.InputOrderField input_order = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_input_order(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 request_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          request_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ReqOrderInsertMsg::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:msg.req.ReqOrderInsertMsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .req.InputOrderField input_order = 1;
  if (this->has_input_order()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::input_order(this), target, stream);
  }

  // int32 request_id = 2;
  if (this->request_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_request_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:msg.req.ReqOrderInsertMsg)
  return target;
}

size_t ReqOrderInsertMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:msg.req.ReqOrderInsertMsg)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .req.InputOrderField input_order = 1;
  if (this->has_input_order()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *input_order_);
  }

  // int32 request_id = 2;
  if (this->request_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_request_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ReqOrderInsertMsg::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:msg.req.ReqOrderInsertMsg)
  GOOGLE_DCHECK_NE(&from, this);
  const ReqOrderInsertMsg* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ReqOrderInsertMsg>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:msg.req.ReqOrderInsertMsg)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:msg.req.ReqOrderInsertMsg)
    MergeFrom(*source);
  }
}

void ReqOrderInsertMsg::MergeFrom(const ReqOrderInsertMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:msg.req.ReqOrderInsertMsg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_input_order()) {
    _internal_mutable_input_order()->::req::InputOrderField::MergeFrom(from._internal_input_order());
  }
  if (from.request_id() != 0) {
    _internal_set_request_id(from._internal_request_id());
  }
}

void ReqOrderInsertMsg::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:msg.req.ReqOrderInsertMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReqOrderInsertMsg::CopyFrom(const ReqOrderInsertMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:msg.req.ReqOrderInsertMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReqOrderInsertMsg::IsInitialized() const {
  return true;
}

void ReqOrderInsertMsg::InternalSwap(ReqOrderInsertMsg* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ReqOrderInsertMsg, request_id_)
      + sizeof(ReqOrderInsertMsg::request_id_)
      - PROTOBUF_FIELD_OFFSET(ReqOrderInsertMsg, input_order_)>(
          reinterpret_cast<char*>(&input_order_),
          reinterpret_cast<char*>(&other->input_order_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ReqOrderInsertMsg::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace req
}  // namespace msg
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::msg::req::ReqOrderInsertMsg* Arena::CreateMaybeMessage< ::msg::req::ReqOrderInsertMsg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::msg::req::ReqOrderInsertMsg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>