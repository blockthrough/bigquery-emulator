// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zetasql/public/parse_location_range.proto

#include "zetasql/public/parse_location_range.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace zetasql {
class ParseLocationRangeProtoDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ParseLocationRangeProto>
      _instance;
} _ParseLocationRangeProto_default_instance_;
}  // namespace zetasql
namespace protobuf_zetasql_2fpublic_2fparse_5flocation_5frange_2eproto {
static void InitDefaultsParseLocationRangeProto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::zetasql::_ParseLocationRangeProto_default_instance_;
    new (ptr) ::zetasql::ParseLocationRangeProto();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zetasql::ParseLocationRangeProto::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ParseLocationRangeProto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsParseLocationRangeProto}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ParseLocationRangeProto.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zetasql::ParseLocationRangeProto, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zetasql::ParseLocationRangeProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zetasql::ParseLocationRangeProto, filename_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zetasql::ParseLocationRangeProto, start_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zetasql::ParseLocationRangeProto, end_),
  0,
  1,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::zetasql::ParseLocationRangeProto)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::zetasql::_ParseLocationRangeProto_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "zetasql/public/parse_location_range.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n)zetasql/public/parse_location_range.pr"
      "oto\022\007zetasql\"G\n\027ParseLocationRangeProto\022"
      "\020\n\010filename\030\001 \001(\t\022\r\n\005start\030\002 \001(\005\022\013\n\003end\030"
      "\003 \001(\005B2\n\022com.google.zetasqlB\032ZetaSqlPars"
      "eLocationProtosP\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 177);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "zetasql/public/parse_location_range.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_zetasql_2fpublic_2fparse_5flocation_5frange_2eproto
namespace zetasql {

// ===================================================================

void ParseLocationRangeProto::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ParseLocationRangeProto::kFilenameFieldNumber;
const int ParseLocationRangeProto::kStartFieldNumber;
const int ParseLocationRangeProto::kEndFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ParseLocationRangeProto::ParseLocationRangeProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_zetasql_2fpublic_2fparse_5flocation_5frange_2eproto::scc_info_ParseLocationRangeProto.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:zetasql.ParseLocationRangeProto)
}
ParseLocationRangeProto::ParseLocationRangeProto(const ParseLocationRangeProto& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  filename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_filename()) {
    filename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.filename_);
  }
  ::memcpy(&start_, &from.start_,
    static_cast<size_t>(reinterpret_cast<char*>(&end_) -
    reinterpret_cast<char*>(&start_)) + sizeof(end_));
  // @@protoc_insertion_point(copy_constructor:zetasql.ParseLocationRangeProto)
}

void ParseLocationRangeProto::SharedCtor() {
  filename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&start_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&end_) -
      reinterpret_cast<char*>(&start_)) + sizeof(end_));
}

ParseLocationRangeProto::~ParseLocationRangeProto() {
  // @@protoc_insertion_point(destructor:zetasql.ParseLocationRangeProto)
  SharedDtor();
}

void ParseLocationRangeProto::SharedDtor() {
  filename_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ParseLocationRangeProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ParseLocationRangeProto::descriptor() {
  ::protobuf_zetasql_2fpublic_2fparse_5flocation_5frange_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_zetasql_2fpublic_2fparse_5flocation_5frange_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ParseLocationRangeProto& ParseLocationRangeProto::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_zetasql_2fpublic_2fparse_5flocation_5frange_2eproto::scc_info_ParseLocationRangeProto.base);
  return *internal_default_instance();
}


void ParseLocationRangeProto::Clear() {
// @@protoc_insertion_point(message_clear_start:zetasql.ParseLocationRangeProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    filename_.ClearNonDefaultToEmptyNoArena();
  }
  if (cached_has_bits & 6u) {
    ::memset(&start_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&end_) -
        reinterpret_cast<char*>(&start_)) + sizeof(end_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ParseLocationRangeProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:zetasql.ParseLocationRangeProto)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string filename = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_filename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->filename().data(), static_cast<int>(this->filename().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "zetasql.ParseLocationRangeProto.filename");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 start = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_start();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &start_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 end = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_end();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &end_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:zetasql.ParseLocationRangeProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:zetasql.ParseLocationRangeProto)
  return false;
#undef DO_
}

void ParseLocationRangeProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:zetasql.ParseLocationRangeProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string filename = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->filename().data(), static_cast<int>(this->filename().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "zetasql.ParseLocationRangeProto.filename");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->filename(), output);
  }

  // optional int32 start = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->start(), output);
  }

  // optional int32 end = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->end(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:zetasql.ParseLocationRangeProto)
}

::google::protobuf::uint8* ParseLocationRangeProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:zetasql.ParseLocationRangeProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string filename = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->filename().data(), static_cast<int>(this->filename().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "zetasql.ParseLocationRangeProto.filename");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->filename(), target);
  }

  // optional int32 start = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->start(), target);
  }

  // optional int32 end = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->end(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:zetasql.ParseLocationRangeProto)
  return target;
}

size_t ParseLocationRangeProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:zetasql.ParseLocationRangeProto)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional string filename = 1;
    if (has_filename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->filename());
    }

    // optional int32 start = 2;
    if (has_start()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->start());
    }

    // optional int32 end = 3;
    if (has_end()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->end());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ParseLocationRangeProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:zetasql.ParseLocationRangeProto)
  GOOGLE_DCHECK_NE(&from, this);
  const ParseLocationRangeProto* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ParseLocationRangeProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:zetasql.ParseLocationRangeProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:zetasql.ParseLocationRangeProto)
    MergeFrom(*source);
  }
}

void ParseLocationRangeProto::MergeFrom(const ParseLocationRangeProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:zetasql.ParseLocationRangeProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_filename();
      filename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.filename_);
    }
    if (cached_has_bits & 0x00000002u) {
      start_ = from.start_;
    }
    if (cached_has_bits & 0x00000004u) {
      end_ = from.end_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ParseLocationRangeProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:zetasql.ParseLocationRangeProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ParseLocationRangeProto::CopyFrom(const ParseLocationRangeProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:zetasql.ParseLocationRangeProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ParseLocationRangeProto::IsInitialized() const {
  return true;
}

void ParseLocationRangeProto::Swap(ParseLocationRangeProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ParseLocationRangeProto::InternalSwap(ParseLocationRangeProto* other) {
  using std::swap;
  filename_.Swap(&other->filename_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(start_, other->start_);
  swap(end_, other->end_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ParseLocationRangeProto::GetMetadata() const {
  protobuf_zetasql_2fpublic_2fparse_5flocation_5frange_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_zetasql_2fpublic_2fparse_5flocation_5frange_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace zetasql
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::zetasql::ParseLocationRangeProto* Arena::CreateMaybeMessage< ::zetasql::ParseLocationRangeProto >(Arena* arena) {
  return Arena::CreateInternal< ::zetasql::ParseLocationRangeProto >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
