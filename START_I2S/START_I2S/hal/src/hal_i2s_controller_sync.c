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

#include "hal_i2s_controller_sync.h"
#include "utils_assert.h"

int32_t i2s_c_sync_init(struct i2s_c_sync_desc *i2s, const void *hw, const enum i2s_c_iface iface)
{
	int32_t rc;

	ASSERT(i2s && hw);

	/** OUT/IN interface (corresponding to interface 0 and 1)
	 *  will be used in HPL.
	 */
	rc = _i2s_sync_init(&i2s->dev, hw, (enum _i2s_iface)iface);
	if (rc < 0) {
		return rc;
	}

	return ERR_NONE;
}

void i2s_c_sync_deinit(struct i2s_c_sync_desc *i2s)
{
	ASSERT(i2s);

	_i2s_sync_deinit(&i2s->dev);
}

int32_t i2s_c_sync_enable(struct i2s_c_sync_desc *i2s)
{
	ASSERT(i2s);

	return _i2s_sync_enable(&i2s->dev);
}

void i2s_c_sync_disable(struct i2s_c_sync_desc *i2s)
{
	ASSERT(i2s);

	_i2s_sync_disable(&i2s->dev);
}

int32_t i2s_c_sync_set_ws_length(struct i2s_c_sync_desc *i2s, const uint16_t n_sck)
{
	ASSERT(i2s);

	return _i2s_sync_set_ws_length(&i2s->dev, n_sck);
}

int32_t i2s_c_sync_set_sck_div(struct i2s_c_sync_desc *i2s, const uint32_t n_mck)
{
	ASSERT(i2s);

	return _i2s_sync_set_sck_div(&i2s->dev, n_mck);
}
