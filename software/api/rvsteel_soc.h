// ----------------------------------------------------------------------------
// Copyright (c) 2020-2024 RISC-V Steel contributors
//
// This work is licensed under the MIT License, see LICENSE file for details.
// SPDX-License-Identifier: MIT
// ----------------------------------------------------------------------------

#ifndef __RVSTEEL_SOC__
#define __RVSTEEL_SOC__

#include "rvsteel_mtimer.h"
#include "rvsteel_uart.h"

// Base address
#define MAIN_BASE_ADDR 0x00000000U

// Map devices
#define MTIMER0_BASE (MAIN_BASE_ADDR + 0x10000000U)
#define UART0_BASE (MAIN_BASE_ADDR + 0x80000000U)

// List devices
#define MTIMER0 ((MTimerDevice *)MTIMER0_BASE)
#define UART0 ((UartDevice *)UART0_BASE)

#endif // __RVSTEEL_SOC__
