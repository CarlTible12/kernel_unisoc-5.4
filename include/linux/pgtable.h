/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Compatibility shim for kernels < 5.10, where page table helpers
 * lived under <asm/pgtable.h> instead of the unified <linux/pgtable.h>.
 * Added to satisfy KernelSU-Next, which targets 5.10+ trees.
 */
#ifndef _LINUX_PGTABLE_H
#define _LINUX_PGTABLE_H

#include <asm/pgtable.h>

#endif /* _LINUX_PGTABLE_H */
