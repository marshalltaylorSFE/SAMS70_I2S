/**
 * \file
 *
 * \brief SAM Synchronous Serial Controller (SSC)
 *
 * Copyright (C) 2016 Atmel Corporation. All rights reserved.
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

#include "hpl_i2s.h"
#include "utils_assert.h"
#include "hpl_ssc_config.h"

/**
 * \brief SSC configuration type
 */
struct ssc_configuration {
	uint32_t cmr;
#if (CONF_SSC_TXEN == 1)
	uint32_t tcmr;
	uint32_t tfmr;
#endif
#if (CONF_SSC_RXEN == 1)
	uint32_t rcmr;
	uint32_t rfmr;
#endif
};

/**
 * \brief Array of SSC configurations
 */
static struct ssc_configuration _ssc = {
    SSC_CMR_DIV(CONF_SSC_DIV),
#if (CONF_SSC_TXEN == 1)
    SSC_TCMR_CKS(CONF_SSC_TCMR_CKS) | SSC_TCMR_CKO(CONF_SSC_TCMR_CKO) | (CONF_SSC_TCMR_CKI << SSC_TCMR_CKI_Pos)
        | SSC_TCMR_STTDLY(CONF_SSC_TCMR_STTDLY)
        | SSC_TCMR_PERIOD(CONF_SSC_TCMR_PERIOD),
    SSC_TFMR_DATLEN(CONF_SSC_TFMR_DATLEN) | SSC_TFMR_FSLEN(CONF_SSC_TFMR_FSLEN) | SSC_TFMR_FSOS(CONF_SSC_TFMR_FSOS)
        | (CONF_SSC_TFMR_FSEDGE << SSC_TFMR_FSEDGE_Pos)
        | SSC_TFMR_FSLEN_EXT(CONF_SSC_TFMR_FSLEN_EXT),
#endif
#if (CONF_SSC_RXEN == 1)
    SSC_RCMR_CKS(CONF_SSC_RCMR_CKS) | SSC_RCMR_CKO(CONF_SSC_RCMR_CKO) | (CONF_SSC_RCMR_CKI << SSC_RCMR_CKI_Pos)
        | SSC_RCMR_STTDLY(CONF_SSC_RCMR_STTDLY)
        | SSC_RCMR_PERIOD(CONF_SSC_RCMR_PERIOD),
    SSC_RFMR_DATLEN(CONF_SSC_RFMR_DATLEN) | SSC_RFMR_FSLEN(CONF_SSC_RFMR_FSLEN) | SSC_RFMR_FSOS(CONF_SSC_RFMR_FSOS)
        | (CONF_SSC_RFMR_FSEDGE << SSC_RFMR_FSEDGE_Pos)
        | SSC_RFMR_FSLEN_EXT(CONF_SSC_RFMR_FSLEN_EXT),
#endif
};

int32_t _i2s_sync_init(struct _i2s_sync_dev *dev, const void *hw, const enum _i2s_iface iface)
{
	ASSERT(dev && hw);
	bool enabled;

	dev->prvt  = (void *)hw;
	dev->iface = iface;

	dev->is_controller = 1;
#if (CONF_SSC_TXEN == 1)
	dev->word_size = (iface == I2S_IFACE_OUT) ? CONF_SSC_TFMR_DATLEN : 0;
#endif
#if (CONF_SSC_RXEN == 1)
	dev->word_size = (iface == I2S_IFACE_IN) ? CONF_SSC_RFMR_DATLEN : 0;
#endif

	enabled = hri_ssc_get_SR_reg(hw, (SSC_SR_TXEN_Msk << iface));

	if (enabled & SSC_SR_TXEN_Msk) {
		hri_ssc_write_CR_reg(hw, SSC_CR_TXDIS);
	}
	if (enabled & SSC_SR_RXEN_Msk) {
		hri_ssc_write_CR_reg(hw, SSC_CR_RXDIS);
	}

	hri_ssc_write_CMR_reg(hw, _ssc.cmr);
#if (CONF_SSC_TXEN == 1)
	if (iface == 0) {
		hri_ssc_write_TCMR_reg(hw, _ssc.tcmr);
		hri_ssc_write_TFMR_reg(hw, _ssc.tfmr);
	}
#endif
#if (CONF_SSC_RXEN == 1)
	if (iface == 1) {
		hri_ssc_write_RCMR_reg(hw, _ssc.rcmr);
		hri_ssc_write_RFMR_reg(hw, _ssc.rfmr);
	}
#endif

	if (enabled & SSC_SR_TXEN_Msk) {
		hri_ssc_write_CR_reg(hw, SSC_CR_TXEN);
	}
	if (enabled & SSC_SR_RXEN_Msk) {
		hri_ssc_write_CR_reg(hw, SSC_CR_RXEN);
	}

	return ERR_NONE;
}

void _i2s_sync_deinit(struct _i2s_sync_dev *dev)
{
	ASSERT(dev && dev->prvt);

	_i2s_sync_disable(dev);
}

int32_t _i2s_sync_enable(struct _i2s_sync_dev *dev)
{
	Ssc *hw;
	ASSERT(dev && dev->prvt);

	hw = (Ssc *)dev->prvt;

#if (CONF_SSC_TXEN == 1)
	if (dev->iface == 0) {
		hri_ssc_write_CR_reg(hw, (CONF_SSC_TXEN << SSC_CR_TXEN_Pos));
	}
#endif
#if (CONF_SSC_RXEN == 1)
	if (dev->iface == 1) {
		hri_ssc_write_CR_reg(hw, (CONF_SSC_RXEN << SSC_CR_RXEN_Pos));
	}
#endif

	return ERR_NONE;
}

void _i2s_sync_disable(struct _i2s_sync_dev *dev)
{
	Ssc *hw;
	ASSERT(dev && dev->prvt);

	hw = (Ssc *)dev->prvt;
	hri_ssc_write_CR_reg(hw, (SSC_CR_TXDIS | SSC_CR_RXDIS));
}

int32_t _i2s_sync_set_ws_length(struct _i2s_sync_dev *dev, const uint16_t n_bits)
{
	Ssc *hw;
	bool enabled;

	ASSERT(dev && dev->prvt);

	hw = (Ssc *)dev->prvt;

	if (dev->is_slave) {
		return ERR_UNSUPPORTED_OP;
	}

	enabled = hri_ssc_get_SR_reg(hw, (SSC_SR_TXEN_Msk << dev->iface));
	if (enabled & SSC_SR_TXEN_Msk) {
		hri_ssc_write_CR_reg(hw, SSC_CR_TXDIS);
	}
	if (enabled & SSC_SR_RXEN_Msk) {
		hri_ssc_write_CR_reg(hw, SSC_CR_RXDIS);
	}

	if (dev->iface == 0) {
		hri_ssc_write_TFMR_FSLEN_bf(hw, ((n_bits - 1) & 0x0F));
		hri_ssc_write_TFMR_FSLEN_EXT_bf(hw, ((n_bits - 1) & 0xF0) >> 4);
		hri_ssc_write_TCMR_PERIOD_bf(hw, (n_bits - 1));
	} else {
		hri_ssc_write_RFMR_FSLEN_bf(hw, ((n_bits - 1) & 0x0F));
		hri_ssc_write_RFMR_FSLEN_EXT_bf(hw, ((n_bits - 1) & 0xF0) >> 4);
		hri_ssc_write_RCMR_PERIOD_bf(hw, (n_bits - 1));
	}

	if (enabled & SSC_SR_TXEN_Msk) {
		hri_ssc_write_CR_reg(hw, SSC_CR_TXEN);
	}
	if (enabled & SSC_SR_RXEN_Msk) {
		hri_ssc_write_CR_reg(hw, SSC_CR_RXEN);
	}

	return ERR_NONE;
}

int32_t _i2s_sync_set_word_length(struct _i2s_sync_dev *dev, const uint8_t n_bits)
{
	Ssc *hw;
	bool enabled;

	ASSERT(dev && dev->prvt);

	hw = (Ssc *)dev->prvt;

	if (dev->is_controller) {
		return ERR_UNSUPPORTED_OP;
	}

	enabled = hri_ssc_get_SR_reg(hw, (SSC_SR_TXEN_Msk << dev->iface));
	if (enabled & SSC_SR_TXEN_Msk) {
		hri_ssc_write_CR_reg(hw, SSC_CR_TXDIS);
	}
	if (enabled & SSC_SR_RXEN_Msk) {
		hri_ssc_write_CR_reg(hw, SSC_CR_RXDIS);
	}

	if (dev->iface == 0) {
		hri_ssc_write_TFMR_DATLEN_bf(hw, (n_bits - 1));
	} else {
		hri_ssc_write_RFMR_DATLEN_bf(hw, (n_bits - 1));
	}

	if (enabled & SSC_SR_TXEN_Msk) {
		hri_ssc_write_CR_reg(hw, SSC_CR_TXEN);
	}
	if (enabled & SSC_SR_RXEN_Msk) {
		hri_ssc_write_CR_reg(hw, SSC_CR_RXEN);
	}

	return ERR_NONE;
}

int32_t _i2s_sync_set_sck_div(struct _i2s_sync_dev *dev, const uint32_t n_mck)
{
	Ssc *hw;
	bool enabled;

	ASSERT(dev && dev->prvt);

	hw = (Ssc *)dev->prvt;

	if (dev->is_slave) {
		return ERR_UNSUPPORTED_OP;
	}

	enabled = hri_ssc_get_SR_reg(hw, (SSC_SR_TXEN_Msk << dev->iface));
	if (enabled & SSC_SR_TXEN_Msk) {
		hri_ssc_write_CR_reg(hw, SSC_CR_TXDIS);
	}
	if (enabled & SSC_SR_RXEN_Msk) {
		hri_ssc_write_CR_reg(hw, SSC_CR_RXDIS);
	}

	hri_ssc_write_CMR_reg(hw, n_mck);

	if (enabled & SSC_SR_TXEN_Msk) {
		hri_ssc_write_CR_reg(hw, SSC_CR_TXEN);
	}
	if (enabled & SSC_SR_RXEN_Msk) {
		hri_ssc_write_CR_reg(hw, SSC_CR_RXEN);
	}

	return ERR_NONE;
}
