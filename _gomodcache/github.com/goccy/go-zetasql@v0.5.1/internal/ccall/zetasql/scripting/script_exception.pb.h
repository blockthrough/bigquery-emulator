// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zetasql/scripting/script_exception.proto

#ifndef PROTOBUF_INCLUDED_zetasql_2fscripting_2fscript_5fexception_2eproto
#define PROTOBUF_INCLUDED_zetasql_2fscripting_2fscript_5fexception_2eproto

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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_zetasql_2fscripting_2fscript_5fexception_2eproto 

namespace protobuf_zetasql_2fscripting_2fscript_5fexception_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_zetasql_2fscripting_2fscript_5fexception_2eproto
namespace zetasql {
class ScriptException;
class ScriptExceptionDefaultTypeInternal;
extern ScriptExceptionDefaultTypeInternal _ScriptException_default_instance_;
class ScriptException_Internal;
class ScriptException_InternalDefaultTypeInternal;
extern ScriptException_InternalDefaultTypeInternal _ScriptException_Internal_default_instance_;
class ScriptException_StackTraceFrame;
class ScriptException_StackTraceFrameDefaultTypeInternal;
extern ScriptException_StackTraceFrameDefaultTypeInternal _ScriptException_StackTraceFrame_default_instance_;
}  // namespace zetasql
namespace google {
namespace protobuf {
template<> ::zetasql::ScriptException* Arena::CreateMaybeMessage<::zetasql::ScriptException>(Arena*);
template<> ::zetasql::ScriptException_Internal* Arena::CreateMaybeMessage<::zetasql::ScriptException_Internal>(Arena*);
template<> ::zetasql::ScriptException_StackTraceFrame* Arena::CreateMaybeMessage<::zetasql::ScriptException_StackTraceFrame>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace zetasql {

// ===================================================================

class ScriptException_StackTraceFrame : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zetasql.ScriptException.StackTraceFrame) */ {
 public:
  ScriptException_StackTraceFrame();
  virtual ~ScriptException_StackTraceFrame();

  ScriptException_StackTraceFrame(const ScriptException_StackTraceFrame& from);

  inline ScriptException_StackTraceFrame& operator=(const ScriptException_StackTraceFrame& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ScriptException_StackTraceFrame(ScriptException_StackTraceFrame&& from) noexcept
    : ScriptException_StackTraceFrame() {
    *this = ::std::move(from);
  }

  inline ScriptException_StackTraceFrame& operator=(ScriptException_StackTraceFrame&& from) noexcept {
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

  static const ::google::protobuf::Descriptor* descriptor();
  static const ScriptException_StackTraceFrame& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ScriptException_StackTraceFrame* internal_default_instance() {
    return reinterpret_cast<const ScriptException_StackTraceFrame*>(
               &_ScriptException_StackTraceFrame_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ScriptException_StackTraceFrame* other);
  friend void swap(ScriptException_StackTraceFrame& a, ScriptException_StackTraceFrame& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ScriptException_StackTraceFrame* New() const final {
    return CreateMaybeMessage<ScriptException_StackTraceFrame>(NULL);
  }

  ScriptException_StackTraceFrame* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ScriptException_StackTraceFrame>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ScriptException_StackTraceFrame& from);
  void MergeFrom(const ScriptException_StackTraceFrame& from);
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
  void InternalSwap(ScriptException_StackTraceFrame* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string filename = 3;
  bool has_filename() const;
  void clear_filename();
  static const int kFilenameFieldNumber = 3;
  const ::std::string& filename() const;
  void set_filename(const ::std::string& value);
  #if LANG_CXX11
  void set_filename(::std::string&& value);
  #endif
  void set_filename(const char* value);
  void set_filename(const char* value, size_t size);
  ::std::string* mutable_filename();
  ::std::string* release_filename();
  void set_allocated_filename(::std::string* filename);

  // optional string location = 4;
  bool has_location() const;
  void clear_location();
  static const int kLocationFieldNumber = 4;
  const ::std::string& location() const;
  void set_location(const ::std::string& value);
  #if LANG_CXX11
  void set_location(::std::string&& value);
  #endif
  void set_location(const char* value);
  void set_location(const char* value, size_t size);
  ::std::string* mutable_location();
  ::std::string* release_location();
  void set_allocated_location(::std::string* location);

  // optional int64 line = 1;
  bool has_line() const;
  void clear_line();
  static const int kLineFieldNumber = 1;
  ::google::protobuf::int64 line() const;
  void set_line(::google::protobuf::int64 value);

  // optional int64 column = 2;
  bool has_column() const;
  void clear_column();
  static const int kColumnFieldNumber = 2;
  ::google::protobuf::int64 column() const;
  void set_column(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:zetasql.ScriptException.StackTraceFrame)
 private:
  void set_has_line();
  void clear_has_line();
  void set_has_column();
  void clear_has_column();
  void set_has_filename();
  void clear_has_filename();
  void set_has_location();
  void clear_has_location();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr filename_;
  ::google::protobuf::internal::ArenaStringPtr location_;
  ::google::protobuf::int64 line_;
  ::google::protobuf::int64 column_;
  friend struct ::protobuf_zetasql_2fscripting_2fscript_5fexception_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ScriptException_Internal : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zetasql.ScriptException.Internal) */ {
 public:
  ScriptException_Internal();
  virtual ~ScriptException_Internal();

  ScriptException_Internal(const ScriptException_Internal& from);

  inline ScriptException_Internal& operator=(const ScriptException_Internal& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ScriptException_Internal(ScriptException_Internal&& from) noexcept
    : ScriptException_Internal() {
    *this = ::std::move(from);
  }

  inline ScriptException_Internal& operator=(ScriptException_Internal&& from) noexcept {
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

  static const ::google::protobuf::Descriptor* descriptor();
  static const ScriptException_Internal& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ScriptException_Internal* internal_default_instance() {
    return reinterpret_cast<const ScriptException_Internal*>(
               &_ScriptException_Internal_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ScriptException_Internal* other);
  friend void swap(ScriptException_Internal& a, ScriptException_Internal& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ScriptException_Internal* New() const final {
    return CreateMaybeMessage<ScriptException_Internal>(NULL);
  }

  ScriptException_Internal* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ScriptException_Internal>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ScriptException_Internal& from);
  void MergeFrom(const ScriptException_Internal& from);
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
  void InternalSwap(ScriptException_Internal* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .zetasql.ScriptException.StackTraceFrame stack_trace = 2;
  int stack_trace_size() const;
  void clear_stack_trace();
  static const int kStackTraceFieldNumber = 2;
  ::zetasql::ScriptException_StackTraceFrame* mutable_stack_trace(int index);
  ::google::protobuf::RepeatedPtrField< ::zetasql::ScriptException_StackTraceFrame >*
      mutable_stack_trace();
  const ::zetasql::ScriptException_StackTraceFrame& stack_trace(int index) const;
  ::zetasql::ScriptException_StackTraceFrame* add_stack_trace();
  const ::google::protobuf::RepeatedPtrField< ::zetasql::ScriptException_StackTraceFrame >&
      stack_trace() const;

  // optional string statement_text = 1;
  bool has_statement_text() const;
  void clear_statement_text();
  static const int kStatementTextFieldNumber = 1;
  const ::std::string& statement_text() const;
  void set_statement_text(const ::std::string& value);
  #if LANG_CXX11
  void set_statement_text(::std::string&& value);
  #endif
  void set_statement_text(const char* value);
  void set_statement_text(const char* value, size_t size);
  ::std::string* mutable_statement_text();
  ::std::string* release_statement_text();
  void set_allocated_statement_text(::std::string* statement_text);

  // @@protoc_insertion_point(class_scope:zetasql.ScriptException.Internal)
 private:
  void set_has_statement_text();
  void clear_has_statement_text();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::zetasql::ScriptException_StackTraceFrame > stack_trace_;
  ::google::protobuf::internal::ArenaStringPtr statement_text_;
  friend struct ::protobuf_zetasql_2fscripting_2fscript_5fexception_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ScriptException : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zetasql.ScriptException) */ {
 public:
  ScriptException();
  virtual ~ScriptException();

  ScriptException(const ScriptException& from);

  inline ScriptException& operator=(const ScriptException& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ScriptException(ScriptException&& from) noexcept
    : ScriptException() {
    *this = ::std::move(from);
  }

  inline ScriptException& operator=(ScriptException&& from) noexcept {
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

  static const ::google::protobuf::Descriptor* descriptor();
  static const ScriptException& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ScriptException* internal_default_instance() {
    return reinterpret_cast<const ScriptException*>(
               &_ScriptException_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(ScriptException* other);
  friend void swap(ScriptException& a, ScriptException& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ScriptException* New() const final {
    return CreateMaybeMessage<ScriptException>(NULL);
  }

  ScriptException* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ScriptException>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ScriptException& from);
  void MergeFrom(const ScriptException& from);
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
  void InternalSwap(ScriptException* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef ScriptException_StackTraceFrame StackTraceFrame;
  typedef ScriptException_Internal Internal;

  // accessors -------------------------------------------------------

  // optional string message = 1;
  bool has_message() const;
  void clear_message();
  static const int kMessageFieldNumber = 1;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  #if LANG_CXX11
  void set_message(::std::string&& value);
  #endif
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // optional .zetasql.ScriptException.Internal internal = 2;
  bool has_internal() const;
  void clear_internal();
  static const int kInternalFieldNumber = 2;
  private:
  const ::zetasql::ScriptException_Internal& _internal_internal() const;
  public:
  const ::zetasql::ScriptException_Internal& internal() const;
  ::zetasql::ScriptException_Internal* release_internal();
  ::zetasql::ScriptException_Internal* mutable_internal();
  void set_allocated_internal(::zetasql::ScriptException_Internal* internal);

  // @@protoc_insertion_point(class_scope:zetasql.ScriptException)
 private:
  void set_has_message();
  void clear_has_message();
  void set_has_internal();
  void clear_has_internal();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  ::zetasql::ScriptException_Internal* internal_;
  friend struct ::protobuf_zetasql_2fscripting_2fscript_5fexception_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ScriptException_StackTraceFrame

// optional int64 line = 1;
inline bool ScriptException_StackTraceFrame::has_line() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ScriptException_StackTraceFrame::set_has_line() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ScriptException_StackTraceFrame::clear_has_line() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ScriptException_StackTraceFrame::clear_line() {
  line_ = GOOGLE_LONGLONG(0);
  clear_has_line();
}
inline ::google::protobuf::int64 ScriptException_StackTraceFrame::line() const {
  // @@protoc_insertion_point(field_get:zetasql.ScriptException.StackTraceFrame.line)
  return line_;
}
inline void ScriptException_StackTraceFrame::set_line(::google::protobuf::int64 value) {
  set_has_line();
  line_ = value;
  // @@protoc_insertion_point(field_set:zetasql.ScriptException.StackTraceFrame.line)
}

// optional int64 column = 2;
inline bool ScriptException_StackTraceFrame::has_column() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ScriptException_StackTraceFrame::set_has_column() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ScriptException_StackTraceFrame::clear_has_column() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ScriptException_StackTraceFrame::clear_column() {
  column_ = GOOGLE_LONGLONG(0);
  clear_has_column();
}
inline ::google::protobuf::int64 ScriptException_StackTraceFrame::column() const {
  // @@protoc_insertion_point(field_get:zetasql.ScriptException.StackTraceFrame.column)
  return column_;
}
inline void ScriptException_StackTraceFrame::set_column(::google::protobuf::int64 value) {
  set_has_column();
  column_ = value;
  // @@protoc_insertion_point(field_set:zetasql.ScriptException.StackTraceFrame.column)
}

// optional string filename = 3;
inline bool ScriptException_StackTraceFrame::has_filename() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ScriptException_StackTraceFrame::set_has_filename() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ScriptException_StackTraceFrame::clear_has_filename() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ScriptException_StackTraceFrame::clear_filename() {
  filename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_filename();
}
inline const ::std::string& ScriptException_StackTraceFrame::filename() const {
  // @@protoc_insertion_point(field_get:zetasql.ScriptException.StackTraceFrame.filename)
  return filename_.GetNoArena();
}
inline void ScriptException_StackTraceFrame::set_filename(const ::std::string& value) {
  set_has_filename();
  filename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zetasql.ScriptException.StackTraceFrame.filename)
}
#if LANG_CXX11
inline void ScriptException_StackTraceFrame::set_filename(::std::string&& value) {
  set_has_filename();
  filename_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:zetasql.ScriptException.StackTraceFrame.filename)
}
#endif
inline void ScriptException_StackTraceFrame::set_filename(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_filename();
  filename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zetasql.ScriptException.StackTraceFrame.filename)
}
inline void ScriptException_StackTraceFrame::set_filename(const char* value, size_t size) {
  set_has_filename();
  filename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zetasql.ScriptException.StackTraceFrame.filename)
}
inline ::std::string* ScriptException_StackTraceFrame::mutable_filename() {
  set_has_filename();
  // @@protoc_insertion_point(field_mutable:zetasql.ScriptException.StackTraceFrame.filename)
  return filename_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ScriptException_StackTraceFrame::release_filename() {
  // @@protoc_insertion_point(field_release:zetasql.ScriptException.StackTraceFrame.filename)
  if (!has_filename()) {
    return NULL;
  }
  clear_has_filename();
  return filename_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ScriptException_StackTraceFrame::set_allocated_filename(::std::string* filename) {
  if (filename != NULL) {
    set_has_filename();
  } else {
    clear_has_filename();
  }
  filename_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), filename);
  // @@protoc_insertion_point(field_set_allocated:zetasql.ScriptException.StackTraceFrame.filename)
}

// optional string location = 4;
inline bool ScriptException_StackTraceFrame::has_location() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ScriptException_StackTraceFrame::set_has_location() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ScriptException_StackTraceFrame::clear_has_location() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ScriptException_StackTraceFrame::clear_location() {
  location_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_location();
}
inline const ::std::string& ScriptException_StackTraceFrame::location() const {
  // @@protoc_insertion_point(field_get:zetasql.ScriptException.StackTraceFrame.location)
  return location_.GetNoArena();
}
inline void ScriptException_StackTraceFrame::set_location(const ::std::string& value) {
  set_has_location();
  location_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zetasql.ScriptException.StackTraceFrame.location)
}
#if LANG_CXX11
inline void ScriptException_StackTraceFrame::set_location(::std::string&& value) {
  set_has_location();
  location_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:zetasql.ScriptException.StackTraceFrame.location)
}
#endif
inline void ScriptException_StackTraceFrame::set_location(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_location();
  location_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zetasql.ScriptException.StackTraceFrame.location)
}
inline void ScriptException_StackTraceFrame::set_location(const char* value, size_t size) {
  set_has_location();
  location_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zetasql.ScriptException.StackTraceFrame.location)
}
inline ::std::string* ScriptException_StackTraceFrame::mutable_location() {
  set_has_location();
  // @@protoc_insertion_point(field_mutable:zetasql.ScriptException.StackTraceFrame.location)
  return location_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ScriptException_StackTraceFrame::release_location() {
  // @@protoc_insertion_point(field_release:zetasql.ScriptException.StackTraceFrame.location)
  if (!has_location()) {
    return NULL;
  }
  clear_has_location();
  return location_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ScriptException_StackTraceFrame::set_allocated_location(::std::string* location) {
  if (location != NULL) {
    set_has_location();
  } else {
    clear_has_location();
  }
  location_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), location);
  // @@protoc_insertion_point(field_set_allocated:zetasql.ScriptException.StackTraceFrame.location)
}

// -------------------------------------------------------------------

// ScriptException_Internal

// optional string statement_text = 1;
inline bool ScriptException_Internal::has_statement_text() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ScriptException_Internal::set_has_statement_text() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ScriptException_Internal::clear_has_statement_text() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ScriptException_Internal::clear_statement_text() {
  statement_text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_statement_text();
}
inline const ::std::string& ScriptException_Internal::statement_text() const {
  // @@protoc_insertion_point(field_get:zetasql.ScriptException.Internal.statement_text)
  return statement_text_.GetNoArena();
}
inline void ScriptException_Internal::set_statement_text(const ::std::string& value) {
  set_has_statement_text();
  statement_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zetasql.ScriptException.Internal.statement_text)
}
#if LANG_CXX11
inline void ScriptException_Internal::set_statement_text(::std::string&& value) {
  set_has_statement_text();
  statement_text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:zetasql.ScriptException.Internal.statement_text)
}
#endif
inline void ScriptException_Internal::set_statement_text(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_statement_text();
  statement_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zetasql.ScriptException.Internal.statement_text)
}
inline void ScriptException_Internal::set_statement_text(const char* value, size_t size) {
  set_has_statement_text();
  statement_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zetasql.ScriptException.Internal.statement_text)
}
inline ::std::string* ScriptException_Internal::mutable_statement_text() {
  set_has_statement_text();
  // @@protoc_insertion_point(field_mutable:zetasql.ScriptException.Internal.statement_text)
  return statement_text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ScriptException_Internal::release_statement_text() {
  // @@protoc_insertion_point(field_release:zetasql.ScriptException.Internal.statement_text)
  if (!has_statement_text()) {
    return NULL;
  }
  clear_has_statement_text();
  return statement_text_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ScriptException_Internal::set_allocated_statement_text(::std::string* statement_text) {
  if (statement_text != NULL) {
    set_has_statement_text();
  } else {
    clear_has_statement_text();
  }
  statement_text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), statement_text);
  // @@protoc_insertion_point(field_set_allocated:zetasql.ScriptException.Internal.statement_text)
}

// repeated .zetasql.ScriptException.StackTraceFrame stack_trace = 2;
inline int ScriptException_Internal::stack_trace_size() const {
  return stack_trace_.size();
}
inline void ScriptException_Internal::clear_stack_trace() {
  stack_trace_.Clear();
}
inline ::zetasql::ScriptException_StackTraceFrame* ScriptException_Internal::mutable_stack_trace(int index) {
  // @@protoc_insertion_point(field_mutable:zetasql.ScriptException.Internal.stack_trace)
  return stack_trace_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::zetasql::ScriptException_StackTraceFrame >*
ScriptException_Internal::mutable_stack_trace() {
  // @@protoc_insertion_point(field_mutable_list:zetasql.ScriptException.Internal.stack_trace)
  return &stack_trace_;
}
inline const ::zetasql::ScriptException_StackTraceFrame& ScriptException_Internal::stack_trace(int index) const {
  // @@protoc_insertion_point(field_get:zetasql.ScriptException.Internal.stack_trace)
  return stack_trace_.Get(index);
}
inline ::zetasql::ScriptException_StackTraceFrame* ScriptException_Internal::add_stack_trace() {
  // @@protoc_insertion_point(field_add:zetasql.ScriptException.Internal.stack_trace)
  return stack_trace_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::zetasql::ScriptException_StackTraceFrame >&
ScriptException_Internal::stack_trace() const {
  // @@protoc_insertion_point(field_list:zetasql.ScriptException.Internal.stack_trace)
  return stack_trace_;
}

// -------------------------------------------------------------------

// ScriptException

// optional string message = 1;
inline bool ScriptException::has_message() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ScriptException::set_has_message() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ScriptException::clear_has_message() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ScriptException::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_message();
}
inline const ::std::string& ScriptException::message() const {
  // @@protoc_insertion_point(field_get:zetasql.ScriptException.message)
  return message_.GetNoArena();
}
inline void ScriptException::set_message(const ::std::string& value) {
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zetasql.ScriptException.message)
}
#if LANG_CXX11
inline void ScriptException::set_message(::std::string&& value) {
  set_has_message();
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:zetasql.ScriptException.message)
}
#endif
inline void ScriptException::set_message(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zetasql.ScriptException.message)
}
inline void ScriptException::set_message(const char* value, size_t size) {
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zetasql.ScriptException.message)
}
inline ::std::string* ScriptException::mutable_message() {
  set_has_message();
  // @@protoc_insertion_point(field_mutable:zetasql.ScriptException.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ScriptException::release_message() {
  // @@protoc_insertion_point(field_release:zetasql.ScriptException.message)
  if (!has_message()) {
    return NULL;
  }
  clear_has_message();
  return message_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ScriptException::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    set_has_message();
  } else {
    clear_has_message();
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:zetasql.ScriptException.message)
}

// optional .zetasql.ScriptException.Internal internal = 2;
inline bool ScriptException::has_internal() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ScriptException::set_has_internal() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ScriptException::clear_has_internal() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ScriptException::clear_internal() {
  if (internal_ != NULL) internal_->Clear();
  clear_has_internal();
}
inline const ::zetasql::ScriptException_Internal& ScriptException::_internal_internal() const {
  return *internal_;
}
inline const ::zetasql::ScriptException_Internal& ScriptException::internal() const {
  const ::zetasql::ScriptException_Internal* p = internal_;
  // @@protoc_insertion_point(field_get:zetasql.ScriptException.internal)
  return p != NULL ? *p : *reinterpret_cast<const ::zetasql::ScriptException_Internal*>(
      &::zetasql::_ScriptException_Internal_default_instance_);
}
inline ::zetasql::ScriptException_Internal* ScriptException::release_internal() {
  // @@protoc_insertion_point(field_release:zetasql.ScriptException.internal)
  clear_has_internal();
  ::zetasql::ScriptException_Internal* temp = internal_;
  internal_ = NULL;
  return temp;
}
inline ::zetasql::ScriptException_Internal* ScriptException::mutable_internal() {
  set_has_internal();
  if (internal_ == NULL) {
    auto* p = CreateMaybeMessage<::zetasql::ScriptException_Internal>(GetArenaNoVirtual());
    internal_ = p;
  }
  // @@protoc_insertion_point(field_mutable:zetasql.ScriptException.internal)
  return internal_;
}
inline void ScriptException::set_allocated_internal(::zetasql::ScriptException_Internal* internal) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete internal_;
  }
  if (internal) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      internal = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, internal, submessage_arena);
    }
    set_has_internal();
  } else {
    clear_has_internal();
  }
  internal_ = internal;
  // @@protoc_insertion_point(field_set_allocated:zetasql.ScriptException.internal)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace zetasql

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_zetasql_2fscripting_2fscript_5fexception_2eproto
