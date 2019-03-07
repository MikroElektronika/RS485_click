/*
    __rs485_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __rs485_driver.h
@brief    RS485_5V Driver
@mainpage RS485_5V Click
@{

@image html sch.jpg

@}

@defgroup   RS458
@brief      RS485_5V Click Driver
@{

| Global Library Prefix | **RS458** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **maj 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _RS458_H_
#define _RS458_H_

/** 
 * @macro T_RS458_P
 * @brief Driver Abstract type 
 */
#define T_RS458_P    const uint8_t*

/** @defgroup RS458_COMPILE Compilation Config */              /** @{ */

//  #define   __RS458_DRV_SPI__                            /**<     @macro __RS458_DRV_SPI__  @brief SPI driver selector */
//  #define   __RS458_DRV_I2C__                            /**<     @macro __RS458_DRV_I2C__  @brief I2C driver selector */                                          
  #define   __RS458_DRV_UART__                           /**<     @macro __RS458_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup RS458_VAR Variables */                           /** @{ */



                                                                       /** @} */
/** @defgroup RS458_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup RS458_INIT Driver Initialization */              /** @{ */

#ifdef   __RS458_DRV_SPI__
void rs485_spiDriverInit(T_RS458_P gpioObj, T_RS458_P spiObj);
#endif
#ifdef   __RS458_DRV_I2C__
void rs485_i2cDriverInit(T_RS458_P gpioObj, T_RS458_P i2cObj, uint8_t slave);
#endif
#ifdef   __RS458_DRV_UART__
void rs485_uartDriverInit(T_RS458_P gpioObj, T_RS458_P uartObj);
#endif
                                                                       /** @} */
/** @defgroup RS458_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Write Single Byte
 *
 * @param[in] input 
 *
 * Writes sinle byte.
 */
void rs485_writeByte(uint8_t input);

/**
 * @brief Read Single Byte
 *
 * @return received byte
 *
 * Read received byte.
 */
uint8_t rs485_readByte();

/**
 * @brief Check for new byte received
 *
 * @retval 0 - no new data / 1 - data ready
 *
 * Checks is there a new byte received.
 */
uint8_t rs485_byteReady();
                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_RS485_5V_STM.c
    @example Click_RS485_5V_TIVA.c
    @example Click_RS485_5V_CEC.c
    @example Click_RS485_5V_KINETIS.c
    @example Click_RS485_5V_MSP.c
    @example Click_RS485_5V_PIC.c
    @example Click_RS485_5V_PIC32.c
    @example Click_RS485_5V_DSPIC.c
    @example Click_RS485_5V_AVR.c
    @example Click_RS485_5V_FT90x.c
    @example Click_RS485_5V_STM.mbas
    @example Click_RS485_5V_TIVA.mbas
    @example Click_RS485_5V_CEC.mbas
    @example Click_RS485_5V_KINETIS.mbas
    @example Click_RS485_5V_MSP.mbas
    @example Click_RS485_5V_PIC.mbas
    @example Click_RS485_5V_PIC32.mbas
    @example Click_RS485_5V_DSPIC.mbas
    @example Click_RS485_5V_AVR.mbas
    @example Click_RS485_5V_FT90x.mbas
    @example Click_RS485_5V_STM.mpas
    @example Click_RS485_5V_TIVA.mpas
    @example Click_RS485_5V_CEC.mpas
    @example Click_RS485_5V_KINETIS.mpas
    @example Click_RS485_5V_MSP.mpas
    @example Click_RS485_5V_PIC.mpas
    @example Click_RS485_5V_PIC32.mpas
    @example Click_RS485_5V_DSPIC.mpas
    @example Click_RS485_5V_AVR.mpas
    @example Click_RS485_5V_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __rs485_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */

