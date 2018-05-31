/*
 * Copyright (c) 2018 Particle Industries, Inc.  All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// This configuration overrides the defaults defined in the following files of the nRF SDK:
//
// modules/nrfx/templates/nRF52840/nrfx_config.h
// config/nrf52840/config/sdk_config.h

#define NRFX_GPIOTE_ENABLED 0

#define NRFX_RTC_ENABLED  0
#define NRFX_RTC0_ENABLED 0 // Used by SoftDevice
#define NRFX_RTC1_ENABLED 0 // Reserved for FreeRTOS
#define NRFX_RTC2_ENABLED 0 // FIXME: Used by OpenThread

#define NRFX_ADC_ENABLED 0

#define NRFX_SPIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#define NRFX_PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#define NRFX_SPIS_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#define NRFX_TWIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0

#define CLOCK_ENABLED 1

#define POWER_ENABLED 1

#define RNG_ENABLED 1

#define USBD_ENABLED 1
#define NRF_DRV_USBD_ERRATA_ENABLE 1

#define NRF_SDH_ENABLED 1
#define NRF_SDH_SOC_ENABLED 1
#define NRF_SDH_BLE_ENABLED 1
#define NRF_SDH_BLE_VS_UUID_COUNT 2 // 1 base UUID is reserved for the system
#define NRF_SDH_BLE_PERIPHERAL_LINK_COUNT 1

#define NRF_FSTORAGE_ENABLED 1
#define CRC32_ENABLED 1

#define NRF_BLE_GATT_ENABLED 1

#define BLE_ADVERTISING_ENABLED 1

#define APP_FIFO_ENABLED 1

#define NRF_QUEUE_ENABLED 1

#ifdef DEBUG_BUILD
#define SEGGER_RTT_CONFIG_DEFAULT_MODE 1 // Do not block, output as much as fits
#define SEGGER_RTT_CONFIG_BUFFER_SIZE_UP 16384
#define SEGGER_RTT_CONFIG_MAX_NUM_UP_BUFFERS 2
#define SEGGER_RTT_CONFIG_BUFFER_SIZE_DOWN 16
#define SEGGER_RTT_CONFIG_MAX_NUM_DOWN_BUFFERS 2
#endif
