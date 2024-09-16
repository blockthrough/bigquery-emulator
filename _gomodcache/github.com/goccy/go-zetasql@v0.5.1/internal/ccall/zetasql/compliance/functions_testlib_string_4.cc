//
// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include <vector>

#include "zetasql/compliance/functions_testlib_common.h"
#include "zetasql/public/value.h"
#include "zetasql/testing/test_function.h"
#include "zetasql/testing/using_test_value.cc"  // NOLINT

namespace zetasql {

static constexpr absl::StatusCode OUT_OF_RANGE = absl::StatusCode::kOutOfRange;

std::vector<FunctionTestCall> GetFunctionTestsInstr2() {
  return {
      // instr(bytes, bytes, int64_t) -> int64_t
      {"instr", {NullBytes(), Bytes(""), 1ll}, NullInt64()},
      {"instr", {NullBytes(), Bytes("x"), 1ll}, NullInt64()},
      {"instr", {Bytes(""), NullBytes(), 1ll}, NullInt64()},
      {"instr", {NullBytes(), NullBytes(), 1ll}, NullInt64()},
      {"instr", {Bytes(""), Bytes("x"), NullInt64()}, NullInt64()},
      {"instr", {Bytes(""), Bytes(""), NullInt64()}, NullInt64()},
      {"instr", {NullBytes(), Bytes("x"), NullInt64()}, NullInt64()},
      {"instr", {NullBytes(), Bytes(""), NullInt64()}, NullInt64()},
      {"instr", {Bytes(""), NullBytes(), NullInt64()}, NullInt64()},
      {"instr", {Bytes("x"), NullBytes(), NullInt64()}, NullInt64()},
      {"instr", {NullBytes(), NullBytes(), NullInt64()}, NullInt64()},
      {"instr", {Bytes(""), Bytes("x"), 0ll}, NullInt64(), OUT_OF_RANGE},
      {"instr", {Bytes(""), Bytes("x"), 1ll}, 0ll},
      {"instr", {Bytes(""), Bytes("x"), 2ll}, 0ll},
      {"instr", {Bytes("x"), Bytes(""), 1ll}, 1ll},
      {"instr", {Bytes("x"), Bytes(""), 2ll}, 2ll},
      {"instr", {Bytes("x"), Bytes(""), 3ll}, 0ll},
      {"instr", {Bytes("xx"), Bytes(""), 1ll}, 1ll},
      {"instr", {Bytes("xx"), Bytes(""), 2ll}, 2ll},
      {"instr", {Bytes("xx"), Bytes(""), 3ll}, 3ll},
      {"instr", {Bytes("xx"), Bytes(""), 4ll}, 0ll},
      {"instr", {Bytes("zгl"), Bytes(""), 1ll}, 1ll},
      {"instr", {Bytes("zгl"), Bytes(""), 2ll}, 2ll},
      {"instr", {Bytes("zгl"), Bytes(""), 3ll}, 3ll},
      {"instr", {Bytes("zгl"), Bytes(""), 4ll}, 4ll},
      {"instr", {Bytes("zгl"), Bytes(""), 5ll}, 5ll},
      {"instr", {Bytes("zгl"), Bytes(""), 6ll}, 0ll},
      {"instr", {Bytes(""), Bytes(""), 1ll}, 1ll},
      {"instr", {Bytes(""), Bytes(""), 2ll}, 0ll},
      {"instr", {Bytes("xxx"), Bytes("x"), 1ll}, 1ll},
      {"instr", {Bytes("xxx"), Bytes("x"), 2ll}, 2ll},
      {"instr", {Bytes("xxx"), Bytes("x"), 3ll}, 3ll},
      {"instr", {Bytes("xxx"), Bytes("x"), 4ll}, 0ll},
      {"instr", {Bytes("xxx"), Bytes("x"), int64max}, 0ll},
      {"instr", {Bytes("abcdef"), Bytes("cd"), 1ll}, 3ll},
      {"instr", {Bytes("abcdef"), Bytes("cd"), 3ll}, 3ll},
      {"instr", {Bytes("abcdef"), Bytes("cd"), 4ll}, 0ll},
      {"instr", {Bytes("abcdef"), Bytes("cd"), 8ll}, 0ll},
      {"instr", {Bytes("abcdef"), Bytes("cd"), int64max}, 0ll},
      {"instr", {Bytes("abcdefabcdef"), Bytes("xz"), 1ll}, 0ll},
      {"instr", {Bytes("abcdefabcdef"), Bytes("xz"), 30ll}, 0ll},
      {"instr", {Bytes("\0abcedf"), Bytes("abc"), 1ll}, 2ll},
      {"instr", {Bytes("\0abcedf"), Bytes("abc"), 2ll}, 2ll},
      {"instr", {Bytes("\0abcedf"), Bytes("abc"), 3ll}, 0ll},
      {"instr", {Bytes("abca\0b\0c\0"), Bytes("a\0b\0c"), 3ll}, 4ll},
      {"instr", {Bytes("abca\0b\0c\0"), Bytes("a\0b\0c"), 4ll}, 4ll},
      {"instr", {Bytes("abca\0b\0c\0"), Bytes("a\0b\0c"), 5ll}, 0ll},
      {"instr", {Bytes("zгдl"), Bytes("дl"), 1ll}, 4ll},
      {"instr", {Bytes("zгдl"), Bytes("дl"), 4ll}, 4ll},
      {"instr", {Bytes("zгдl"), Bytes("дl"), 5ll}, 0ll},

      {"instr", {NullBytes(), Bytes(""), -1ll}, NullInt64()},
      {"instr", {NullBytes(), Bytes("x"), -1ll}, NullInt64()},
      {"instr", {Bytes(""), NullBytes(), -1ll}, NullInt64()},
      {"instr", {NullBytes(), NullBytes(), -1ll}, NullInt64()},
      {"instr", {Bytes(""), Bytes("x"), -1ll}, 0ll},
      {"instr", {Bytes(""), Bytes("x"), -2ll}, 0ll},
      {"instr", {Bytes("x"), Bytes(""), -1ll}, 2ll},
      {"instr", {Bytes("x"), Bytes(""), -2ll}, 1ll},
      {"instr", {Bytes("x"), Bytes(""), -3ll}, 0ll},
      {"instr", {Bytes("xx"), Bytes(""), -1ll}, 3ll},
      {"instr", {Bytes("xx"), Bytes(""), -2ll}, 2ll},
      {"instr", {Bytes("xx"), Bytes(""), -3ll}, 1ll},
      {"instr", {Bytes("xx"), Bytes(""), -4ll}, 0ll},
      {"instr", {Bytes("zгl"), Bytes(""), -1ll}, 5ll},
      {"instr", {Bytes("zгl"), Bytes(""), -2ll}, 4ll},
      {"instr", {Bytes("zгl"), Bytes(""), -3ll}, 3ll},
      {"instr", {Bytes("zгl"), Bytes(""), -4ll}, 2ll},
      {"instr", {Bytes("zгl"), Bytes(""), -5ll}, 1ll},
      {"instr", {Bytes("zгl"), Bytes(""), -6ll}, 0ll},
      {"instr", {Bytes(""), Bytes(""), -1ll}, 1ll},
      {"instr", {Bytes(""), Bytes(""), -2ll}, 0ll},
      {"instr", {Bytes("xxx"), Bytes("x"), -1ll}, 3ll},
      {"instr", {Bytes("xxx"), Bytes("x"), -2ll}, 2ll},
      {"instr", {Bytes("xxx"), Bytes("x"), -3ll}, 1ll},
      {"instr", {Bytes("xxx"), Bytes("x"), -4ll}, 0ll},
      {"instr", {Bytes("xxx"), Bytes("x"), int64min}, 0ll},
      {"instr", {Bytes("abcdef"), Bytes("cd"), -1ll}, 3ll},
      {"instr", {Bytes("abcdef"), Bytes("cd"), -3ll}, 3ll},
      {"instr", {Bytes("abcdef"), Bytes("cd"), -4ll}, 3ll},
      {"instr", {Bytes("abcdef"), Bytes("cd"), -5ll}, 0ll},
      {"instr", {Bytes("abcdef"), Bytes("cd"), int64min}, 0ll},
      {"instr", {Bytes("abcdefabcdef"), Bytes("xz"), -1ll}, 0ll},
      {"instr", {Bytes("abcdefabcdef"), Bytes("xz"), -30ll}, 0ll},
      {"instr", {Bytes("\0abcedf"), Bytes("abc"), -1ll}, 2ll},
      {"instr", {Bytes("\0abcedf"), Bytes("abc"), -4ll}, 2ll},
      {"instr", {Bytes("\0abcedf"), Bytes("abc"), -5ll}, 2ll},
      {"instr", {Bytes("\0abcedf"), Bytes("abc"), -6ll}, 2ll},
      {"instr", {Bytes("\0abcedf"), Bytes("abc"), -7ll}, 0ll},
      {"instr", {Bytes("abca\0b\0c\0"), Bytes("a\0b\0c"), -1ll}, 4ll},
      {"instr", {Bytes("abca\0b\0c\0"), Bytes("a\0b\0c"), -2ll}, 4ll},
      {"instr", {Bytes("abca\0b\0c\0"), Bytes("a\0b\0c"), -3ll}, 4ll},
      {"instr", {Bytes("abca\0b\0c\0"), Bytes("a\0b\0c"), -5ll}, 4ll},
      {"instr", {Bytes("abca\0b\0c\0"), Bytes("a\0b\0c"), -6ll}, 4ll},
      {"instr", {Bytes("abca\0b\0c\0"), Bytes("a\0b\0c"), -7ll}, 0ll},
      {"instr", {Bytes("zгдlг"), Bytes("дl"), -1ll}, 4ll},
      {"instr", {Bytes("zгдlг"), Bytes("дl"), -2ll}, 4ll},
      {"instr", {Bytes("zгдlг"), Bytes("дl"), -3ll}, 4ll},
      {"instr", {Bytes("zгдlг"), Bytes("дl"), -4ll}, 4ll},
      {"instr", {Bytes("zгдlг"), Bytes("дl"), -5ll}, 4ll},
      {"instr", {Bytes("zгдlг"), Bytes("дl"), -6ll}, 0ll},

      // instr(string, string, int64_t, int64_t) -> int64_t
      {"instr", {NullString(), "", 1ll, 1ll}, NullInt64()},
      {"instr", {NullString(), "x", 1ll, 1ll}, NullInt64()},
      {"instr", {"", NullString(), 1ll, 1ll}, NullInt64()},
      {"instr", {NullString(), NullString(), 1ll, 1ll}, NullInt64()},
      {"instr", {"", "x", NullInt64(), 1ll}, NullInt64()},
      {"instr", {"", "", NullInt64(), 1ll}, NullInt64()},
      {"instr", {NullString(), "x", NullInt64(), 1ll}, NullInt64()},
      {"instr", {NullString(), "", NullInt64(), 1ll}, NullInt64()},
      {"instr", {"", NullString(), NullInt64(), 1ll}, NullInt64()},
      {"instr", {"x", NullString(), NullInt64(), 1ll}, NullInt64()},
      {"instr", {NullString(), NullString(), NullInt64(), 1ll}, NullInt64()},
      {"instr", {"", "x", 0ll, 1ll}, NullInt64(), OUT_OF_RANGE},
      {"instr", {NullString(), "", 1ll, NullInt64()}, NullInt64()},
      {"instr", {NullString(), "x", 1ll, NullInt64()}, NullInt64()},
      {"instr", {"", NullString(), 1ll, NullInt64()}, NullInt64()},
      {"instr", {NullString(), NullString(), 1ll, NullInt64()}, NullInt64()},
      {"instr", {"", "x", NullInt64(), NullInt64()}, NullInt64()},
      {"instr", {"", "", NullInt64(), NullInt64()}, NullInt64()},
      {"instr", {NullString(), "x", NullInt64(), NullInt64()}, NullInt64()},
      {"instr", {NullString(), "", NullInt64(), NullInt64()}, NullInt64()},
      {"instr", {"", NullString(), NullInt64(), NullInt64()}, NullInt64()},
      {"instr", {"x", NullString(), NullInt64(), NullInt64()}, NullInt64()},
      {"instr",
       {NullString(), NullString(), NullInt64(), NullInt64()},
       NullInt64()},
      {"instr", {"x", "x", 1ll, NullInt64()}, NullInt64()},
      {"instr", {"", "x", 1ll, 0ll}, NullInt64(), OUT_OF_RANGE},
      {"instr", {"", "x", 1ll, 1ll}, 0ll},
      {"instr", {"", "x", 1ll, 2ll}, 0ll},
      {"instr", {"xxx", "x", 1ll, 1ll}, 1ll},
      {"instr", {"xxx", "x", 1ll, 2ll}, 2ll},
      {"instr", {"xxx", "x", 1ll, 3ll}, 3ll},
      {"instr", {"xxx", "x", 1ll, 4ll}, 0ll},
      {"instr", {"xxx", "x", 2ll, 1ll}, 2ll},
      {"instr", {"xxx", "x", 2ll, 2ll}, 3ll},
      {"instr", {"xxx", "x", 2ll, 3ll}, 0ll},
      {"instr", {"xxx", "x", 3ll, 1ll}, 3ll},
      {"instr", {"xxx", "x", 3ll, 2ll}, 0ll},
      {"instr", {"xxx", "x", 1ll, int64max}, 0ll},
      {"instr", {"xxx", "x", 2ll, int64max}, 0ll},
      {"instr", {"abcdef", "cd", 1ll, 1ll}, 3ll},
      {"instr", {"abcdef", "cd", 1ll, 2ll}, 0ll},
      {"instr", {"abcdef", "cd", 3ll, 1ll}, 3ll},
      {"instr", {"abcdef", "cd", 3ll, 2ll}, 0ll},
      {"instr", {"abcdef", "cd", 3ll, 5ll}, 0ll},
      {"instr", {"abcdef", "cd", int64max, int64max}, 0ll},
      {"instr", {"abcdefabcdef", "xz", 1ll, 1ll}, 0ll},
      {"instr", {"abcdefabcdef", "xz", 1ll, 5ll}, 0ll},
      {"instr", {"abcdefabcdef", "cd", 1ll, 1ll}, 3ll},
      {"instr", {"abcdefabcdef", "cd", 1ll, 2ll}, 9ll},
      {"instr", {"abcdefabcdef", "cd", 4ll, 1ll}, 9ll},
      {"instr", {"abcdefabcdef", "cd", 4ll, 2ll}, 0ll},
      {"instr", {"aaabbaaa", "aa", 1ll, 1ll}, 1ll},
      {"instr", {"aaabbaaa", "aa", 1ll, 2ll}, 2ll},
      {"instr", {"aaabbaaa", "aa", 1ll, 3ll}, 6ll},
      {"instr", {"aaabbaaa", "aa", 1ll, 4ll}, 7ll},
      {"instr", {"aaabbaaa", "aa", 1ll, 5ll}, 0ll},
      {"instr", {"aaabbaaa", "aa", 2ll, 1ll}, 2ll},
      {"instr", {"aaabbaaa", "aa", 2ll, 2ll}, 6ll},
      {"instr", {"aaabbaaa", "aa", 7ll, 1ll}, 7ll},
      {"instr", {"aaabbaaa", "aa", 7ll, 2ll}, 0ll},
      {"instr", {"\0abce\0dabcf", "abc", 1ll, 1ll}, 2ll},
      {"instr", {"\0abce\0dabcf", "abc", 1ll, 2ll}, 8ll},
      {"instr", {"\0abce\0dabcf", "abc", 2ll, 1ll}, 2ll},
      {"instr", {"\0abce\0dabcf", "abc", 2ll, 2ll}, 8ll},
      {"instr", {"\0abce\0dabcf", "abc", 5ll, 1ll}, 8ll},
      {"instr", {"\0abce\0dabcf", "abc", 5ll, 2ll}, 0ll},
      {"instr", {"abca\0b\0c\0", "a\0b\0c", 3ll, 1ll}, 4ll},
      {"instr", {"zгдlгдl", "дl", 1ll, 1ll}, 3ll},
      {"instr", {"zгдlгдl", "дl", 1ll, 2ll}, 6ll},
      {"instr", {"zгдlгдl", "дl", 1ll, 3ll}, 0ll},
      {"instr", {"zгдlгдl", "дl", 4ll, 1ll}, 6ll},
      {"instr", {"zгдlгдl", "дl", 4ll, 2ll}, 0ll},

      {"instr", {NullString(), "", -1ll, 1ll}, NullInt64()},
      {"instr", {NullString(), "x", -1ll, 1ll}, NullInt64()},
      {"instr", {"", NullString(), -1ll, 1ll}, NullInt64()},
      {"instr", {NullString(), NullString(), -1ll, 1ll}, NullInt64()},
      {"instr", {"", "x", -1ll, 1ll}, 0ll},
      {"instr", {"", "x", -1ll, 2ll}, 0ll},
      {"instr", {"", "x", -2ll, 1ll}, 0ll},
      {"instr", {"", "x", -2ll, 2ll}, 0ll},
      {"instr", {"xxx", "x", -1ll, 1ll}, 3ll},
      {"instr", {"xxx", "x", -1ll, 2ll}, 2ll},
      {"instr", {"xxx", "x", -1ll, 3ll}, 1ll},
      {"instr", {"xxx", "x", -1ll, 4ll}, 0ll},
      {"instr", {"xxx", "x", -2ll, 1ll}, 2ll},
      {"instr", {"xxx", "x", -2ll, 2ll}, 1ll},
      {"instr", {"xxx", "x", -2ll, 3ll}, 0ll},
      {"instr", {"xxx", "x", -3ll, 1ll}, 1ll},
      {"instr", {"xxx", "x", -3ll, 2ll}, 0ll},
      {"instr", {"xxx", "x", -4ll, 1ll}, 0ll},
      {"instr", {"xxx", "x", int64min, 1ll}, 0ll},
      {"instr", {"abcdef", "cd", -1ll, 1ll}, 3ll},
      {"instr", {"abcdef", "cd", -1ll, 2ll}, 0ll},
      {"instr", {"abcdef", "cd", -3ll, 1ll}, 3ll},
      {"instr", {"abcdef", "cd", -3ll, 2ll}, 0ll},
      {"instr", {"abcdef", "cd", -4ll, 1ll}, 3ll},
      {"instr", {"abcdef", "cd", -4ll, 2ll}, 0ll},
      {"instr", {"abcdef", "cd", -5ll, 1ll}, 0ll},
      {"instr", {"abcdef", "cd", -5ll, 5ll}, 0ll},
      {"instr", {"abcdefabcdef", "xz", -1ll, 1ll}, 0ll},
      {"instr", {"abcdefabcdef", "xz", -1ll, 2ll}, 0ll},
      {"instr", {"abcdefabcdef", "xz", -30ll, 1ll}, 0ll},
      {"instr", {"abcdefabcdef", "xz", -30ll, 2ll}, 0ll},
      {"instr", {"abcdefabcdef", "cd", -1ll, 1ll}, 9ll},
      {"instr", {"abcdefabcdef", "cd", -1ll, 2ll}, 3ll},
      {"instr", {"abcdefabcdef", "cd", -4ll, 1ll}, 9ll},
      {"instr", {"abcdefabcdef", "cd", -4ll, 2ll}, 3ll},
      {"instr", {"abcdefabcdef", "cd", -5ll, 1ll}, 3ll},
      {"instr", {"abcdefabcdef", "cd", -5ll, 2ll}, 0ll},
      {"instr", {"aaabbaaa", "aa", -1ll, 1ll}, 7ll},
      {"instr", {"aaabbaaa", "aa", -1ll, 2ll}, 6ll},
      {"instr", {"aaabbaaa", "aa", -1ll, 3ll}, 2ll},
      {"instr", {"aaabbaaa", "aa", -1ll, 4ll}, 1ll},
      {"instr", {"aaabbaaa", "aa", -1ll, 5ll}, 0ll},
      {"instr", {"aaabbaaa", "aa", -2ll, 1ll}, 7ll},
      {"instr", {"aaabbaaa", "aa", -2ll, 2ll}, 6ll},
      {"instr", {"aaabbaaa", "aa", -7ll, 1ll}, 2ll},
      {"instr", {"aaabbaaa", "aa", -7ll, 2ll}, 1ll},
      {"instr", {"aaabbaaa", "aa", -8ll, 1ll}, 1ll},
      {"instr", {"aaabbaaa", "aa", -8ll, 2ll}, 0ll},
      {"instr", {"\0abce\0dabcf", "abc", -1ll, 1ll}, 8ll},
      {"instr", {"\0abce\0dabcf", "abc", -1ll, 2ll}, 2ll},
      {"instr", {"\0abce\0dabcf", "abc", -3ll, 1ll}, 8ll},
      {"instr", {"\0abce\0dabcf", "abc", -3ll, 2ll}, 2ll},
      {"instr", {"\0abce\0dabcf", "abc", -5ll, 1ll}, 2ll},
      {"instr", {"\0abce\0dabcf", "abc", -5ll, 2ll}, 0ll},
      {"instr", {"abca\0b\0c\0", "a\0b\0c", -1ll, 1ll}, 4ll},
      {"instr", {"abca\0b\0c\0", "a\0b\0c", -6ll, 1ll}, 4ll},
      {"instr", {"zгдlгдl", "дl", -1ll, 1ll}, 6ll},
      {"instr", {"zгдlгдl", "дl", -1ll, 2ll}, 3ll},
      {"instr", {"zгдlгдl", "дl", -1ll, 3ll}, 0ll},
      {"instr", {"zгдlгдl", "дl", -2ll, 1ll}, 6ll},
      {"instr", {"zгдlгдl", "дl", -2ll, 2ll}, 3ll},
      {"instr", {"zгдlгдl", "дl", -3ll, 1ll}, 3ll},
      {"instr", {"zгдlгдl", "дl", -3ll, 2ll}, 0ll},
      {"instr", {"zгдlгдl", "дl", -5ll, 1ll}, 3ll}};
}

}  // namespace zetasql
