// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zetasql/public/functions/datetime.proto

#include "zetasql/public/functions/datetime.pb.h"

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
namespace functions {
}  // namespace functions
}  // namespace zetasql
namespace protobuf_zetasql_2fpublic_2ffunctions_2fdatetime_2eproto {
void InitDefaults() {
}

const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "zetasql/public/functions/datetime.proto", schemas, file_default_instances, TableStruct::offsets,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\'zetasql/public/functions/datetime.prot"
      "o\022\021zetasql.functions*\237\003\n\021DateTimestampPa"
      "rt\0229\n,__DateTimePart__switch_must_have_a"
      "_default__\020\377\377\377\377\377\377\377\377\377\001\022\010\n\004YEAR\020\001\022\t\n\005MONTH"
      "\020\002\022\007\n\003DAY\020\003\022\r\n\tDAYOFWEEK\020\004\022\r\n\tDAYOFYEAR\020"
      "\005\022\013\n\007QUARTER\020\006\022\010\n\004HOUR\020\007\022\n\n\006MINUTE\020\010\022\n\n\006"
      "SECOND\020\t\022\017\n\013MILLISECOND\020\n\022\017\n\013MICROSECOND"
      "\020\013\022\016\n\nNANOSECOND\020\014\022\010\n\004DATE\020\r\022\010\n\004WEEK\020\016\022\014"
      "\n\010DATETIME\020\017\022\010\n\004TIME\020\020\022\013\n\007ISOYEAR\020\021\022\013\n\007I"
      "SOWEEK\020\022\022\017\n\013WEEK_MONDAY\020\023\022\020\n\014WEEK_TUESDA"
      "Y\020\024\022\022\n\016WEEK_WEDNESDAY\020\025\022\021\n\rWEEK_THURSDAY"
      "\020\026\022\017\n\013WEEK_FRIDAY\020\027\022\021\n\rWEEK_SATURDAY\020\030B/"
      "\n\034com.google.zetasql.functionsB\017ZetaSQLD"
      "ateTime"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 527);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "zetasql/public/functions/datetime.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_zetasql_2fpublic_2ffunctions_2fdatetime_2eproto
namespace zetasql {
namespace functions {
const ::google::protobuf::EnumDescriptor* DateTimestampPart_descriptor() {
  protobuf_zetasql_2fpublic_2ffunctions_2fdatetime_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_zetasql_2fpublic_2ffunctions_2fdatetime_2eproto::file_level_enum_descriptors[0];
}
bool DateTimestampPart_IsValid(int value) {
  switch (value) {
    case -1:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace functions
}  // namespace zetasql
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
