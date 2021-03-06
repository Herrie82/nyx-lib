// Copyright (c) 2010-2018 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0

/**
 * @file nyx_device_display_internal.h
 *
 * @brief Internal implementation of the display module private fields
 *
 */


#ifndef _NYX_DEVICE_DISPLAY_INTERNAL_H_
#define _NYX_DEVICE_DISPLAY_INTERNAL_H_

#include <nyx/module/nyx_device_internal.h>

typedef struct
{
	nyx_device_t original;
	nyx_display_metrics_t display_metrics;

} nyx_display_device_t;

#endif /* _NYX_DEVICE_DEVICE_INFO_INTERNAL_H_ */
