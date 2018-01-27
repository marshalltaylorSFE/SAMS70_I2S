/**
 * \file
 *
 * \brief SAM I2S Controller HAL
 *
 * Copyright (C) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */

#ifndef _HAL_I2S_CONTROLLER_H_INCLUDED
#define _HAL_I2S_CONTROLLER_H_INCLUDED

#include "hpl_i2s.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * \addtogroup doc_driver_hal_i2s_controller_sync
 *
 *@{
 */

/** I2S Controller Interface. */
enum i2s_c_iface {
	/** I2S controller interface 0. */
	I2S_C_IFACE_0,
	/** I2S controller interface 1. */
	I2S_C_IFACE_1
};

/**
 * I2S Controller Descriptor struct
 */
struct i2s_c_sync_desc {
	/** HPL device instance for I2S Controller. */
	struct _i2s_sync_dev dev;
};

/**
 * \brief Initialize the I2S Controller
 *
 * \param[in, out] i2s Pointer to the I2S Controller instance.
 * \param[in] hw Pointer to the hardware base.
 * \param[in] iface The I2S interface used.
 *
 * \return Operation status.
 * \retval 0 Success.
 * \retval <0 Error.
 */
int32_t i2s_c_sync_init(struct i2s_c_sync_desc *i2s, const void *hw, const enum i2s_c_iface iface);

/**
 * \brief Deinitialize the I2S Controller
 *
 * \param[in, out] i2s Pointer to the I2S Controller instance.
 */
void i2s_c_sync_deinit(struct i2s_c_sync_desc *i2s);

/**
 * \brief Enable the I2S Controller
 *
 * \param[in, out] i2s Pointer to the I2S Controller instance.
 *
 * \return Operation status.
 * \retval 0 Success.
 * \retval <0 Error.
 */
int32_t i2s_c_sync_enable(struct i2s_c_sync_desc *i2s);

/**
 * \brief Disable the I2S Controller
 *
 * \param[in, out] i2s Pointer to the I2S Controller instance.
 */
void i2s_c_sync_disable(struct i2s_c_sync_desc *i2s);

/**
 * \brief Set the Word Select pulse Length of the I2S Controller
 *
 * Note that it works only when the I2S Controller is disabled.
 *
 * \param[in, out] i2s Pointer to the I2S Controller instance.
 * \param[in] n_sck Describes how many SCK bits generates a Word Select pulse.
 *
 * \return Operation status.
 * \retval 0 Success.
 * \retval <0 Error.
 */
int32_t i2s_c_sync_set_ws_length(struct i2s_c_sync_desc *i2s, const uint16_t n_sck);

/**
 * \brief Set the SCK division from MCK
 *
 * Note that it works only when the I2S Controller is disabled.
 *
 * \param[in, out] i2s Pointer to the I2S Controller instance.
 * \param[in] n_mck Describes how many MCK bits generates a SCK clock.
 *
 * \return Operation status.
 * \retval 0 Success.
 * \retval <0 Error.
 */
int32_t i2s_c_sync_set_sck_div(struct i2s_c_sync_desc *i2s, const uint32_t n_mck);

/** \brief Retrieve the current driver version
 *
 *  \return Current driver version.
 */
uint32_t i2s_c_sync_get_version(void);

/**@}*/

#ifdef __cplusplus
}
#endif

#endif /* _HAL_I2S_CONTROLLER_H_INCLUDED */
