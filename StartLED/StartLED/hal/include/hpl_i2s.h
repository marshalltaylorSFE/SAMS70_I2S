/**
 * \file
 *
 * \brief SAM I2S HPL
 *
 * Copyright (C) 2015-2016 Atmel Corporation. All rights reserved.
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

#ifndef _HPL_I2S_H_INCLUDED
#define _HPL_I2S_H_INCLUDED

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

/** I2S device interface. */
enum _i2s_iface {
	/** I2S output interface, to send data out. */
	I2S_IFACE_OUT,
	/** I2S input interface, to receive data in. */
	I2S_IFACE_IN
};

/**
 * I2S synchronous device driver instance.
 */
struct _i2s_sync_dev {
	/** Pointer to hardware base or private data. */
	void *prvt;
	/** I2S word length. */
	uint8_t word_size;
	/** Data interface used: receiver/transmitter. */
	uint8_t iface : 1;
	/** Clock interface used: receiver/transmitter. */
	uint8_t iface_ctrl : 1;
	/** Controller: generates clocks and control signals, no data transfer. */
	uint8_t is_controller : 1;
	/** Slave if not a controller: accept control signals from controller or
	 *  master, to control data transfer. */
	uint8_t is_slave : 1;
	/** Busy, doing transfer. */
	uint8_t is_busy : 1;
};

/**
 * \brief Initialize the I2S synchronous device driver
 * \param[in,out] dev Pointer to the I2S device driver instance.
 * \param[in] hw Pointer to the hardware register base.
 * \param[in] iface The I2S interface, IN/OUT.
 * \return Operation status.
 * \retval 0 Initialization OK.
 * \retval <0 There is error.
 */
int32_t _i2s_sync_init(struct _i2s_sync_dev *dev, const void *hw, const enum _i2s_iface iface);

/**
 * \brief Deinitialize the I2S synchronous device driver
 * \param[in,out] dev Pointer to the I2S device driver instance.
 */
void _i2s_sync_deinit(struct _i2s_sync_dev *dev);

/**
 * \brief Enable the I2S synchronous device driver
 * \param[in,out] dev Pointer to the I2S device driver instance.
 * \return Operation status.
 * \retval 0 Initialization OK.
 * \retval <0 There is error.
 */
int32_t _i2s_sync_enable(struct _i2s_sync_dev *dev);

/**
 * \brief Disable the I2S synchronous device driver
 * \param[in,out] dev Pointer to the I2S device driver instance.
 */
void _i2s_sync_disable(struct _i2s_sync_dev *dev);

/**
 * \brief Set the word length
 * \param[in,out] dev Pointer to the I2S device driver instance.
 * \param[in] n_bits Word length in number of bits
 * \return Operation status.
 * \retval 0 Initialization OK.
 * \retval <0 There is error.
 */
int32_t _i2s_sync_set_word_length(struct _i2s_sync_dev *dev, const uint8_t n_bits);

/**
 * \brief Set the I2S Word Select Pulse (Low or High) length
 * Since the length is for low or high pluse, the word select frequency will
 * be defined by \c n_bits * 2.
 * \param[in,out] dev Pointer to the I2S device driver instance.
 * \param[in] n_bits Word Select pulse length in number of SCK bits
 * \return Operation status.
 * \retval 0 Initialization OK.
 * \retval <0 There is error.
 */
int32_t _i2s_sync_set_ws_length(struct _i2s_sync_dev *dev, const uint16_t n_bits);

/**
 * \brief Set the I2S SCK division from MCK
 * \param[in,out] dev Pointer to the I2S device driver instance.
 * \param[in] n_mck Number of MCK clocks that generate one SCK clock.
 * \return Operation status.
 * \retval 0 Initialization OK.
 * \retval <0 There is error.
 */
int32_t _i2s_sync_set_sck_div(struct _i2s_sync_dev *dev, const uint32_t n_mck);

/**
 * \brief Return address used by DMA for specific I2S interface
 * \param[in] hw Pointer to the Hardware base.
 */
uint32_t _i2s_sync_get_dma_addr(const struct _i2s_sync_dev *dev);

/**
 * \brief Return trigger used by DMA for specific I2S interface
 * \param[in] hw Pointer to the Hardware base.
 */
uint32_t _i2s_sync_get_dma_trigger(const struct _i2s_sync_dev *dev);

#ifdef __cplusplus
}
#endif

#endif /* _HPL_I2S_H_INCLUDED */
