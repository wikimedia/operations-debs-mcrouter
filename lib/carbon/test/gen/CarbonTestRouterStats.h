/*
 *  Copyright (c) 2017-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */
#pragma once

#include <array>

#include <folly/Range.h>
#include <folly/dynamic.h>

namespace carbon {
namespace test {

struct CarbonTestRouterStatsConfig {
  static constexpr size_t kNumRequestGroups = 4;
  static constexpr std::array<folly::StringPiece, 1 * kNumRequestGroups>
      sumStatNames{{folly::StringPiece("cmd_AnotherRequest_count"),
                    folly::StringPiece("cmd_test_count"),
                    folly::StringPiece("cmd_testStringKey_count"),
                    folly::StringPiece("cmd_yet_another_count")}};
  static constexpr std::array<folly::StringPiece, 3 * kNumRequestGroups>
      rateStatNames{{folly::StringPiece("cmd_AnotherRequest"),
                     folly::StringPiece("cmd_test"),
                     folly::StringPiece("cmd_testStringKey"),
                     folly::StringPiece("cmd_yet_another"),
                     folly::StringPiece("cmd_AnotherRequest_out"),
                     folly::StringPiece("cmd_test_out"),
                     folly::StringPiece("cmd_testStringKey_out"),
                     folly::StringPiece("cmd_yet_another_out"),
                     folly::StringPiece("cmd_AnotherRequest_out_all"),
                     folly::StringPiece("cmd_test_out_all"),
                     folly::StringPiece("cmd_testStringKey_out_all"),
                     folly::StringPiece("cmd_yet_another_out_all")}};

  template <class Request>
  static constexpr size_t getStatGroup();
};

template <>
inline constexpr size_t
CarbonTestRouterStatsConfig::getStatGroup<AnotherRequest>() {
  return 0; // stat group 'AnotherRequest'
}

template <>
inline constexpr size_t
CarbonTestRouterStatsConfig::getStatGroup<TestRequest>() {
  return 1; // stat group 'test'
}

template <>
inline constexpr size_t
CarbonTestRouterStatsConfig::getStatGroup<TestRequestStringKey>() {
  return 2; // stat group 'testStringKey'
}

template <>
inline constexpr size_t
CarbonTestRouterStatsConfig::getStatGroup<test2::util::YetAnotherRequest>() {
  return 3; // stat group 'yet_another'
}

} // namespace test
} // namespace carbon
