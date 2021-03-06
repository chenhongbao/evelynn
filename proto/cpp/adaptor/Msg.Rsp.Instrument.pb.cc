// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg.Rsp.Instrument.proto

#include "Msg.Rsp.Instrument.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_Rsp_2eError_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ErrorField_Rsp_2eError_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_Rsp_2eInstrument_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_InstrumentField_Rsp_2eInstrument_2eproto;
namespace msg {
namespace rsp {
class RspInstrumentMsgDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<RspInstrumentMsg> _instance;
} _RspInstrumentMsg_default_instance_;
}  // namespace rsp
}  // namespace msg
static void InitDefaultsscc_info_RspInstrumentMsg_Msg_2eRsp_2eInstrument_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::msg::rsp::_RspInstrumentMsg_default_instance_;
    new (ptr) ::msg::rsp::RspInstrumentMsg();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::msg::rsp::RspInstrumentMsg::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_RspInstrumentMsg_Msg_2eRsp_2eInstrument_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_RspInstrumentMsg_Msg_2eRsp_2eInstrument_2eproto}, {
      &scc_info_InstrumentField_Rsp_2eInstrument_2eproto.base,
      &scc_info_ErrorField_Rsp_2eError_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Msg_2eRsp_2eInstrument_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Msg_2eRsp_2eInstrument_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Msg_2eRsp_2eInstrument_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Msg_2eRsp_2eInstrument_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::msg::rsp::RspInstrumentMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::msg::rsp::RspInstrumentMsg, instrument_),
  PROTOBUF_FIELD_OFFSET(::msg::rsp::RspInstrumentMsg, error_),
  PROTOBUF_FIELD_OFFSET(::msg::rsp::RspInstrumentMsg, request_id_),
  PROTOBUF_FIELD_OFFSET(::msg::rsp::RspInstrumentMsg, is_last_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::msg::rsp::RspInstrumentMsg)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::msg::rsp::_RspInstrumentMsg_default_instance_),
};

const char descriptor_table_protodef_Msg_2eRsp_2eInstrument_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030Msg.Rsp.Instrument.proto\022\007msg.rsp\032\024Rsp"
  ".Instrument.proto\032\017Rsp.Error.proto\"\201\001\n\020R"
  "spInstrumentMsg\022(\n\ninstrument\030\001 \001(\0132\024.rs"
  "p.InstrumentField\022\036\n\005error\030\002 \001(\0132\017.rsp.E"
  "rrorField\022\022\n\nrequest_id\030\003 \001(\005\022\017\n\007is_last"
  "\030\004 \001(\010BC\n\025io.evelynn.base.protoB\025RspInst"
  "rumentMsgProto\252\002\022Evelynn.Base.Protob\006pro"
  "to3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Msg_2eRsp_2eInstrument_2eproto_deps[2] = {
  &::descriptor_table_Rsp_2eError_2eproto,
  &::descriptor_table_Rsp_2eInstrument_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Msg_2eRsp_2eInstrument_2eproto_sccs[1] = {
  &scc_info_RspInstrumentMsg_Msg_2eRsp_2eInstrument_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Msg_2eRsp_2eInstrument_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Msg_2eRsp_2eInstrument_2eproto = {
  false, false, descriptor_table_protodef_Msg_2eRsp_2eInstrument_2eproto, "Msg.Rsp.Instrument.proto", 283,
  &descriptor_table_Msg_2eRsp_2eInstrument_2eproto_once, descriptor_table_Msg_2eRsp_2eInstrument_2eproto_sccs, descriptor_table_Msg_2eRsp_2eInstrument_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_Msg_2eRsp_2eInstrument_2eproto::offsets,
  file_level_metadata_Msg_2eRsp_2eInstrument_2eproto, 1, file_level_enum_descriptors_Msg_2eRsp_2eInstrument_2eproto, file_level_service_descriptors_Msg_2eRsp_2eInstrument_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Msg_2eRsp_2eInstrument_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Msg_2eRsp_2eInstrument_2eproto)), true);
namespace msg {
namespace rsp {

// ===================================================================

void RspInstrumentMsg::InitAsDefaultInstance() {
  ::msg::rsp::_RspInstrumentMsg_default_instance_._instance.get_mutable()->instrument_ = const_cast< ::rsp::InstrumentField*>(
      ::rsp::InstrumentField::internal_default_instance());
  ::msg::rsp::_RspInstrumentMsg_default_instance_._instance.get_mutable()->error_ = const_cast< ::rsp::ErrorField*>(
      ::rsp::ErrorField::internal_default_instance());
}
class RspInstrumentMsg::_Internal {
 public:
  static const ::rsp::InstrumentField& instrument(const RspInstrumentMsg* msg);
  static const ::rsp::ErrorField& error(const RspInstrumentMsg* msg);
};

const ::rsp::InstrumentField&
RspInstrumentMsg::_Internal::instrument(const RspInstrumentMsg* msg) {
  return *msg->instrument_;
}
const ::rsp::ErrorField&
RspInstrumentMsg::_Internal::error(const RspInstrumentMsg* msg) {
  return *msg->error_;
}
void RspInstrumentMsg::clear_instrument() {
  if (GetArena() == nullptr && instrument_ != nullptr) {
    delete instrument_;
  }
  instrument_ = nullptr;
}
void RspInstrumentMsg::clear_error() {
  if (GetArena() == nullptr && error_ != nullptr) {
    delete error_;
  }
  error_ = nullptr;
}
RspInstrumentMsg::RspInstrumentMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:msg.rsp.RspInstrumentMsg)
}
RspInstrumentMsg::RspInstrumentMsg(const RspInstrumentMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_instrument()) {
    instrument_ = new ::rsp::InstrumentField(*from.instrument_);
  } else {
    instrument_ = nullptr;
  }
  if (from._internal_has_error()) {
    error_ = new ::rsp::ErrorField(*from.error_);
  } else {
    error_ = nullptr;
  }
  ::memcpy(&request_id_, &from.request_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&is_last_) -
    reinterpret_cast<char*>(&request_id_)) + sizeof(is_last_));
  // @@protoc_insertion_point(copy_constructor:msg.rsp.RspInstrumentMsg)
}

void RspInstrumentMsg::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_RspInstrumentMsg_Msg_2eRsp_2eInstrument_2eproto.base);
  ::memset(&instrument_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&is_last_) -
      reinterpret_cast<char*>(&instrument_)) + sizeof(is_last_));
}

RspInstrumentMsg::~RspInstrumentMsg() {
  // @@protoc_insertion_point(destructor:msg.rsp.RspInstrumentMsg)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void RspInstrumentMsg::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete instrument_;
  if (this != internal_default_instance()) delete error_;
}

void RspInstrumentMsg::ArenaDtor(void* object) {
  RspInstrumentMsg* _this = reinterpret_cast< RspInstrumentMsg* >(object);
  (void)_this;
}
void RspInstrumentMsg::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RspInstrumentMsg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RspInstrumentMsg& RspInstrumentMsg::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_RspInstrumentMsg_Msg_2eRsp_2eInstrument_2eproto.base);
  return *internal_default_instance();
}


void RspInstrumentMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:msg.rsp.RspInstrumentMsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && instrument_ != nullptr) {
    delete instrument_;
  }
  instrument_ = nullptr;
  if (GetArena() == nullptr && error_ != nullptr) {
    delete error_;
  }
  error_ = nullptr;
  ::memset(&request_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&is_last_) -
      reinterpret_cast<char*>(&request_id_)) + sizeof(is_last_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RspInstrumentMsg::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .rsp.InstrumentField instrument = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_instrument(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .rsp.ErrorField error = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_error(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 request_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          request_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool is_last = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          is_last_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* RspInstrumentMsg::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:msg.rsp.RspInstrumentMsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .rsp.InstrumentField instrument = 1;
  if (this->has_instrument()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::instrument(this), target, stream);
  }

  // .rsp.ErrorField error = 2;
  if (this->has_error()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::error(this), target, stream);
  }

  // int32 request_id = 3;
  if (this->request_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_request_id(), target);
  }

  // bool is_last = 4;
  if (this->is_last() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->_internal_is_last(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:msg.rsp.RspInstrumentMsg)
  return target;
}

size_t RspInstrumentMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:msg.rsp.RspInstrumentMsg)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .rsp.InstrumentField instrument = 1;
  if (this->has_instrument()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *instrument_);
  }

  // .rsp.ErrorField error = 2;
  if (this->has_error()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *error_);
  }

  // int32 request_id = 3;
  if (this->request_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_request_id());
  }

  // bool is_last = 4;
  if (this->is_last() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RspInstrumentMsg::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:msg.rsp.RspInstrumentMsg)
  GOOGLE_DCHECK_NE(&from, this);
  const RspInstrumentMsg* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RspInstrumentMsg>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:msg.rsp.RspInstrumentMsg)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:msg.rsp.RspInstrumentMsg)
    MergeFrom(*source);
  }
}

void RspInstrumentMsg::MergeFrom(const RspInstrumentMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:msg.rsp.RspInstrumentMsg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_instrument()) {
    _internal_mutable_instrument()->::rsp::InstrumentField::MergeFrom(from._internal_instrument());
  }
  if (from.has_error()) {
    _internal_mutable_error()->::rsp::ErrorField::MergeFrom(from._internal_error());
  }
  if (from.request_id() != 0) {
    _internal_set_request_id(from._internal_request_id());
  }
  if (from.is_last() != 0) {
    _internal_set_is_last(from._internal_is_last());
  }
}

void RspInstrumentMsg::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:msg.rsp.RspInstrumentMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RspInstrumentMsg::CopyFrom(const RspInstrumentMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:msg.rsp.RspInstrumentMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RspInstrumentMsg::IsInitialized() const {
  return true;
}

void RspInstrumentMsg::InternalSwap(RspInstrumentMsg* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RspInstrumentMsg, is_last_)
      + sizeof(RspInstrumentMsg::is_last_)
      - PROTOBUF_FIELD_OFFSET(RspInstrumentMsg, instrument_)>(
          reinterpret_cast<char*>(&instrument_),
          reinterpret_cast<char*>(&other->instrument_));
}

::PROTOBUF_NAMESPACE_ID::Metadata RspInstrumentMsg::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace rsp
}  // namespace msg
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::msg::rsp::RspInstrumentMsg* Arena::CreateMaybeMessage< ::msg::rsp::RspInstrumentMsg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::msg::rsp::RspInstrumentMsg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
