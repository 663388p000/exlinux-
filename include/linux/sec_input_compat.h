/* SPDX-License-Identifier: GPL-2.0 */

#ifndef __SEC_INPUT_COMPAT_H__
#define __SEC_INPUT_COMPAT_H__

#include <linux/device.h>

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
