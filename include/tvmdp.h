/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright (c) 2023 Marvell.
 */

#ifndef _LIBTVMDP_C_H_
#define _LIBTVMDP_C_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * TVMDP Hello C wrapper
 *
 * @return
 *   0 on success, < 0 on error
 */
int tvmdp_hello(void);

#ifdef __cplusplus
}
#endif

#endif /* _LIBTVMDP_C_H_ */