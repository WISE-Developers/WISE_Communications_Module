// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: manager_settings.proto

#include "manager_settings.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2ftimestamp_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto;
namespace WISE {
namespace settings {
class ManagerSettingsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ManagerSettings> _instance;
} _ManagerSettings_default_instance_;
}  // namespace settings
}  // namespace WISE
static void InitDefaultsscc_info_ManagerSettings_manager_5fsettings_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::WISE::settings::_ManagerSettings_default_instance_;
    new (ptr) ::WISE::settings::ManagerSettings();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::WISE::settings::ManagerSettings::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ManagerSettings_manager_5fsettings_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_ManagerSettings_manager_5fsettings_2eproto}, {
      &scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_manager_5fsettings_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_manager_5fsettings_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_manager_5fsettings_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_manager_5fsettings_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::WISE::settings::ManagerSettings, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::WISE::settings::ManagerSettings, jobdirectory_),
  PROTOBUF_FIELD_OFFSET(::WISE::settings::ManagerSettings, lastupdate_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::WISE::settings::ManagerSettings)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::WISE::settings::_ManagerSettings_default_instance_),
};

const char descriptor_table_protodef_manager_5fsettings_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026manager_settings.proto\022\rWISE.settings\032"
  "\037google/protobuf/timestamp.proto\032\036google"
  "/protobuf/wrappers.proto\"W\n\017ManagerSetti"
  "ngs\022\024\n\014jobDirectory\030\003 \001(\t\022.\n\nlastUpdate\030"
  "\013 \001(\0132\032.google.protobuf.TimestampB\032\n\026ca."
  "wise.settings.protoP\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_manager_5fsettings_2eproto_deps[2] = {
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
  &::descriptor_table_google_2fprotobuf_2fwrappers_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_manager_5fsettings_2eproto_sccs[1] = {
  &scc_info_ManagerSettings_manager_5fsettings_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_manager_5fsettings_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_manager_5fsettings_2eproto = {
  false, false, descriptor_table_protodef_manager_5fsettings_2eproto, "manager_settings.proto", 229,
  &descriptor_table_manager_5fsettings_2eproto_once, descriptor_table_manager_5fsettings_2eproto_sccs, descriptor_table_manager_5fsettings_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_manager_5fsettings_2eproto::offsets,
  file_level_metadata_manager_5fsettings_2eproto, 1, file_level_enum_descriptors_manager_5fsettings_2eproto, file_level_service_descriptors_manager_5fsettings_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_manager_5fsettings_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_manager_5fsettings_2eproto)), true);
namespace WISE {
namespace settings {

// ===================================================================

void ManagerSettings::InitAsDefaultInstance() {
  ::WISE::settings::_ManagerSettings_default_instance_._instance.get_mutable()->lastupdate_ = const_cast< PROTOBUF_NAMESPACE_ID::Timestamp*>(
      PROTOBUF_NAMESPACE_ID::Timestamp::internal_default_instance());
}
class ManagerSettings::_Internal {
 public:
  static const PROTOBUF_NAMESPACE_ID::Timestamp& lastupdate(const ManagerSettings* msg);
};

const PROTOBUF_NAMESPACE_ID::Timestamp&
ManagerSettings::_Internal::lastupdate(const ManagerSettings* msg) {
  return *msg->lastupdate_;
}
void ManagerSettings::clear_lastupdate() {
  if (GetArena() == nullptr && lastupdate_ != nullptr) {
    delete lastupdate_;
  }
  lastupdate_ = nullptr;
}
ManagerSettings::ManagerSettings(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:WISE.settings.ManagerSettings)
}
ManagerSettings::ManagerSettings(const ManagerSettings& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  jobdirectory_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_jobdirectory().empty()) {
    jobdirectory_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_jobdirectory(),
      GetArena());
  }
  if (from._internal_has_lastupdate()) {
    lastupdate_ = new PROTOBUF_NAMESPACE_ID::Timestamp(*from.lastupdate_);
  } else {
    lastupdate_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:WISE.settings.ManagerSettings)
}

void ManagerSettings::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ManagerSettings_manager_5fsettings_2eproto.base);
  jobdirectory_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  lastupdate_ = nullptr;
}

ManagerSettings::~ManagerSettings() {
  // @@protoc_insertion_point(destructor:WISE.settings.ManagerSettings)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ManagerSettings::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  jobdirectory_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete lastupdate_;
}

void ManagerSettings::ArenaDtor(void* object) {
  ManagerSettings* _this = reinterpret_cast< ManagerSettings* >(object);
  (void)_this;
}
void ManagerSettings::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ManagerSettings::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ManagerSettings& ManagerSettings::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ManagerSettings_manager_5fsettings_2eproto.base);
  return *internal_default_instance();
}


void ManagerSettings::Clear() {
// @@protoc_insertion_point(message_clear_start:WISE.settings.ManagerSettings)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  jobdirectory_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  if (GetArena() == nullptr && lastupdate_ != nullptr) {
    delete lastupdate_;
  }
  lastupdate_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ManagerSettings::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string jobDirectory = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_jobdirectory();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "WISE.settings.ManagerSettings.jobDirectory"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp lastUpdate = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          ptr = ctx->ParseMessage(_internal_mutable_lastupdate(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ManagerSettings::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:WISE.settings.ManagerSettings)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string jobDirectory = 3;
  if (this->jobdirectory().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_jobdirectory().data(), static_cast<int>(this->_internal_jobdirectory().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "WISE.settings.ManagerSettings.jobDirectory");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_jobdirectory(), target);
  }

  // .google.protobuf.Timestamp lastUpdate = 11;
  if (this->has_lastupdate()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        11, _Internal::lastupdate(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:WISE.settings.ManagerSettings)
  return target;
}

size_t ManagerSettings::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:WISE.settings.ManagerSettings)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string jobDirectory = 3;
  if (this->jobdirectory().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_jobdirectory());
  }

  // .google.protobuf.Timestamp lastUpdate = 11;
  if (this->has_lastupdate()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *lastupdate_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ManagerSettings::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:WISE.settings.ManagerSettings)
  GOOGLE_DCHECK_NE(&from, this);
  const ManagerSettings* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ManagerSettings>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:WISE.settings.ManagerSettings)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:WISE.settings.ManagerSettings)
    MergeFrom(*source);
  }
}

void ManagerSettings::MergeFrom(const ManagerSettings& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:WISE.settings.ManagerSettings)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.jobdirectory().size() > 0) {
    _internal_set_jobdirectory(from._internal_jobdirectory());
  }
  if (from.has_lastupdate()) {
    _internal_mutable_lastupdate()->PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_lastupdate());
  }
}

void ManagerSettings::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:WISE.settings.ManagerSettings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ManagerSettings::CopyFrom(const ManagerSettings& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:WISE.settings.ManagerSettings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ManagerSettings::IsInitialized() const {
  return true;
}

void ManagerSettings::InternalSwap(ManagerSettings* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  jobdirectory_.Swap(&other->jobdirectory_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(lastupdate_, other->lastupdate_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ManagerSettings::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace settings
}  // namespace WISE
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::WISE::settings::ManagerSettings* Arena::CreateMaybeMessage< ::WISE::settings::ManagerSettings >(Arena* arena) {
  return Arena::CreateMessageInternal< ::WISE::settings::ManagerSettings >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
