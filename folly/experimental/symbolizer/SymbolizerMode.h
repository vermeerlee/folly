/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

namespace folly {
namespace symbolizer {

enum class LocationInfoMode {
  // Don't resolve location info.
  DISABLED,
  // Perform CU lookup using .debug_aranges (might be incomplete).
  FAST,
  // Scan all CU in .debug_info (slow!) on .debug_aranges lookup failure.
  FULL,
  // Scan .debug_info (super slower, use with caution) for inline functions in
  // addition to FULL.
  FULL_WITH_INLINE,
};

} // namespace symbolizer
} // namespace folly
