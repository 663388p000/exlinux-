/* SPDX-License-Identifier: GPL-2.0 */

#ifndef __SEC_INPUT_COMPAT_H__
#define __SEC_INPUT_COMPAT_H__

#include <linux/device.h>
#ifndef INPUT_FEATURE_ENABLE_SETTINGS_AOT
#define INPUT_FEATURE_ENABLE_SETTINGS_AOT        (1 << 0)
#endif

#ifndef INPUT_FEATURE_ENABLE_SYSINPUT_ENABLED
#define INPUT_FEATURE_ENABLE_SYSINPUT_ENABLED    (1 << 1)
#endif

#ifndef INPUT_FEATURE_ENABLE_PROX_LP_SCAN_ENABLED
#define INPUT_FEATURE_ENABLE_PROX_LP_SCAN_ENABLED (1 << 2)
#endif

#ifndef input_err
#define input_err(enable, dev, fmt, ...) \
        dev_err(dev, fmt, ##__VA_ARGS__)
#endif

#ifndef input_info
#define input_info(enable, dev, fmt, ...) \
        dev_info(dev, fmt, ##__VA_ARGS__)
#endif

#ifndef input_dbg
#define input_dbg(enable, dev, fmt, ...) \
        dev_dbg(dev, fmt, ##__VA_ARGS__)
#endif

#ifndef input_raw_info
#define input_raw_info(enable, dev, fmt, ...) \
        dev_info(dev, fmt, ##__VA_ARGS__)
#endif

#ifndef input_raw_err
#define input_raw_err(enable, dev, fmt, ...) \
        dev_err(dev, fmt, ##__VA_ARGS__)
#endif

#endif /* __SEC_INPUT_COMPAT_H__ */
