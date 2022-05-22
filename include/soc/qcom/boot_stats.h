/* SPDX-License-Identifier: GPL-2.0-only
 * Copyright (c) 2011-2021, The Linux Foundation. All rights reserved.
 */
#ifndef __QCOM_BOOT_STATS_H__
#define __QCOM_BOOT_STATS_H__

static inline int init_bootkpi(void) { return 0; }
static inline void exit_bootkpi(void) { };
static inline void place_marker(char *name) { };
static inline void destroy_marker(const char *name) { };
static inline int boot_marker_enabled(void) { return 0; }
static inline unsigned long long msm_timer_get_sclk_ticks(void) { return -EINVAL; }
#endif /* __QCOM_BOOT_STATS_H__ */
