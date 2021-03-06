/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#ifndef MODULES_PLATFORM_HW_ESDCAN_UTILS_H_
#define MODULES_PLATFORM_HW_ESDCAN_UTILS_H_

#include "esdcan_test.h"

#include <ostream>

/**
 * @namespace apollo::platform::hw
 * @brief apollo::platform::hw
 */
namespace apollo {
namespace platform {
namespace hw {

void esdcan_print_summary(std::ostream &os, const EsdCanDetails &details);

void esdcan_print_test_result(
    std::ostream &os, const EsdCanDetails &details);

void esdcan_print_if_status(int id, const CAN_IF_STATUS &if_status);

void esdcan_print_stats(const NTCAN_BUS_STATISTIC &stats);

void esdcan_print_ctrl_state(const NTCAN_CTRL_STATE &c_state);

void esdcan_print_bitrate(const NTCAN_BITRATE &bitrate);

}  // namespace hw
}  // namespace platform
}  // namespace apollo

#endif  // MODULES_PLATFORM_HW_ESDCAN_UTILS_H_
