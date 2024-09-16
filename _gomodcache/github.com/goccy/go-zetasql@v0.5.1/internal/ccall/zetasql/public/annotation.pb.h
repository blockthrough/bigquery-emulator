// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zetasql/public/annotation.proto

#ifndef PROTOBUF_INCLUDED_zetasql_2fpublic_2fannotation_2eproto
#define PROTOBUF_INCLUDED_zetasql_2fpublic_2fannotation_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "zetasql/public/simple_value.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_zetasql_2fpublic_2fannotation_2eproto 

namespace protobuf_zetasql_2fpublic_2fannotation_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_zetasql_2fpublic_2fannotation_2eproto
namespace zetasql {
class AnnotationMapProto;
class AnnotationMapProtoDefaultTypeInternal;
extern AnnotationMapProtoDefaultTypeInternal _AnnotationMapProto_default_instance_;
class AnnotationProto;
class AnnotationProtoDefaultTypeInternal;
extern AnnotationProtoDefaultTypeInternal _AnnotationProto_default_instance_;
}  // namespace zetasql
namespace google {
namespace protobuf {
template<> ::zetasql::AnnotationMapProto* Arena::CreateMaybeMessage<::zetasql::AnnotationMapProto>(Arena*);
template<> ::zetasql::AnnotationProto* Arena::CreateMaybeMessage<::zetasql::AnnotationProto>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace zetasql {

// ===================================================================

class AnnotationProto : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zetasql.AnnotationProto) */ {
 public:
  AnnotationProto();
  virtual ~AnnotationProto();

  AnnotationProto(const AnnotationProto& from);

  inline AnnotationProto& operator=(const AnnotationProto& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AnnotationProto(AnnotationProto&& from) noexcept
    : AnnotationProto() {
    *this = ::std::move(from);
  }

  inline AnnotationProto& operator=(AnnotationProto&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  inline ::google::protobuf::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const AnnotationProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AnnotationProto* internal_default_instance() {
    return reinterpret_cast<const AnnotationProto*>(
               &_AnnotationProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(AnnotationProto* other);
  void Swap(AnnotationProto* other);
  friend void swap(AnnotationProto& a, AnnotationProto& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AnnotationProto* New() const final {
    return CreateMaybeMessage<AnnotationProto>(NULL);
  }

  AnnotationProto* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AnnotationProto>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AnnotationProto& from);
  void MergeFrom(const AnnotationProto& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AnnotationProto* other);
  protected:
  explicit AnnotationProto(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .zetasql.SimpleValueProto value = 2;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  private:
  const ::zetasql::SimpleValueProto& _internal_value() const;
  public:
  const ::zetasql::SimpleValueProto& value() const;
  ::zetasql::SimpleValueProto* release_value();
  ::zetasql::SimpleValueProto* mutable_value();
  void set_allocated_value(::zetasql::SimpleValueProto* value);
  void unsafe_arena_set_allocated_value(
      ::zetasql::SimpleValueProto* value);
  ::zetasql::SimpleValueProto* unsafe_arena_release_value();

  // optional int64 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int64 id() const;
  void set_id(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:zetasql.AnnotationProto)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_value();
  void clear_has_value();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::zetasql::SimpleValueProto* value_;
  ::google::protobuf::int64 id_;
  friend struct ::protobuf_zetasql_2fpublic_2fannotation_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class AnnotationMapProto : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zetasql.AnnotationMapProto) */ {
 public:
  AnnotationMapProto();
  virtual ~AnnotationMapProto();

  AnnotationMapProto(const AnnotationMapProto& from);

  inline AnnotationMapProto& operator=(const AnnotationMapProto& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AnnotationMapProto(AnnotationMapProto&& from) noexcept
    : AnnotationMapProto() {
    *this = ::std::move(from);
  }

  inline AnnotationMapProto& operator=(AnnotationMapProto&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  inline ::google::protobuf::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const AnnotationMapProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AnnotationMapProto* internal_default_instance() {
    return reinterpret_cast<const AnnotationMapProto*>(
               &_AnnotationMapProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(AnnotationMapProto* other);
  void Swap(AnnotationMapProto* other);
  friend void swap(AnnotationMapProto& a, AnnotationMapProto& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AnnotationMapProto* New() const final {
    return CreateMaybeMessage<AnnotationMapProto>(NULL);
  }

  AnnotationMapProto* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AnnotationMapProto>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AnnotationMapProto& from);
  void MergeFrom(const AnnotationMapProto& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AnnotationMapProto* other);
  protected:
  explicit AnnotationMapProto(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .zetasql.AnnotationProto annotations = 1;
  int annotations_size() const;
  void clear_annotations();
  static const int kAnnotationsFieldNumber = 1;
  ::zetasql::AnnotationProto* mutable_annotations(int index);
  ::google::protobuf::RepeatedPtrField< ::zetasql::AnnotationProto >*
      mutable_annotations();
  const ::zetasql::AnnotationProto& annotations(int index) const;
  ::zetasql::AnnotationProto* add_annotations();
  const ::google::protobuf::RepeatedPtrField< ::zetasql::AnnotationProto >&
      annotations() const;

  // repeated .zetasql.AnnotationMapProto struct_fields = 3;
  int struct_fields_size() const;
  void clear_struct_fields();
  static const int kStructFieldsFieldNumber = 3;
  ::zetasql::AnnotationMapProto* mutable_struct_fields(int index);
  ::google::protobuf::RepeatedPtrField< ::zetasql::AnnotationMapProto >*
      mutable_struct_fields();
  const ::zetasql::AnnotationMapProto& struct_fields(int index) const;
  ::zetasql::AnnotationMapProto* add_struct_fields();
  const ::google::protobuf::RepeatedPtrField< ::zetasql::AnnotationMapProto >&
      struct_fields() const;

  // optional .zetasql.AnnotationMapProto array_element = 2;
  bool has_array_element() const;
  void clear_array_element();
  static const int kArrayElementFieldNumber = 2;
  private:
  const ::zetasql::AnnotationMapProto& _internal_array_element() const;
  public:
  const ::zetasql::AnnotationMapProto& array_element() const;
  ::zetasql::AnnotationMapProto* release_array_element();
  ::zetasql::AnnotationMapProto* mutable_array_element();
  void set_allocated_array_element(::zetasql::AnnotationMapProto* array_element);
  void unsafe_arena_set_allocated_array_element(
      ::zetasql::AnnotationMapProto* array_element);
  ::zetasql::AnnotationMapProto* unsafe_arena_release_array_element();

  // optional bool is_null = 4;
  bool has_is_null() const;
  void clear_is_null();
  static const int kIsNullFieldNumber = 4;
  bool is_null() const;
  void set_is_null(bool value);

  // @@protoc_insertion_point(class_scope:zetasql.AnnotationMapProto)
 private:
  void set_has_is_null();
  void clear_has_is_null();
  void set_has_array_element();
  void clear_has_array_element();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::zetasql::AnnotationProto > annotations_;
  ::google::protobuf::RepeatedPtrField< ::zetasql::AnnotationMapProto > struct_fields_;
  ::zetasql::AnnotationMapProto* array_element_;
  bool is_null_;
  friend struct ::protobuf_zetasql_2fpublic_2fannotation_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AnnotationProto

// optional int64 id = 1;
inline bool AnnotationProto::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AnnotationProto::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AnnotationProto::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AnnotationProto::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 AnnotationProto::id() const {
  // @@protoc_insertion_point(field_get:zetasql.AnnotationProto.id)
  return id_;
}
inline void AnnotationProto::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:zetasql.AnnotationProto.id)
}

// optional .zetasql.SimpleValueProto value = 2;
inline bool AnnotationProto::has_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AnnotationProto::set_has_value() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AnnotationProto::clear_has_value() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::zetasql::SimpleValueProto& AnnotationProto::_internal_value() const {
  return *value_;
}
inline const ::zetasql::SimpleValueProto& AnnotationProto::value() const {
  const ::zetasql::SimpleValueProto* p = value_;
  // @@protoc_insertion_point(field_get:zetasql.AnnotationProto.value)
  return p != NULL ? *p : *reinterpret_cast<const ::zetasql::SimpleValueProto*>(
      &::zetasql::_SimpleValueProto_default_instance_);
}
inline ::zetasql::SimpleValueProto* AnnotationProto::release_value() {
  // @@protoc_insertion_point(field_release:zetasql.AnnotationProto.value)
  clear_has_value();
  ::zetasql::SimpleValueProto* temp = value_;
  if (GetArenaNoVirtual() != NULL) {
    temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
  }
  value_ = NULL;
  return temp;
}
inline ::zetasql::SimpleValueProto* AnnotationProto::unsafe_arena_release_value() {
  // @@protoc_insertion_point(field_unsafe_arena_release:zetasql.AnnotationProto.value)
  clear_has_value();
  ::zetasql::SimpleValueProto* temp = value_;
  value_ = NULL;
  return temp;
}
inline ::zetasql::SimpleValueProto* AnnotationProto::mutable_value() {
  set_has_value();
  if (value_ == NULL) {
    auto* p = CreateMaybeMessage<::zetasql::SimpleValueProto>(GetArenaNoVirtual());
    value_ = p;
  }
  // @@protoc_insertion_point(field_mutable:zetasql.AnnotationProto.value)
  return value_;
}
inline void AnnotationProto::set_allocated_value(::zetasql::SimpleValueProto* value) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(value_);
  }
  if (value) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(value)->GetArena();
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, value, submessage_arena);
    }
    set_has_value();
  } else {
    clear_has_value();
  }
  value_ = value;
  // @@protoc_insertion_point(field_set_allocated:zetasql.AnnotationProto.value)
}

// -------------------------------------------------------------------

// AnnotationMapProto

// optional bool is_null = 4;
inline bool AnnotationMapProto::has_is_null() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AnnotationMapProto::set_has_is_null() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AnnotationMapProto::clear_has_is_null() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AnnotationMapProto::clear_is_null() {
  is_null_ = false;
  clear_has_is_null();
}
inline bool AnnotationMapProto::is_null() const {
  // @@protoc_insertion_point(field_get:zetasql.AnnotationMapProto.is_null)
  return is_null_;
}
inline void AnnotationMapProto::set_is_null(bool value) {
  set_has_is_null();
  is_null_ = value;
  // @@protoc_insertion_point(field_set:zetasql.AnnotationMapProto.is_null)
}

// repeated .zetasql.AnnotationProto annotations = 1;
inline int AnnotationMapProto::annotations_size() const {
  return annotations_.size();
}
inline void AnnotationMapProto::clear_annotations() {
  annotations_.Clear();
}
inline ::zetasql::AnnotationProto* AnnotationMapProto::mutable_annotations(int index) {
  // @@protoc_insertion_point(field_mutable:zetasql.AnnotationMapProto.annotations)
  return annotations_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::zetasql::AnnotationProto >*
AnnotationMapProto::mutable_annotations() {
  // @@protoc_insertion_point(field_mutable_list:zetasql.AnnotationMapProto.annotations)
  return &annotations_;
}
inline const ::zetasql::AnnotationProto& AnnotationMapProto::annotations(int index) const {
  // @@protoc_insertion_point(field_get:zetasql.AnnotationMapProto.annotations)
  return annotations_.Get(index);
}
inline ::zetasql::AnnotationProto* AnnotationMapProto::add_annotations() {
  // @@protoc_insertion_point(field_add:zetasql.AnnotationMapProto.annotations)
  return annotations_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::zetasql::AnnotationProto >&
AnnotationMapProto::annotations() const {
  // @@protoc_insertion_point(field_list:zetasql.AnnotationMapProto.annotations)
  return annotations_;
}

// optional .zetasql.AnnotationMapProto array_element = 2;
inline bool AnnotationMapProto::has_array_element() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AnnotationMapProto::set_has_array_element() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AnnotationMapProto::clear_has_array_element() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AnnotationMapProto::clear_array_element() {
  if (array_element_ != NULL) array_element_->Clear();
  clear_has_array_element();
}
inline const ::zetasql::AnnotationMapProto& AnnotationMapProto::_internal_array_element() const {
  return *array_element_;
}
inline const ::zetasql::AnnotationMapProto& AnnotationMapProto::array_element() const {
  const ::zetasql::AnnotationMapProto* p = array_element_;
  // @@protoc_insertion_point(field_get:zetasql.AnnotationMapProto.array_element)
  return p != NULL ? *p : *reinterpret_cast<const ::zetasql::AnnotationMapProto*>(
      &::zetasql::_AnnotationMapProto_default_instance_);
}
inline ::zetasql::AnnotationMapProto* AnnotationMapProto::release_array_element() {
  // @@protoc_insertion_point(field_release:zetasql.AnnotationMapProto.array_element)
  clear_has_array_element();
  ::zetasql::AnnotationMapProto* temp = array_element_;
  if (GetArenaNoVirtual() != NULL) {
    temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
  }
  array_element_ = NULL;
  return temp;
}
inline ::zetasql::AnnotationMapProto* AnnotationMapProto::unsafe_arena_release_array_element() {
  // @@protoc_insertion_point(field_unsafe_arena_release:zetasql.AnnotationMapProto.array_element)
  clear_has_array_element();
  ::zetasql::AnnotationMapProto* temp = array_element_;
  array_element_ = NULL;
  return temp;
}
inline ::zetasql::AnnotationMapProto* AnnotationMapProto::mutable_array_element() {
  set_has_array_element();
  if (array_element_ == NULL) {
    auto* p = CreateMaybeMessage<::zetasql::AnnotationMapProto>(GetArenaNoVirtual());
    array_element_ = p;
  }
  // @@protoc_insertion_point(field_mutable:zetasql.AnnotationMapProto.array_element)
  return array_element_;
}
inline void AnnotationMapProto::set_allocated_array_element(::zetasql::AnnotationMapProto* array_element) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete array_element_;
  }
  if (array_element) {
    ::google::protobuf::Arena* submessage_arena =
      ::google::protobuf::Arena::GetArena(array_element);
    if (message_arena != submessage_arena) {
      array_element = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, array_element, submessage_arena);
    }
    set_has_array_element();
  } else {
    clear_has_array_element();
  }
  array_element_ = array_element;
  // @@protoc_insertion_point(field_set_allocated:zetasql.AnnotationMapProto.array_element)
}

// repeated .zetasql.AnnotationMapProto struct_fields = 3;
inline int AnnotationMapProto::struct_fields_size() const {
  return struct_fields_.size();
}
inline void AnnotationMapProto::clear_struct_fields() {
  struct_fields_.Clear();
}
inline ::zetasql::AnnotationMapProto* AnnotationMapProto::mutable_struct_fields(int index) {
  // @@protoc_insertion_point(field_mutable:zetasql.AnnotationMapProto.struct_fields)
  return struct_fields_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::zetasql::AnnotationMapProto >*
AnnotationMapProto::mutable_struct_fields() {
  // @@protoc_insertion_point(field_mutable_list:zetasql.AnnotationMapProto.struct_fields)
  return &struct_fields_;
}
inline const ::zetasql::AnnotationMapProto& AnnotationMapProto::struct_fields(int index) const {
  // @@protoc_insertion_point(field_get:zetasql.AnnotationMapProto.struct_fields)
  return struct_fields_.Get(index);
}
inline ::zetasql::AnnotationMapProto* AnnotationMapProto::add_struct_fields() {
  // @@protoc_insertion_point(field_add:zetasql.AnnotationMapProto.struct_fields)
  return struct_fields_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::zetasql::AnnotationMapProto >&
AnnotationMapProto::struct_fields() const {
  // @@protoc_insertion_point(field_list:zetasql.AnnotationMapProto.struct_fields)
  return struct_fields_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace zetasql

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_zetasql_2fpublic_2fannotation_2eproto
