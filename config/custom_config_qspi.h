/**
\addtogroup BSP
\{
\addtogroup CONFIG
\{
\addtogroup CUSTOM
\{
*/

/**
 ****************************************************************************************
 *
 * @file custom_config_qspi.h
 *
 * @brief Board Support Package. User Configuration file for cached QSPI mode.
 *
 * Copyright (C) 2016-2017 Dialog Semiconductor.
 * This computer program includes Confidential, Proprietary Information
 * of Dialog Semiconductor. All Rights Reserved.
 *
 ****************************************************************************************
 */

#ifndef CUSTOM_CONFIG_QSPI_H_
#define CUSTOM_CONFIG_QSPI_H_

#include "bsp_definitions.h"

#undef CONFIG_USE_BLE
#undef CONFIG_USE_FTDF

/* Change dg_configUSE_LP_CLK to LP_CLK_RCX for Dongle and LP_CLK_32768 for DK */
#if defined(RELEASE_BUILD)
#define dg_configUSE_LP_CLK                     LP_CLK_RCX
#define dg_configIMAGE_SETUP                    PRODUCTION_MODE
#define dg_configSKIP_MAGIC_CHECK_AT_START      (1) // Only in PRODUCTION_MODE
#define dg_configENABLE_DEBUGGER                (0) //Set to 1 in DEVELOPMENT_MODE
#define dg_configIMAGE_FLASH_OFFSET             (0x20000)
#define USE_PARTITION_TABLE_1MB_WITH_SUOTA
#else
#define dg_configUSE_LP_CLK                     LP_CLK_32768
#define dg_configIMAGE_SETUP                    DEVELOPMENT_MODE
#endif

#define dg_configEXEC_MODE                      MODE_IS_CACHED
#define dg_configCODE_LOCATION                  NON_VOLATILE_IS_FLASH
#define dg_configEXT_CRYSTAL_FREQ               EXT_CRYSTAL_IS_16M

#define dg_configUSE_WDOG                       (0)

#define dg_configUSB_DMA_SUPPORT                (1)

#define dg_configFLASH_CONNECTED_TO             (FLASH_CONNECTED_TO_1V8)
#define dg_configFLASH_POWER_DOWN               (0)

#define dg_configPOWER_1V8_ACTIVE               (1)
#define dg_configPOWER_1V8_SLEEP                (1)

#define dg_configBATTERY_TYPE                   (BATTERY_TYPE_NO_BATTERY)
#define dg_configBATTERY_CHARGE_CURRENT         2       // 30mA
#define dg_configBATTERY_PRECHARGE_CURRENT      20      // 2.1mA
#define dg_configBATTERY_CHARGE_NTC             1       // disabled

#define dg_configUSE_USB                        1
#define dg_configUSB_SUSPEND_MODE               1
#define dg_configUSE_USB_CHARGER                0
#define dg_configALLOW_CHARGING_NOT_ENUM        1
#define dg_configUSE_NOT_ENUM_CHARGING_TIMEOUT  0

#define dg_configUSE_ProDK                      (1)
#define dg_configUSE_HW_TRNG                    (1)

/*************************************************************************************************\
 * FreeRTOS specific config
 */
#define OS_FREERTOS                              /* Define this to use FreeRTOS */
#define configTOTAL_HEAP_SIZE                    18432   /* This is the FreeRTOS Total Heap Size */

/*************************************************************************************************\
 * Peripheral specific config
 */
#define dg_configFLASH_ADAPTER                  0
#define dg_configNVMS_ADAPTER                   0
#define dg_configNVMS_VES                       0
#define dg_configGPADC_ADAPTER                  1
#define dg_configUSE_HW_USB                     1
#define dg_configUSE_USB_ENUMERATION            1


/* Include bsp default values */
#include "bsp_defaults.h"
/* Include memory layout */
#include "bsp_memory_layout.h"

#endif /* CUSTOM_CONFIG_QSPI_H_ */

/**
\}
\}
\}
*/
