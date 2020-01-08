/*
 * Arm SCP/MCP Software
 * Copyright (c) 2020, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SCP_SOFTWARE_MMAP_H
#define SCP_SOFTWARE_MMAP_H

#include "scp_soc_mmap.h"

#include <fwk_macros.h>

/* SCP ROM and RAM firmware size loaded on main memory */
#define SCP_BOOT_ROM_SIZE                  (64 * 1024)
#define SCP_DTC_RAM_SIZE                   (256 * 1024)

/* SCP RAM firmware base and size on the flash */
#define SCP_RAMFW_IMAGE_FLASH_BASE         (SCP_NOR0_FLASH_BASE + 0x03D80000)
#define SCP_RAMFW_IMAGE_FLASH_SIZE         (256 * FWK_KIB)

/* SCP trusted and non-trusted RAM base address */
#define SCP_TRUSTED_RAM_BASE               (SCP_SYSTEM_ACCESS_PORT1_BASE + \
                                            0x04000000)
#define SCP_NONTRUSTED_RAM_BASE            (SCP_SYSTEM_ACCESS_PORT1_BASE + \
                                            0x06000000)

/* Secure Shared memory between AP and SCP */
#define SCP_AP_SHARED_SECURE_BASE          (SCP_TRUSTED_RAM_BASE)
#define SCP_AP_SHARED_SECURE_SIZE          (4 * FWK_KIB)

/* AP Context Area */
#define SCP_AP_CONTEXT_BASE                (SCP_AP_SHARED_SECURE_BASE + \
                                            SCP_AP_SHARED_SECURE_SIZE - \
                                            SCP_AP_CONTEXT_SIZE)
#define SCP_AP_CONTEXT_SIZE                (64)

#endif /* SCP_SOFTWARE_MMAP_H */
