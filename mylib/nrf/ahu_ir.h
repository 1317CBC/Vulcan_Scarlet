/*
 * Copyright (c) 2022 Libre Solar Technologies GmbH
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef AHU_IR_H   /* NOLINT */
#define AHU_IR_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/device.h>
#include <zephyr/drivers/uart.h>
#include <zephyr/devicetree.h>

#include <zephyr/drivers/pwm.h>

#include "./ahu_ble.h"

// Define two devices
#define PERIOD_USEC 26

#define D1  0
#define D2  1

#define A1  1
#define A2  2
#define A3  3
#define A4  4
#define A5  7
#define A6  8

extern void nec_start(uint16_t act);
extern void ir_pulse(uint64_t ms);
extern void ir_gap(uint64_t ms);
extern void ir_output_int(void);
extern void ir_tx_thread(void);

#endif  // CSSE4011_TESTDIR_PRAC2_MYLIB_AHU_BLE_H_  // NOLINT