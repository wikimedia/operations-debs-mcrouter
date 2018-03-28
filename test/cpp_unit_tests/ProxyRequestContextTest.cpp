/*
 *  Copyright (c) 2016-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */
#include <type_traits>

#include "mcrouter/ProxyRequestContextTyped.h"
#include "mcrouter/lib/carbon/NoopAdditionalLogger.h"

namespace facebook {
namespace memcache {
namespace mcrouter {

namespace {

struct RouterInfoOne {};

struct RouterInfoTwo {
  using AdditionalLogger = int;
};

static_assert(
    std::is_same<
        typename detail::RouterAdditionalLogger<RouterInfoOne>::type,
        carbon::NoopAdditionalLogger>::value,
    "Expected noop logger, as this RouterInfo has no AdditionalLogger.");

static_assert(
    std::is_same<
        typename detail::RouterAdditionalLogger<RouterInfoTwo>::type,
        int>::value,
    "Expected int, as this RouterInfo has AdditionalLogger as int.");

} // anonymous namespace

} // mcrouter
} // memcache
} // facebook
