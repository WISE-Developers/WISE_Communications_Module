// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: manager_settings.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_manager_5fsettings_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_manager_5fsettings_2eproto

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
#include <google/protobuf/timestamp.pb.h>
#include <google/protobuf/wrappers.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_manager_5fsettings_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_manager_5fsettings_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_manager_5fsettings_2eproto;
namespace WISE {
namespace settings {
class ManagerSettings;
class ManagerSettingsDefaultTypeInternal;
extern ManagerSettingsDefaultTypeInternal _ManagerSettings_default_instance_;
}  // namespace settings
}  // namespace WISE
PROTOBUF_NAMESPACE_OPEN
template<> ::WISE::settings::ManagerSettings* Arena::CreateMaybeMessage<::WISE::settings::ManagerSettings>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace WISE {
namespace settings {

// ===================================================================

class ManagerSettings PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:WISE.settings.ManagerSettings) */ {
 public:
  inline ManagerSettings() : ManagerSettings(nullptr) {}
  virtual ~ManagerSettings();

  ManagerSettings(const ManagerSettings& from);
  ManagerSettings(ManagerSettings&& from) noexcept
    : ManagerSettings() {
    *this = ::std::move(from);
  }

  inline ManagerSettings& operator=(const ManagerSettings& from) {
    CopyFrom(from);
    return *this;
  }
  inline ManagerSettings& operator=(ManagerSettings&& from) noexcept {
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
  static const ManagerSettings& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ManagerSettings* internal_default_instance() {
    return reinterpret_cast<const ManagerSettings*>(
               &_ManagerSettings_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ManagerSettings& a, ManagerSettings& b) {
    a.Swap(&b);
  }
  inline void Swap(ManagerSettings* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ManagerSettings* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ManagerSettings* New() const final {
    return CreateMaybeMessage<ManagerSettings>(nullptr);
  }

  ManagerSettings* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ManagerSettings>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ManagerSettings& from);
  void MergeFrom(const ManagerSettings& from);
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
  void InternalSwap(ManagerSettings* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "WISE.settings.ManagerSettings";
  }
  protected:
  explicit ManagerSettings(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_manager_5fsettings_2eproto);
    return ::descriptor_table_manager_5fsettings_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kJobDirectoryFieldNumber = 3,
    kLastUpdateFieldNumber = 11,
  };
  // string jobDirectory = 3;
  void clear_jobdirectory();
  const std::string& jobdirectory() const;
  void set_jobdirectory(const std::string& value);
  void set_jobdirectory(std::string&& value);
  void set_jobdirectory(const char* value);
  void set_jobdirectory(const char* value, size_t size);
  std::string* mutable_jobdirectory();
  std::string* release_jobdirectory();
  void set_allocated_jobdirectory(std::string* jobdirectory);
  private:
  const std::string& _internal_jobdirectory() const;
  void _internal_set_jobdirectory(const std::string& value);
  std::string* _internal_mutable_jobdirectory();
  public:

  // .google.protobuf.Timestamp lastUpdate = 11;
  bool has_lastupdate() const;
  private:
  bool _internal_has_lastupdate() const;
  public:
  void clear_lastupdate();
  const PROTOBUF_NAMESPACE_ID::Timestamp& lastupdate() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_lastupdate();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_lastupdate();
  void set_allocated_lastupdate(PROTOBUF_NAMESPACE_ID::Timestamp* lastupdate);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_lastupdate() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_lastupdate();
  public:
  void unsafe_arena_set_allocated_lastupdate(
      PROTOBUF_NAMESPACE_ID::Timestamp* lastupdate);
  PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_lastupdate();

  // @@protoc_insertion_point(class_scope:WISE.settings.ManagerSettings)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr jobdirectory_;
  PROTOBUF_NAMESPACE_ID::Timestamp* lastupdate_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_manager_5fsettings_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ManagerSettings

// string jobDirectory = 3;
inline void ManagerSettings::clear_jobdirectory() {
  jobdirectory_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ManagerSettings::jobdirectory() const {
  // @@protoc_insertion_point(field_get:WISE.settings.ManagerSettings.jobDirectory)
  return _internal_jobdirectory();
}
inline void ManagerSettings::set_jobdirectory(const std::string& value) {
  _internal_set_jobdirectory(value);
  // @@protoc_insertion_point(field_set:WISE.settings.ManagerSettings.jobDirectory)
}
inline std::string* ManagerSettings::mutable_jobdirectory() {
  // @@protoc_insertion_point(field_mutable:WISE.settings.ManagerSettings.jobDirectory)
  return _internal_mutable_jobdirectory();
}
inline const std::string& ManagerSettings::_internal_jobdirectory() const {
  return jobdirectory_.Get();
}
inline void ManagerSettings::_internal_set_jobdirectory(const std::string& value) {
  
  jobdirectory_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ManagerSettings::set_jobdirectory(std::string&& value) {
  
  jobdirectory_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:WISE.settings.ManagerSettings.jobDirectory)
}
inline void ManagerSettings::set_jobdirectory(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  jobdirectory_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:WISE.settings.ManagerSettings.jobDirectory)
}
inline void ManagerSettings::set_jobdirectory(const char* value,
    size_t size) {
  
  jobdirectory_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:WISE.settings.ManagerSettings.jobDirectory)
}
inline std::string* ManagerSettings::_internal_mutable_jobdirectory() {
  
  return jobdirectory_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ManagerSettings::release_jobdirectory() {
  // @@protoc_insertion_point(field_release:WISE.settings.ManagerSettings.jobDirectory)
  return jobdirectory_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ManagerSettings::set_allocated_jobdirectory(std::string* jobdirectory) {
  if (jobdirectory != nullptr) {
    
  } else {
    
  }
  jobdirectory_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), jobdirectory,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:WISE.settings.ManagerSettings.jobDirectory)
}

// .google.protobuf.Timestamp lastUpdate = 11;
inline bool ManagerSettings::_internal_has_lastupdate() const {
  return this != internal_default_instance() && lastupdate_ != nullptr;
}
inline bool ManagerSettings::has_lastupdate() const {
  return _internal_has_lastupdate();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& ManagerSettings::_internal_lastupdate() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = lastupdate_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp*>(
      &PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& ManagerSettings::lastupdate() const {
  // @@protoc_insertion_point(field_get:WISE.settings.ManagerSettings.lastUpdate)
  return _internal_lastupdate();
}
inline void ManagerSettings::unsafe_arena_set_allocated_lastupdate(
    PROTOBUF_NAMESPACE_ID::Timestamp* lastupdate) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(lastupdate_);
  }
  lastupdate_ = lastupdate;
  if (lastupdate) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:WISE.settings.ManagerSettings.lastUpdate)
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* ManagerSettings::release_lastupdate() {
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = lastupdate_;
  lastupdate_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* ManagerSettings::unsafe_arena_release_lastupdate() {
  // @@protoc_insertion_point(field_release:WISE.settings.ManagerSettings.lastUpdate)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = lastupdate_;
  lastupdate_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* ManagerSettings::_internal_mutable_lastupdate() {
  
  if (lastupdate_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArena());
    lastupdate_ = p;
  }
  return lastupdate_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* ManagerSettings::mutable_lastupdate() {
  // @@protoc_insertion_point(field_mutable:WISE.settings.ManagerSettings.lastUpdate)
  return _internal_mutable_lastupdate();
}
inline void ManagerSettings::set_allocated_lastupdate(PROTOBUF_NAMESPACE_ID::Timestamp* lastupdate) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(lastupdate_);
  }
  if (lastupdate) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(lastupdate)->GetArena();
    if (message_arena != submessage_arena) {
      lastupdate = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, lastupdate, submessage_arena);
    }
    
  } else {
    
  }
  lastupdate_ = lastupdate;
  // @@protoc_insertion_point(field_set_allocated:WISE.settings.ManagerSettings.lastUpdate)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace settings
}  // namespace WISE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_manager_5fsettings_2eproto
