// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Qry.Instrument.proto

#include "Qry.Instrument.pb.h"

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
namespace qry {
class QryInstrumentFieldDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<QryInstrumentField> _instance;
} _QryInstrumentField_default_instance_;
}  // namespace qry
static void InitDefaultsscc_info_QryInstrumentField_Qry_2eInstrument_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::qry::_QryInstrumentField_default_instance_;
    new (ptr) ::qry::QryInstrumentField();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::qry::QryInstrumentField::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_QryInstrumentField_Qry_2eInstrument_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_QryInstrumentField_Qry_2eInstrument_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Qry_2eInstrument_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Qry_2eInstrument_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Qry_2eInstrument_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Qry_2eInstrument_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::qry::QryInstrumentField, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::qry::QryInstrumentField, instrument_id_),
  PROTOBUF_FIELD_OFFSET(::qry::QryInstrumentField, exchange_id_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::qry::QryInstrumentField)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::qry::_QryInstrumentField_default_instance_),
};

const char descriptor_table_protodef_Qry_2eInstrument_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024Qry.Instrument.proto\022\003qry\"@\n\022QryInstru"
  "mentField\022\025\n\rinstrument_id\030\001 \001(\t\022\023\n\013exch"
  "ange_id\030\002 \001(\tBE\n\025io.evelynn.base.protoB\027"
  "QryInstrumentFieldProto\252\002\022Evelynn.Base.P"
  "rotob\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Qry_2eInstrument_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Qry_2eInstrument_2eproto_sccs[1] = {
  &scc_info_QryInstrumentField_Qry_2eInstrument_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Qry_2eInstrument_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Qry_2eInstrument_2eproto = {
  false, false, descriptor_table_protodef_Qry_2eInstrument_2eproto, "Qry.Instrument.proto", 172,
  &descriptor_table_Qry_2eInstrument_2eproto_once, descriptor_table_Qry_2eInstrument_2eproto_sccs, descriptor_table_Qry_2eInstrument_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_Qry_2eInstrument_2eproto::offsets,
  file_level_metadata_Qry_2eInstrument_2eproto, 1, file_level_enum_descriptors_Qry_2eInstrument_2eproto, file_level_service_descriptors_Qry_2eInstrument_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Qry_2eInstrument_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Qry_2eInstrument_2eproto)), true);
namespace qry {

// ===================================================================

void QryInstrumentField::InitAsDefaultInstance() {
}
class QryInstrumentField::_Internal {
 public:
};

QryInstrumentField::QryInstrumentField(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:qry.QryInstrumentField)
}
QryInstrumentField::QryInstrumentField(const QryInstrumentField& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  instrument_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_instrument_id().empty()) {
    instrument_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_instrument_id(),
      GetArena());
  }
  exchange_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_exchange_id().empty()) {
    exchange_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_exchange_id(),
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:qry.QryInstrumentField)
}

void QryInstrumentField::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_QryInstrumentField_Qry_2eInstrument_2eproto.base);
  instrument_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  exchange_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

QryInstrumentField::~QryInstrumentField() {
  // @@protoc_insertion_point(destructor:qry.QryInstrumentField)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void QryInstrumentField::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  instrument_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  exchange_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void QryInstrumentField::ArenaDtor(void* object) {
  QryInstrumentField* _this = reinterpret_cast< QryInstrumentField* >(object);
  (void)_this;
}
void QryInstrumentField::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void QryInstrumentField::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const QryInstrumentField& QryInstrumentField::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_QryInstrumentField_Qry_2eInstrument_2eproto.base);
  return *internal_default_instance();
}


void QryInstrumentField::Clear() {
// @@protoc_insertion_point(message_clear_start:qry.QryInstrumentField)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  instrument_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  exchange_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* QryInstrumentField::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string instrument_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_instrument_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "qry.QryInstrumentField.instrument_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string exchange_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_exchange_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "qry.QryInstrumentField.exchange_id"));
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

::PROTOBUF_NAMESPACE_ID::uint8* QryInstrumentField::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:qry.QryInstrumentField)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string instrument_id = 1;
  if (this->instrument_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_instrument_id().data(), static_cast<int>(this->_internal_instrument_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "qry.QryInstrumentField.instrument_id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_instrument_id(), target);
  }

  // string exchange_id = 2;
  if (this->exchange_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_exchange_id().data(), static_cast<int>(this->_internal_exchange_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "qry.QryInstrumentField.exchange_id");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_exchange_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:qry.QryInstrumentField)
  return target;
}

size_t QryInstrumentField::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:qry.QryInstrumentField)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string instrument_id = 1;
  if (this->instrument_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_instrument_id());
  }

  // string exchange_id = 2;
  if (this->exchange_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_exchange_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void QryInstrumentField::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:qry.QryInstrumentField)
  GOOGLE_DCHECK_NE(&from, this);
  const QryInstrumentField* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<QryInstrumentField>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:qry.QryInstrumentField)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:qry.QryInstrumentField)
    MergeFrom(*source);
  }
}

void QryInstrumentField::MergeFrom(const QryInstrumentField& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:qry.QryInstrumentField)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.instrument_id().size() > 0) {
    _internal_set_instrument_id(from._internal_instrument_id());
  }
  if (from.exchange_id().size() > 0) {
    _internal_set_exchange_id(from._internal_exchange_id());
  }
}

void QryInstrumentField::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:qry.QryInstrumentField)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QryInstrumentField::CopyFrom(const QryInstrumentField& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:qry.QryInstrumentField)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QryInstrumentField::IsInitialized() const {
  return true;
}

void QryInstrumentField::InternalSwap(QryInstrumentField* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  instrument_id_.Swap(&other->instrument_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  exchange_id_.Swap(&other->exchange_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata QryInstrumentField::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace qry
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::qry::QryInstrumentField* Arena::CreateMaybeMessage< ::qry::QryInstrumentField >(Arena* arena) {
  return Arena::CreateMessageInternal< ::qry::QryInstrumentField >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
