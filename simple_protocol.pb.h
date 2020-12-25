// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: simple_protocol.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_simple_5fprotocol_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_simple_5fprotocol_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_simple_5fprotocol_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_simple_5fprotocol_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_simple_5fprotocol_2eproto;
namespace SimpleProtocol {
class SlpMessage;
class SlpMessageDefaultTypeInternal;
extern SlpMessageDefaultTypeInternal _SlpMessage_default_instance_;
}  // namespace SimpleProtocol
PROTOBUF_NAMESPACE_OPEN
template<> ::SimpleProtocol::SlpMessage* Arena::CreateMaybeMessage<::SimpleProtocol::SlpMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace SimpleProtocol {

enum SlpMessage_PacketTypes : int {
  SlpMessage_PacketTypes_type_one = 0,
  SlpMessage_PacketTypes_type_two = 1,
  SlpMessage_PacketTypes_SlpMessage_PacketTypes_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  SlpMessage_PacketTypes_SlpMessage_PacketTypes_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool SlpMessage_PacketTypes_IsValid(int value);
constexpr SlpMessage_PacketTypes SlpMessage_PacketTypes_PacketTypes_MIN = SlpMessage_PacketTypes_type_one;
constexpr SlpMessage_PacketTypes SlpMessage_PacketTypes_PacketTypes_MAX = SlpMessage_PacketTypes_type_two;
constexpr int SlpMessage_PacketTypes_PacketTypes_ARRAYSIZE = SlpMessage_PacketTypes_PacketTypes_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SlpMessage_PacketTypes_descriptor();
template<typename T>
inline const std::string& SlpMessage_PacketTypes_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SlpMessage_PacketTypes>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SlpMessage_PacketTypes_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SlpMessage_PacketTypes_descriptor(), enum_t_value);
}
inline bool SlpMessage_PacketTypes_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, SlpMessage_PacketTypes* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SlpMessage_PacketTypes>(
    SlpMessage_PacketTypes_descriptor(), name, value);
}
enum SimpleProtocolVersion : int {
  v1_0_0 = 0,
  SimpleProtocolVersion_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  SimpleProtocolVersion_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool SimpleProtocolVersion_IsValid(int value);
constexpr SimpleProtocolVersion SimpleProtocolVersion_MIN = v1_0_0;
constexpr SimpleProtocolVersion SimpleProtocolVersion_MAX = v1_0_0;
constexpr int SimpleProtocolVersion_ARRAYSIZE = SimpleProtocolVersion_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SimpleProtocolVersion_descriptor();
template<typename T>
inline const std::string& SimpleProtocolVersion_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SimpleProtocolVersion>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SimpleProtocolVersion_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SimpleProtocolVersion_descriptor(), enum_t_value);
}
inline bool SimpleProtocolVersion_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, SimpleProtocolVersion* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SimpleProtocolVersion>(
    SimpleProtocolVersion_descriptor(), name, value);
}
// ===================================================================

class SlpMessage PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SimpleProtocol.SlpMessage) */ {
 public:
  inline SlpMessage() : SlpMessage(nullptr) {}
  virtual ~SlpMessage();

  SlpMessage(const SlpMessage& from);
  SlpMessage(SlpMessage&& from) noexcept
    : SlpMessage() {
    *this = ::std::move(from);
  }

  inline SlpMessage& operator=(const SlpMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline SlpMessage& operator=(SlpMessage&& from) noexcept {
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
  static const SlpMessage& default_instance();

  static inline const SlpMessage* internal_default_instance() {
    return reinterpret_cast<const SlpMessage*>(
               &_SlpMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SlpMessage& a, SlpMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(SlpMessage* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SlpMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SlpMessage* New() const final {
    return CreateMaybeMessage<SlpMessage>(nullptr);
  }

  SlpMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SlpMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SlpMessage& from);
  void MergeFrom(const SlpMessage& from);
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
  void InternalSwap(SlpMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SimpleProtocol.SlpMessage";
  }
  protected:
  explicit SlpMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_simple_5fprotocol_2eproto);
    return ::descriptor_table_simple_5fprotocol_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef SlpMessage_PacketTypes PacketTypes;
  static constexpr PacketTypes type_one =
    SlpMessage_PacketTypes_type_one;
  static constexpr PacketTypes type_two =
    SlpMessage_PacketTypes_type_two;
  static inline bool PacketTypes_IsValid(int value) {
    return SlpMessage_PacketTypes_IsValid(value);
  }
  static constexpr PacketTypes PacketTypes_MIN =
    SlpMessage_PacketTypes_PacketTypes_MIN;
  static constexpr PacketTypes PacketTypes_MAX =
    SlpMessage_PacketTypes_PacketTypes_MAX;
  static constexpr int PacketTypes_ARRAYSIZE =
    SlpMessage_PacketTypes_PacketTypes_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  PacketTypes_descriptor() {
    return SlpMessage_PacketTypes_descriptor();
  }
  template<typename T>
  static inline const std::string& PacketTypes_Name(T enum_t_value) {
    static_assert(::std::is_same<T, PacketTypes>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function PacketTypes_Name.");
    return SlpMessage_PacketTypes_Name(enum_t_value);
  }
  static inline bool PacketTypes_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      PacketTypes* value) {
    return SlpMessage_PacketTypes_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 3,
    kPackageTypeFieldNumber = 1,
    kPackageIdFieldNumber = 2,
  };
  // bytes data = 3;
  void clear_data();
  const std::string& data() const;
  void set_data(const std::string& value);
  void set_data(std::string&& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  std::string* mutable_data();
  std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // .SimpleProtocol.SlpMessage.PacketTypes package_type = 1;
  void clear_package_type();
  ::SimpleProtocol::SlpMessage_PacketTypes package_type() const;
  void set_package_type(::SimpleProtocol::SlpMessage_PacketTypes value);
  private:
  ::SimpleProtocol::SlpMessage_PacketTypes _internal_package_type() const;
  void _internal_set_package_type(::SimpleProtocol::SlpMessage_PacketTypes value);
  public:

  // uint32 package_id = 2;
  void clear_package_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 package_id() const;
  void set_package_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_package_id() const;
  void _internal_set_package_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:SimpleProtocol.SlpMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  int package_type_;
  ::PROTOBUF_NAMESPACE_ID::uint32 package_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_simple_5fprotocol_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SlpMessage

// .SimpleProtocol.SlpMessage.PacketTypes package_type = 1;
inline void SlpMessage::clear_package_type() {
  package_type_ = 0;
}
inline ::SimpleProtocol::SlpMessage_PacketTypes SlpMessage::_internal_package_type() const {
  return static_cast< ::SimpleProtocol::SlpMessage_PacketTypes >(package_type_);
}
inline ::SimpleProtocol::SlpMessage_PacketTypes SlpMessage::package_type() const {
  // @@protoc_insertion_point(field_get:SimpleProtocol.SlpMessage.package_type)
  return _internal_package_type();
}
inline void SlpMessage::_internal_set_package_type(::SimpleProtocol::SlpMessage_PacketTypes value) {
  
  package_type_ = value;
}
inline void SlpMessage::set_package_type(::SimpleProtocol::SlpMessage_PacketTypes value) {
  _internal_set_package_type(value);
  // @@protoc_insertion_point(field_set:SimpleProtocol.SlpMessage.package_type)
}

// uint32 package_id = 2;
inline void SlpMessage::clear_package_id() {
  package_id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SlpMessage::_internal_package_id() const {
  return package_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SlpMessage::package_id() const {
  // @@protoc_insertion_point(field_get:SimpleProtocol.SlpMessage.package_id)
  return _internal_package_id();
}
inline void SlpMessage::_internal_set_package_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  package_id_ = value;
}
inline void SlpMessage::set_package_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_package_id(value);
  // @@protoc_insertion_point(field_set:SimpleProtocol.SlpMessage.package_id)
}

// bytes data = 3;
inline void SlpMessage::clear_data() {
  data_.ClearToEmpty();
}
inline const std::string& SlpMessage::data() const {
  // @@protoc_insertion_point(field_get:SimpleProtocol.SlpMessage.data)
  return _internal_data();
}
inline void SlpMessage::set_data(const std::string& value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:SimpleProtocol.SlpMessage.data)
}
inline std::string* SlpMessage::mutable_data() {
  // @@protoc_insertion_point(field_mutable:SimpleProtocol.SlpMessage.data)
  return _internal_mutable_data();
}
inline const std::string& SlpMessage::_internal_data() const {
  return data_.Get();
}
inline void SlpMessage::_internal_set_data(const std::string& value) {
  
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void SlpMessage::set_data(std::string&& value) {
  
  data_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:SimpleProtocol.SlpMessage.data)
}
inline void SlpMessage::set_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:SimpleProtocol.SlpMessage.data)
}
inline void SlpMessage::set_data(const void* value,
    size_t size) {
  
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:SimpleProtocol.SlpMessage.data)
}
inline std::string* SlpMessage::_internal_mutable_data() {
  
  return data_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* SlpMessage::release_data() {
  // @@protoc_insertion_point(field_release:SimpleProtocol.SlpMessage.data)
  return data_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SlpMessage::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    
  } else {
    
  }
  data_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:SimpleProtocol.SlpMessage.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace SimpleProtocol

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::SimpleProtocol::SlpMessage_PacketTypes> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SimpleProtocol::SlpMessage_PacketTypes>() {
  return ::SimpleProtocol::SlpMessage_PacketTypes_descriptor();
}
template <> struct is_proto_enum< ::SimpleProtocol::SimpleProtocolVersion> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SimpleProtocol::SimpleProtocolVersion>() {
  return ::SimpleProtocol::SimpleProtocolVersion_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_simple_5fprotocol_2eproto