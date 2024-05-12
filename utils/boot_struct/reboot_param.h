/***************************************************************************
 *
 * Copyright 2015-2019 BES.
 * All rights reserved. All unpublished rights reserved.
 *
 * No part of this work may be used or reproduced in any form or by any
 * means, or stored in a database or retrieval system, without prior written
 * permission of BES.
 *
 * Use of this work is governed by a license granted by BES.
 * This work contains confidential and proprietary information of
 * BES. which is protected by copyright, trade secret,
 * trademark and other intellectual property rights.
 *
 ****************************************************************************/
#ifndef __REBOOT_PARAM_H__
#define __REBOOT_PARAM_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "stdint.h"

#ifndef __uint32_t_defined
typedef unsigned int uint32_t;
#define __uint32_t_defined
#endif

struct REBOOT_PARAM_T {
    uint32_t reserved[4];
};

#ifdef __cplusplus
}
#endif

#endif

