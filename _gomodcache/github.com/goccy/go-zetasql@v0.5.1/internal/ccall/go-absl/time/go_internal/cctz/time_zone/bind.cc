
#ifndef absl_time_internal_cctz_time_zone_bind_cc
#define absl_time_internal_cctz_time_zone_bind_cc

// switch namespace
#define absl absl_time_internal_cctz_time_zone_absl
#define google absl_time_internal_cctz_time_zone_google
#define zetasql absl_time_internal_cctz_time_zone_zetasql
#define zetasql_base absl_time_internal_cctz_time_zone_zetasql_base
#define zetasql_bison_parser absl_time_internal_cctz_time_zone_zetasql_bison_parser
#define re2 absl_time_internal_cctz_time_zone_re2
#define AbslInternalSleepFor absl_time_internal_cctz_time_zone_AbslInternalSleepFor
#define AbslInternalReportFatalUsageError absl_time_internal_cctz_time_zone_AbslInternalReportFatalUsageError
#define AbslInternalMutexYield absl_time_internal_cctz_time_zone_AbslInternalMutexYield
#define AbslInternalPerThreadSemPost absl_time_internal_cctz_time_zone_AbslInternalPerThreadSemPost
#define AbslInternalPerThreadSemWait absl_time_internal_cctz_time_zone_AbslInternalPerThreadSemWait
#define AbslContainerInternalSampleEverything absl_time_internal_cctz_time_zone_AbslContainerInternalSampleEverything
#define AbslInternalSpinLockDelay absl_time_internal_cctz_time_zone_AbslInternalSpinLockDelay
#define AbslInternalSpinLockWake absl_time_internal_cctz_time_zone_AbslInternalSpinLockWake
#define AbslInternalAnnotateIgnoreReadsBegin absl_time_internal_cctz_time_zone_AbslInternalAnnotateIgnoreReadsBegin
#define AbslInternalAnnotateIgnoreReadsEnd absl_time_internal_cctz_time_zone_AbslInternalAnnotateIgnoreReadsEnd
#define AbslInternalGetFileMappingHint absl_time_internal_cctz_time_zone_AbslInternalGetFileMappingHint
#define ZetaSqlalloc absl_time_internal_cctz_time_zone_ZetaSqlalloc
#define ZetaSqlfree absl_time_internal_cctz_time_zone_ZetaSqlfree
#define ZetaSqlrealloc absl_time_internal_cctz_time_zone_ZetaSqlrealloc
#define FLAGS_nooutput_asc_explicitly absl_time_internal_cctz_time_zone_FLAGS_nooutput_asc_explicitly
#define FLAGS_nozetasql_use_customized_flex_istream absl_time_internal_cctz_time_zone_FLAGS_nozetasql_use_customized_flex_istream
#define FLAGS_output_asc_explicitly absl_time_internal_cctz_time_zone_FLAGS_output_asc_explicitly
#define FLAGS_zetasql_use_customized_flex_istream absl_time_internal_cctz_time_zone_FLAGS_zetasql_use_customized_flex_istream
#define FLAGS_zetasql_type_factory_nesting_depth_limit absl_time_internal_cctz_time_zone_FLAGS_zetasql_type_factory_nesting_depth_limit
#define FLAGS_zetasql_read_proto_field_optimized_path absl_time_internal_cctz_time_zone_FLAGS_zetasql_read_proto_field_optimized_path
#define FLAGS_zetasql_format_max_output_width absl_time_internal_cctz_time_zone_FLAGS_zetasql_format_max_output_width
#define FLAGS_zetasql_min_length_required_for_edit_distance absl_time_internal_cctz_time_zone_FLAGS_zetasql_min_length_required_for_edit_distance
#define FLAGS_zetasql_simple_iterator_call_time_now_rows_period absl_time_internal_cctz_time_zone_FLAGS_zetasql_simple_iterator_call_time_now_rows_period
#define FLAGS_nozetasql_type_factory_nesting_depth_limit absl_time_internal_cctz_time_zone_FLAGS_nozetasql_type_factory_nesting_depth_limit
#define FLAGS_nozetasql_read_proto_field_optimized_path absl_time_internal_cctz_time_zone_FLAGS_nozetasql_read_proto_field_optimized_path
#define FLAGS_nozetasql_format_max_output_width absl_time_internal_cctz_time_zone_FLAGS_nozetasql_format_max_output_width
#define FLAGS_nozetasql_min_length_required_for_edit_distance absl_time_internal_cctz_time_zone_FLAGS_nozetasql_min_length_required_for_edit_distance
#define FLAGS_nozetasql_simple_iterator_call_time_now_rows_period absl_time_internal_cctz_time_zone_FLAGS_nozetasql_simple_iterator_call_time_now_rows_period
#define ZetaSqlFlexTokenizerBase absl_time_internal_cctz_time_zone_ZetaSqlFlexTokenizerBase
#define ZetaSqlFlexLexer absl_time_internal_cctz_time_zone_ZetaSqlFlexLexer
#define UCaseMap absl_time_internal_cctz_time_zone_UCaseMap
#define protobuf_google_2fprotobuf_2fdescriptor_2eproto absl_time_internal_cctz_time_zone_protobuf_google_2fprotobuf_2fdescriptor_2eproto
#define protobuf_google_2fprotobuf_2ftimestamp_2eproto absl_time_internal_cctz_time_zone_protobuf_google_2fprotobuf_2ftimestamp_2eproto
#define protobuf_google_2fprotobuf_2fany_2eproto absl_time_internal_cctz_time_zone_protobuf_google_2fprotobuf_2fany_2eproto
#define protobuf_google_2fprotobuf_2fapi_2eproto absl_time_internal_cctz_time_zone_protobuf_google_2fprotobuf_2fapi_2eproto
#define protobuf_google_2fprotobuf_2fduration_2eproto absl_time_internal_cctz_time_zone_protobuf_google_2fprotobuf_2fduration_2eproto
#define protobuf_google_2fprotobuf_2fempty_2eproto absl_time_internal_cctz_time_zone_protobuf_google_2fprotobuf_2fempty_2eproto
#define protobuf_google_2fprotobuf_2ffield_5fmask_2eproto absl_time_internal_cctz_time_zone_protobuf_google_2fprotobuf_2ffield_5fmask_2eproto
#define protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto absl_time_internal_cctz_time_zone_protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto
#define protobuf_google_2fprotobuf_2fstruct_2eproto absl_time_internal_cctz_time_zone_protobuf_google_2fprotobuf_2fstruct_2eproto
#define protobuf_google_2fprotobuf_2ftype_2eproto absl_time_internal_cctz_time_zone_protobuf_google_2fprotobuf_2ftype_2eproto
#define protobuf_google_2fprotobuf_2fwrappers_2eproto absl_time_internal_cctz_time_zone_protobuf_google_2fprotobuf_2fwrappers_2eproto
#define protobuf_google_2ftype_2fdate_2eproto absl_time_internal_cctz_time_zone_protobuf_google_2ftype_2fdate_2eproto
#define protobuf_google_2ftype_2flatlng_2eproto absl_time_internal_cctz_time_zone_protobuf_google_2ftype_2flatlng_2eproto
#define protobuf_google_2ftype_2ftimeofday_2eproto absl_time_internal_cctz_time_zone_protobuf_google_2ftype_2ftimeofday_2eproto
#define protobuf_zetasql_2fpublic_2fproto_2fwire_5fformat_5fannotation_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2fproto_2fwire_5fformat_5fannotation_2eproto
#define protobuf_zetasql_2fparser_2fparse_5ftree_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fparser_2fparse_5ftree_2eproto
#define protobuf_zetasql_2fparser_2fast_5fenums_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fparser_2fast_5fenums_2eproto
#define protobuf_zetasql_2fproto_2foptions_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fproto_2foptions_2eproto
#define protobuf_zetasql_2fproto_2fsimple_5fcatalog_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fproto_2fsimple_5fcatalog_2eproto
#define protobuf_zetasql_2fproto_2ffunction_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fproto_2ffunction_2eproto
#define protobuf_zetasql_2fproto_2finternal_5ferror_5flocation_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fproto_2finternal_5ferror_5flocation_2eproto
#define protobuf_zetasql_2fpublic_2fbuiltin_5ffunction_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2fbuiltin_5ffunction_2eproto
#define protobuf_zetasql_2fpublic_2fdeprecation_5fwarning_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2fdeprecation_5fwarning_2eproto
#define protobuf_zetasql_2fpublic_2ffunction_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2ffunction_2eproto
#define protobuf_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto
#define protobuf_zetasql_2fpublic_2foptions_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2foptions_2eproto
#define protobuf_zetasql_2fpublic_2fsimple_5ftable_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2fsimple_5ftable_2eproto
#define protobuf_zetasql_2fpublic_2fsimple_5fconstant_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2fsimple_5fconstant_2eproto
#define protobuf_zetasql_2fpublic_2fparse_5flocation_5frange_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2fparse_5flocation_5frange_2eproto
#define protobuf_zetasql_2fpublic_2ftype_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2ftype_2eproto
#define protobuf_zetasql_2fpublic_2ftype_5fannotation_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2ftype_5fannotation_2eproto
#define protobuf_zetasql_2fpublic_2fvalue_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2fvalue_2eproto
#define protobuf_zetasql_2fpublic_2ftype_5fparameters_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2ftype_5fparameters_2eproto
#define protobuf_zetasql_2fpublic_2fcollation_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2fcollation_2eproto
#define protobuf_zetasql_2fpublic_2ferror_5flocation_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2ferror_5flocation_2eproto
#define protobuf_zetasql_2fpublic_2fannotation_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2fannotation_2eproto
#define protobuf_zetasql_2fpublic_2fsimple_5fvalue_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2fsimple_5fvalue_2eproto
#define protobuf_zetasql_2fpublic_2ffunctions_2fdatetime_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2ffunctions_2fdatetime_2eproto
#define protobuf_zetasql_2fpublic_2ffunctions_2fnormalize_5fmode_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2ffunctions_2fnormalize_5fmode_2eproto
#define protobuf_zetasql_2fpublic_2fproto_2ftype_5fannotation_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fpublic_2fproto_2ftype_5fannotation_2eproto
#define protobuf_zetasql_2freference_5fimpl_2fevaluator_5ftable_5fiterator_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2freference_5fimpl_2fevaluator_5ftable_5fiterator_2eproto
#define protobuf_zetasql_2fresolved_5fast_2fresolved_5fnode_5fkind_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fresolved_5fast_2fresolved_5fnode_5fkind_2eproto
#define protobuf_zetasql_2fresolved_5fast_2fresolved_5fast_5fenums_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fresolved_5fast_2fresolved_5fast_5fenums_2eproto
#define protobuf_zetasql_2fresolved_5fast_2fresolved_5fast_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fresolved_5fast_2fresolved_5fast_2eproto
#define protobuf_zetasql_2fresolved_5fast_2fserialization_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fresolved_5fast_2fserialization_2eproto
#define protobuf_zetasql_2fscripting_2fscript_5fexception_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fscripting_2fscript_5fexception_2eproto
#define protobuf_zetasql_2fscripting_2fscript_5fexecutor_5fstate_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fscripting_2fscript_5fexecutor_5fstate_2eproto
#define protobuf_zetasql_2fscripting_2fvariable_2eproto absl_time_internal_cctz_time_zone_protobuf_zetasql_2fscripting_2fvariable_2eproto

#define GO_EXPORT(def) export_absl_time_internal_cctz_time_zone_ ## def
#define U_ICU_ENTRY_POINT_RENAME(x) GO_EXPORT(x)

// include headers
//#define private public
#include "absl/time/internal/cctz/include/cctz/time_zone.h"
#include "absl/time/internal/cctz/include/cctz/zone_info_source.h"
//#undef private

// include sources
#include "absl/time/internal/cctz/src/time_zone_fixed.cc"
#include "absl/time/internal/cctz/src/time_zone_fixed.h"
#include "absl/time/internal/cctz/src/time_zone_format.cc"
#include "absl/time/internal/cctz/src/time_zone_if.cc"
#include "absl/time/internal/cctz/src/time_zone_if.h"
#include "absl/time/internal/cctz/src/time_zone_impl.cc"
#include "absl/time/internal/cctz/src/time_zone_impl.h"
#include "absl/time/internal/cctz/src/time_zone_info.cc"
#include "absl/time/internal/cctz/src/time_zone_info.h"
#include "absl/time/internal/cctz/src/time_zone_libc.cc"
#include "absl/time/internal/cctz/src/time_zone_libc.h"
#include "absl/time/internal/cctz/src/time_zone_lookup.cc"

#define kDigits absl_time_internal_cctzkDigits
#include "absl/time/internal/cctz/src/time_zone_posix.cc"
#undef kDigits

#include "absl/time/internal/cctz/src/time_zone_posix.h"
#include "absl/time/internal/cctz/src/tzfile.h"
#include "absl/time/internal/cctz/src/zone_info_source.cc"

// include dependencies
#include "go-absl/time/go_internal/cctz/civil_time/export.inc"
#include "go-absl/base/config/export.inc"

#include "bridge.h"

#include "bridge_cc.inc"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "bridge.inc"

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* absl_time_internal_cctz_time_zone_bind_cc */
