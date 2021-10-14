/*******************************************************************************
* File Name: cycfg_peripherals.c
*
* Description:
* Peripheral Hardware Block configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.4.0.5721
* mtb-pdl-cat2 1.4.0.5338
* personalities 5.0.0.0
* udd 3.0.0.1428
*
********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "cycfg_peripherals.h"

cy_stc_fault_vbus_ovp_cfg_t mtb_usbpd_port0_ovp_config = 
{
    .enable = true,
    .mode = 2,
    .threshold = 20,
    .debounce = 10,
    .retryCount = 2,
};
cy_stc_fault_vbus_uvp_cfg_t mtb_usbpd_port0_uvp_config = 
{
    .enable = true,
    .mode = 2,
    .threshold = 20,
    .debounce = 10,
    .retryCount = 2,
};
cy_stc_usbpd_config_t mtb_usbpd_port0_config = 
{
    .vbusOvpConfig = &mtb_usbpd_port0_ovp_config,
    .vbusUvpConfig = &mtb_usbpd_port0_uvp_config,
    .vbusOcpConfig = NULL,
    .vbusScpConfig = NULL,
    .vbusRcpConfig = NULL,
    .vconnOcpConfig = NULL,
    .ccOvpConfig = NULL,
    .sbuOvpConfig = NULL,
    .legacyChargingConfig = NULL,
};


void init_cycfg_peripherals(void)
{
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_RX, CY_SYSCLK_DIV_8_BIT, 0U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_TX, CY_SYSCLK_DIV_8_BIT, 1U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_SAR, CY_SYSCLK_DIV_8_BIT, 2U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_REFGEN, CY_SYSCLK_DIV_8_BIT, 3U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_FILTER1, CY_SYSCLK_DIV_8_BIT, 3U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_ISNK, CY_SYSCLK_DIV_16_BIT, 0U);
}
