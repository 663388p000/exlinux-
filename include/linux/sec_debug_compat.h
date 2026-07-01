#ifndef __SEC_DEBUG_COMPAT_H__
#define __SEC_DEBUG_COMPAT_H__

#include <linux/printk.h>

#define ASL4 4

#define pr_auto(level, fmt, ...) \
	pr_info(fmt, ##__VA_ARGS__)

#define pr_auto_once(level) \
	do { } while (0)

#define pr_auto_disable(level) \
	do { } while (0)

#endif
