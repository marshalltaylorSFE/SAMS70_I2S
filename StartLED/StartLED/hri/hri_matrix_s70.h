/**
 * \file
 *
 * \brief SAM MATRIX
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
 */

#ifdef _SAMS70_MATRIX_COMPONENT_
#ifndef _HRI_MATRIX_S70_H_INCLUDED_
#define _HRI_MATRIX_S70_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_MATRIX_CRITICAL_SECTIONS)
#define MATRIX_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define MATRIX_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define MATRIX_CRITICAL_SECTION_ENTER()
#define MATRIX_CRITICAL_SECTION_LEAVE()
#endif

typedef uint32_t hri_matrix_ccfg_smcnfcs_reg_t;
typedef uint32_t hri_matrix_ccfg_sysio_reg_t;
typedef uint32_t hri_matrix_mcfg_reg_t;
typedef uint32_t hri_matrix_mrcr_reg_t;
typedef uint32_t hri_matrix_pras_reg_t;
typedef uint32_t hri_matrix_prbs_reg_t;
typedef uint32_t hri_matrix_scfg_reg_t;
typedef uint32_t hri_matrix_wpmr_reg_t;
typedef uint32_t hri_matrix_wpsr_reg_t;
typedef uint32_t hri_matrixpr_pras_reg_t;
typedef uint32_t hri_matrixpr_prbs_reg_t;

static inline void hri_matrixpr_set_PRAS_M0PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS |= MATRIX_PRAS_M0PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrixpr_get_PRAS_M0PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M0PR(mask)) >> MATRIX_PRAS_M0PR_Pos;
	return tmp;
}

static inline void hri_matrixpr_write_PRAS_M0PR_bf(const void *const hw, hri_matrix_pras_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp &= ~MATRIX_PRAS_M0PR_Msk;
	tmp |= MATRIX_PRAS_M0PR(data);
	((MatrixPr *)hw)->MATRIX_PRAS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_clear_PRAS_M0PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS &= ~MATRIX_PRAS_M0PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_toggle_PRAS_M0PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS ^= MATRIX_PRAS_M0PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrixpr_read_PRAS_M0PR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M0PR_Msk) >> MATRIX_PRAS_M0PR_Pos;
	return tmp;
}

static inline void hri_matrixpr_set_PRAS_M1PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS |= MATRIX_PRAS_M1PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrixpr_get_PRAS_M1PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M1PR(mask)) >> MATRIX_PRAS_M1PR_Pos;
	return tmp;
}

static inline void hri_matrixpr_write_PRAS_M1PR_bf(const void *const hw, hri_matrix_pras_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp &= ~MATRIX_PRAS_M1PR_Msk;
	tmp |= MATRIX_PRAS_M1PR(data);
	((MatrixPr *)hw)->MATRIX_PRAS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_clear_PRAS_M1PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS &= ~MATRIX_PRAS_M1PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_toggle_PRAS_M1PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS ^= MATRIX_PRAS_M1PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrixpr_read_PRAS_M1PR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M1PR_Msk) >> MATRIX_PRAS_M1PR_Pos;
	return tmp;
}

static inline void hri_matrixpr_set_PRAS_M2PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS |= MATRIX_PRAS_M2PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrixpr_get_PRAS_M2PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M2PR(mask)) >> MATRIX_PRAS_M2PR_Pos;
	return tmp;
}

static inline void hri_matrixpr_write_PRAS_M2PR_bf(const void *const hw, hri_matrix_pras_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp &= ~MATRIX_PRAS_M2PR_Msk;
	tmp |= MATRIX_PRAS_M2PR(data);
	((MatrixPr *)hw)->MATRIX_PRAS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_clear_PRAS_M2PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS &= ~MATRIX_PRAS_M2PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_toggle_PRAS_M2PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS ^= MATRIX_PRAS_M2PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrixpr_read_PRAS_M2PR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M2PR_Msk) >> MATRIX_PRAS_M2PR_Pos;
	return tmp;
}

static inline void hri_matrixpr_set_PRAS_M3PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS |= MATRIX_PRAS_M3PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrixpr_get_PRAS_M3PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M3PR(mask)) >> MATRIX_PRAS_M3PR_Pos;
	return tmp;
}

static inline void hri_matrixpr_write_PRAS_M3PR_bf(const void *const hw, hri_matrix_pras_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp &= ~MATRIX_PRAS_M3PR_Msk;
	tmp |= MATRIX_PRAS_M3PR(data);
	((MatrixPr *)hw)->MATRIX_PRAS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_clear_PRAS_M3PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS &= ~MATRIX_PRAS_M3PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_toggle_PRAS_M3PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS ^= MATRIX_PRAS_M3PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrixpr_read_PRAS_M3PR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M3PR_Msk) >> MATRIX_PRAS_M3PR_Pos;
	return tmp;
}

static inline void hri_matrixpr_set_PRAS_M4PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS |= MATRIX_PRAS_M4PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrixpr_get_PRAS_M4PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M4PR(mask)) >> MATRIX_PRAS_M4PR_Pos;
	return tmp;
}

static inline void hri_matrixpr_write_PRAS_M4PR_bf(const void *const hw, hri_matrix_pras_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp &= ~MATRIX_PRAS_M4PR_Msk;
	tmp |= MATRIX_PRAS_M4PR(data);
	((MatrixPr *)hw)->MATRIX_PRAS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_clear_PRAS_M4PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS &= ~MATRIX_PRAS_M4PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_toggle_PRAS_M4PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS ^= MATRIX_PRAS_M4PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrixpr_read_PRAS_M4PR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M4PR_Msk) >> MATRIX_PRAS_M4PR_Pos;
	return tmp;
}

static inline void hri_matrixpr_set_PRAS_M5PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS |= MATRIX_PRAS_M5PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrixpr_get_PRAS_M5PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M5PR(mask)) >> MATRIX_PRAS_M5PR_Pos;
	return tmp;
}

static inline void hri_matrixpr_write_PRAS_M5PR_bf(const void *const hw, hri_matrix_pras_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp &= ~MATRIX_PRAS_M5PR_Msk;
	tmp |= MATRIX_PRAS_M5PR(data);
	((MatrixPr *)hw)->MATRIX_PRAS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_clear_PRAS_M5PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS &= ~MATRIX_PRAS_M5PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_toggle_PRAS_M5PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS ^= MATRIX_PRAS_M5PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrixpr_read_PRAS_M5PR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M5PR_Msk) >> MATRIX_PRAS_M5PR_Pos;
	return tmp;
}

static inline void hri_matrixpr_set_PRAS_M6PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS |= MATRIX_PRAS_M6PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrixpr_get_PRAS_M6PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M6PR(mask)) >> MATRIX_PRAS_M6PR_Pos;
	return tmp;
}

static inline void hri_matrixpr_write_PRAS_M6PR_bf(const void *const hw, hri_matrix_pras_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp &= ~MATRIX_PRAS_M6PR_Msk;
	tmp |= MATRIX_PRAS_M6PR(data);
	((MatrixPr *)hw)->MATRIX_PRAS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_clear_PRAS_M6PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS &= ~MATRIX_PRAS_M6PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_toggle_PRAS_M6PR_bf(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS ^= MATRIX_PRAS_M6PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrixpr_read_PRAS_M6PR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M6PR_Msk) >> MATRIX_PRAS_M6PR_Pos;
	return tmp;
}

static inline void hri_matrixpr_set_PRAS_reg(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS |= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrixpr_get_PRAS_reg(const void *const hw, hri_matrix_pras_reg_t mask)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRAS;
	tmp &= mask;
	return tmp;
}

static inline void hri_matrixpr_write_PRAS_reg(const void *const hw, hri_matrix_pras_reg_t data)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS = data;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_clear_PRAS_reg(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS &= ~mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_toggle_PRAS_reg(const void *const hw, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRAS ^= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrixpr_read_PRAS_reg(const void *const hw)
{
	return ((MatrixPr *)hw)->MATRIX_PRAS;
}

static inline void hri_matrixpr_set_PRBS_M8PR_bf(const void *const hw, hri_matrix_prbs_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRBS |= MATRIX_PRBS_M8PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_prbs_reg_t hri_matrixpr_get_PRBS_M8PR_bf(const void *const hw, hri_matrix_prbs_reg_t mask)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRBS;
	tmp = (tmp & MATRIX_PRBS_M8PR(mask)) >> MATRIX_PRBS_M8PR_Pos;
	return tmp;
}

static inline void hri_matrixpr_write_PRBS_M8PR_bf(const void *const hw, hri_matrix_prbs_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((MatrixPr *)hw)->MATRIX_PRBS;
	tmp &= ~MATRIX_PRBS_M8PR_Msk;
	tmp |= MATRIX_PRBS_M8PR(data);
	((MatrixPr *)hw)->MATRIX_PRBS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_clear_PRBS_M8PR_bf(const void *const hw, hri_matrix_prbs_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRBS &= ~MATRIX_PRBS_M8PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_toggle_PRBS_M8PR_bf(const void *const hw, hri_matrix_prbs_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRBS ^= MATRIX_PRBS_M8PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_prbs_reg_t hri_matrixpr_read_PRBS_M8PR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRBS;
	tmp = (tmp & MATRIX_PRBS_M8PR_Msk) >> MATRIX_PRBS_M8PR_Pos;
	return tmp;
}

static inline void hri_matrixpr_set_PRBS_reg(const void *const hw, hri_matrix_prbs_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRBS |= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_prbs_reg_t hri_matrixpr_get_PRBS_reg(const void *const hw, hri_matrix_prbs_reg_t mask)
{
	uint32_t tmp;
	tmp = ((MatrixPr *)hw)->MATRIX_PRBS;
	tmp &= mask;
	return tmp;
}

static inline void hri_matrixpr_write_PRBS_reg(const void *const hw, hri_matrix_prbs_reg_t data)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRBS = data;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_clear_PRBS_reg(const void *const hw, hri_matrix_prbs_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRBS &= ~mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrixpr_toggle_PRBS_reg(const void *const hw, hri_matrix_prbs_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((MatrixPr *)hw)->MATRIX_PRBS ^= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_prbs_reg_t hri_matrixpr_read_PRBS_reg(const void *const hw)
{
	return ((MatrixPr *)hw)->MATRIX_PRBS;
}

static inline void hri_matrix_set_PRAS_M0PR_bf(const void *const hw, uint8_t submodule_index,
                                               hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS |= MATRIX_PRAS_M0PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrix_get_PRAS_M0PR_bf(const void *const hw, uint8_t submodule_index,
                                                                hri_matrix_pras_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M0PR(mask)) >> MATRIX_PRAS_M0PR_Pos;
	return tmp;
}

static inline void hri_matrix_write_PRAS_M0PR_bf(const void *const hw, uint8_t submodule_index,
                                                 hri_matrix_pras_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp &= ~MATRIX_PRAS_M0PR_Msk;
	tmp |= MATRIX_PRAS_M0PR(data);
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_PRAS_M0PR_bf(const void *const hw, uint8_t submodule_index,
                                                 hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS &= ~MATRIX_PRAS_M0PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_PRAS_M0PR_bf(const void *const hw, uint8_t submodule_index,
                                                  hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS ^= MATRIX_PRAS_M0PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrix_read_PRAS_M0PR_bf(const void *const hw, uint8_t submodule_index)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M0PR_Msk) >> MATRIX_PRAS_M0PR_Pos;
	return tmp;
}

static inline void hri_matrix_set_PRAS_M1PR_bf(const void *const hw, uint8_t submodule_index,
                                               hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS |= MATRIX_PRAS_M1PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrix_get_PRAS_M1PR_bf(const void *const hw, uint8_t submodule_index,
                                                                hri_matrix_pras_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M1PR(mask)) >> MATRIX_PRAS_M1PR_Pos;
	return tmp;
}

static inline void hri_matrix_write_PRAS_M1PR_bf(const void *const hw, uint8_t submodule_index,
                                                 hri_matrix_pras_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp &= ~MATRIX_PRAS_M1PR_Msk;
	tmp |= MATRIX_PRAS_M1PR(data);
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_PRAS_M1PR_bf(const void *const hw, uint8_t submodule_index,
                                                 hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS &= ~MATRIX_PRAS_M1PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_PRAS_M1PR_bf(const void *const hw, uint8_t submodule_index,
                                                  hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS ^= MATRIX_PRAS_M1PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrix_read_PRAS_M1PR_bf(const void *const hw, uint8_t submodule_index)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M1PR_Msk) >> MATRIX_PRAS_M1PR_Pos;
	return tmp;
}

static inline void hri_matrix_set_PRAS_M2PR_bf(const void *const hw, uint8_t submodule_index,
                                               hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS |= MATRIX_PRAS_M2PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrix_get_PRAS_M2PR_bf(const void *const hw, uint8_t submodule_index,
                                                                hri_matrix_pras_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M2PR(mask)) >> MATRIX_PRAS_M2PR_Pos;
	return tmp;
}

static inline void hri_matrix_write_PRAS_M2PR_bf(const void *const hw, uint8_t submodule_index,
                                                 hri_matrix_pras_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp &= ~MATRIX_PRAS_M2PR_Msk;
	tmp |= MATRIX_PRAS_M2PR(data);
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_PRAS_M2PR_bf(const void *const hw, uint8_t submodule_index,
                                                 hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS &= ~MATRIX_PRAS_M2PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_PRAS_M2PR_bf(const void *const hw, uint8_t submodule_index,
                                                  hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS ^= MATRIX_PRAS_M2PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrix_read_PRAS_M2PR_bf(const void *const hw, uint8_t submodule_index)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M2PR_Msk) >> MATRIX_PRAS_M2PR_Pos;
	return tmp;
}

static inline void hri_matrix_set_PRAS_M3PR_bf(const void *const hw, uint8_t submodule_index,
                                               hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS |= MATRIX_PRAS_M3PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrix_get_PRAS_M3PR_bf(const void *const hw, uint8_t submodule_index,
                                                                hri_matrix_pras_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M3PR(mask)) >> MATRIX_PRAS_M3PR_Pos;
	return tmp;
}

static inline void hri_matrix_write_PRAS_M3PR_bf(const void *const hw, uint8_t submodule_index,
                                                 hri_matrix_pras_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp &= ~MATRIX_PRAS_M3PR_Msk;
	tmp |= MATRIX_PRAS_M3PR(data);
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_PRAS_M3PR_bf(const void *const hw, uint8_t submodule_index,
                                                 hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS &= ~MATRIX_PRAS_M3PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_PRAS_M3PR_bf(const void *const hw, uint8_t submodule_index,
                                                  hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS ^= MATRIX_PRAS_M3PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrix_read_PRAS_M3PR_bf(const void *const hw, uint8_t submodule_index)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M3PR_Msk) >> MATRIX_PRAS_M3PR_Pos;
	return tmp;
}

static inline void hri_matrix_set_PRAS_M4PR_bf(const void *const hw, uint8_t submodule_index,
                                               hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS |= MATRIX_PRAS_M4PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrix_get_PRAS_M4PR_bf(const void *const hw, uint8_t submodule_index,
                                                                hri_matrix_pras_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M4PR(mask)) >> MATRIX_PRAS_M4PR_Pos;
	return tmp;
}

static inline void hri_matrix_write_PRAS_M4PR_bf(const void *const hw, uint8_t submodule_index,
                                                 hri_matrix_pras_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp &= ~MATRIX_PRAS_M4PR_Msk;
	tmp |= MATRIX_PRAS_M4PR(data);
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_PRAS_M4PR_bf(const void *const hw, uint8_t submodule_index,
                                                 hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS &= ~MATRIX_PRAS_M4PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_PRAS_M4PR_bf(const void *const hw, uint8_t submodule_index,
                                                  hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS ^= MATRIX_PRAS_M4PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrix_read_PRAS_M4PR_bf(const void *const hw, uint8_t submodule_index)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M4PR_Msk) >> MATRIX_PRAS_M4PR_Pos;
	return tmp;
}

static inline void hri_matrix_set_PRAS_M5PR_bf(const void *const hw, uint8_t submodule_index,
                                               hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS |= MATRIX_PRAS_M5PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrix_get_PRAS_M5PR_bf(const void *const hw, uint8_t submodule_index,
                                                                hri_matrix_pras_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M5PR(mask)) >> MATRIX_PRAS_M5PR_Pos;
	return tmp;
}

static inline void hri_matrix_write_PRAS_M5PR_bf(const void *const hw, uint8_t submodule_index,
                                                 hri_matrix_pras_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp &= ~MATRIX_PRAS_M5PR_Msk;
	tmp |= MATRIX_PRAS_M5PR(data);
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_PRAS_M5PR_bf(const void *const hw, uint8_t submodule_index,
                                                 hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS &= ~MATRIX_PRAS_M5PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_PRAS_M5PR_bf(const void *const hw, uint8_t submodule_index,
                                                  hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS ^= MATRIX_PRAS_M5PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrix_read_PRAS_M5PR_bf(const void *const hw, uint8_t submodule_index)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M5PR_Msk) >> MATRIX_PRAS_M5PR_Pos;
	return tmp;
}

static inline void hri_matrix_set_PRAS_M6PR_bf(const void *const hw, uint8_t submodule_index,
                                               hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS |= MATRIX_PRAS_M6PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrix_get_PRAS_M6PR_bf(const void *const hw, uint8_t submodule_index,
                                                                hri_matrix_pras_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M6PR(mask)) >> MATRIX_PRAS_M6PR_Pos;
	return tmp;
}

static inline void hri_matrix_write_PRAS_M6PR_bf(const void *const hw, uint8_t submodule_index,
                                                 hri_matrix_pras_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp &= ~MATRIX_PRAS_M6PR_Msk;
	tmp |= MATRIX_PRAS_M6PR(data);
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_PRAS_M6PR_bf(const void *const hw, uint8_t submodule_index,
                                                 hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS &= ~MATRIX_PRAS_M6PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_PRAS_M6PR_bf(const void *const hw, uint8_t submodule_index,
                                                  hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS ^= MATRIX_PRAS_M6PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrix_read_PRAS_M6PR_bf(const void *const hw, uint8_t submodule_index)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp = (tmp & MATRIX_PRAS_M6PR_Msk) >> MATRIX_PRAS_M6PR_Pos;
	return tmp;
}

static inline void hri_matrix_set_PRAS_reg(const void *const hw, uint8_t submodule_index, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS |= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrix_get_PRAS_reg(const void *const hw, uint8_t submodule_index,
                                                            hri_matrix_pras_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
	tmp &= mask;
	return tmp;
}

static inline void hri_matrix_write_PRAS_reg(const void *const hw, uint8_t submodule_index, hri_matrix_pras_reg_t data)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS = data;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_PRAS_reg(const void *const hw, uint8_t submodule_index, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS &= ~mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_PRAS_reg(const void *const hw, uint8_t submodule_index, hri_matrix_pras_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS ^= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_pras_reg_t hri_matrix_read_PRAS_reg(const void *const hw, uint8_t submodule_index)
{
	return ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRAS;
}

static inline void hri_matrix_set_PRBS_M8PR_bf(const void *const hw, uint8_t submodule_index,
                                               hri_matrix_prbs_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRBS |= MATRIX_PRBS_M8PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_prbs_reg_t hri_matrix_get_PRBS_M8PR_bf(const void *const hw, uint8_t submodule_index,
                                                                hri_matrix_prbs_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRBS;
	tmp = (tmp & MATRIX_PRBS_M8PR(mask)) >> MATRIX_PRBS_M8PR_Pos;
	return tmp;
}

static inline void hri_matrix_write_PRBS_M8PR_bf(const void *const hw, uint8_t submodule_index,
                                                 hri_matrix_prbs_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRBS;
	tmp &= ~MATRIX_PRBS_M8PR_Msk;
	tmp |= MATRIX_PRBS_M8PR(data);
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRBS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_PRBS_M8PR_bf(const void *const hw, uint8_t submodule_index,
                                                 hri_matrix_prbs_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRBS &= ~MATRIX_PRBS_M8PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_PRBS_M8PR_bf(const void *const hw, uint8_t submodule_index,
                                                  hri_matrix_prbs_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRBS ^= MATRIX_PRBS_M8PR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_prbs_reg_t hri_matrix_read_PRBS_M8PR_bf(const void *const hw, uint8_t submodule_index)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRBS;
	tmp = (tmp & MATRIX_PRBS_M8PR_Msk) >> MATRIX_PRBS_M8PR_Pos;
	return tmp;
}

static inline void hri_matrix_set_PRBS_reg(const void *const hw, uint8_t submodule_index, hri_matrix_prbs_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRBS |= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_prbs_reg_t hri_matrix_get_PRBS_reg(const void *const hw, uint8_t submodule_index,
                                                            hri_matrix_prbs_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRBS;
	tmp &= mask;
	return tmp;
}

static inline void hri_matrix_write_PRBS_reg(const void *const hw, uint8_t submodule_index, hri_matrix_prbs_reg_t data)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRBS = data;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_PRBS_reg(const void *const hw, uint8_t submodule_index, hri_matrix_prbs_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRBS &= ~mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_PRBS_reg(const void *const hw, uint8_t submodule_index, hri_matrix_prbs_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRBS ^= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_prbs_reg_t hri_matrix_read_PRBS_reg(const void *const hw, uint8_t submodule_index)
{
	return ((Matrix *)hw)->MATRIX_PR[submodule_index].MATRIX_PRBS;
}

static inline void hri_matrix_set_MCFG_ULBT_bf(const void *const hw, uint8_t index, hri_matrix_mcfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MCFG[index] |= MATRIX_MCFG_ULBT(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_mcfg_reg_t hri_matrix_get_MCFG_ULBT_bf(const void *const hw, uint8_t index,
                                                                hri_matrix_mcfg_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_MCFG[index];
	tmp = (tmp & MATRIX_MCFG_ULBT(mask)) >> MATRIX_MCFG_ULBT_Pos;
	return tmp;
}

static inline void hri_matrix_write_MCFG_ULBT_bf(const void *const hw, uint8_t index, hri_matrix_mcfg_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_MCFG[index];
	tmp &= ~MATRIX_MCFG_ULBT_Msk;
	tmp |= MATRIX_MCFG_ULBT(data);
	((Matrix *)hw)->MATRIX_MCFG[index] = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_MCFG_ULBT_bf(const void *const hw, uint8_t index, hri_matrix_mcfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MCFG[index] &= ~MATRIX_MCFG_ULBT(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_MCFG_ULBT_bf(const void *const hw, uint8_t index, hri_matrix_mcfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MCFG[index] ^= MATRIX_MCFG_ULBT(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_mcfg_reg_t hri_matrix_read_MCFG_ULBT_bf(const void *const hw, uint8_t index)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_MCFG[index];
	tmp = (tmp & MATRIX_MCFG_ULBT_Msk) >> MATRIX_MCFG_ULBT_Pos;
	return tmp;
}

static inline void hri_matrix_set_MCFG_reg(const void *const hw, uint8_t index, hri_matrix_mcfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MCFG[index] |= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_mcfg_reg_t hri_matrix_get_MCFG_reg(const void *const hw, uint8_t index,
                                                            hri_matrix_mcfg_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_MCFG[index];
	tmp &= mask;
	return tmp;
}

static inline void hri_matrix_write_MCFG_reg(const void *const hw, uint8_t index, hri_matrix_mcfg_reg_t data)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MCFG[index] = data;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_MCFG_reg(const void *const hw, uint8_t index, hri_matrix_mcfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MCFG[index] &= ~mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_MCFG_reg(const void *const hw, uint8_t index, hri_matrix_mcfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MCFG[index] ^= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_mcfg_reg_t hri_matrix_read_MCFG_reg(const void *const hw, uint8_t index)
{
	return ((Matrix *)hw)->MATRIX_MCFG[index];
}

static inline void hri_matrix_set_SCFG_SLOT_CYCLE_bf(const void *const hw, uint8_t index, hri_matrix_scfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_SCFG[index] |= MATRIX_SCFG_SLOT_CYCLE(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_scfg_reg_t hri_matrix_get_SCFG_SLOT_CYCLE_bf(const void *const hw, uint8_t index,
                                                                      hri_matrix_scfg_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_SCFG[index];
	tmp = (tmp & MATRIX_SCFG_SLOT_CYCLE(mask)) >> MATRIX_SCFG_SLOT_CYCLE_Pos;
	return tmp;
}

static inline void hri_matrix_write_SCFG_SLOT_CYCLE_bf(const void *const hw, uint8_t index, hri_matrix_scfg_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_SCFG[index];
	tmp &= ~MATRIX_SCFG_SLOT_CYCLE_Msk;
	tmp |= MATRIX_SCFG_SLOT_CYCLE(data);
	((Matrix *)hw)->MATRIX_SCFG[index] = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_SCFG_SLOT_CYCLE_bf(const void *const hw, uint8_t index, hri_matrix_scfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_SCFG[index] &= ~MATRIX_SCFG_SLOT_CYCLE(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_SCFG_SLOT_CYCLE_bf(const void *const hw, uint8_t index, hri_matrix_scfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_SCFG[index] ^= MATRIX_SCFG_SLOT_CYCLE(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_scfg_reg_t hri_matrix_read_SCFG_SLOT_CYCLE_bf(const void *const hw, uint8_t index)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_SCFG[index];
	tmp = (tmp & MATRIX_SCFG_SLOT_CYCLE_Msk) >> MATRIX_SCFG_SLOT_CYCLE_Pos;
	return tmp;
}

static inline void hri_matrix_set_SCFG_DEFMSTR_TYPE_bf(const void *const hw, uint8_t index, hri_matrix_scfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_SCFG[index] |= MATRIX_SCFG_DEFMSTR_TYPE(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_scfg_reg_t hri_matrix_get_SCFG_DEFMSTR_TYPE_bf(const void *const hw, uint8_t index,
                                                                        hri_matrix_scfg_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_SCFG[index];
	tmp = (tmp & MATRIX_SCFG_DEFMSTR_TYPE(mask)) >> MATRIX_SCFG_DEFMSTR_TYPE_Pos;
	return tmp;
}

static inline void hri_matrix_write_SCFG_DEFMSTR_TYPE_bf(const void *const hw, uint8_t index,
                                                         hri_matrix_scfg_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_SCFG[index];
	tmp &= ~MATRIX_SCFG_DEFMSTR_TYPE_Msk;
	tmp |= MATRIX_SCFG_DEFMSTR_TYPE(data);
	((Matrix *)hw)->MATRIX_SCFG[index] = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_SCFG_DEFMSTR_TYPE_bf(const void *const hw, uint8_t index,
                                                         hri_matrix_scfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_SCFG[index] &= ~MATRIX_SCFG_DEFMSTR_TYPE(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_SCFG_DEFMSTR_TYPE_bf(const void *const hw, uint8_t index,
                                                          hri_matrix_scfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_SCFG[index] ^= MATRIX_SCFG_DEFMSTR_TYPE(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_scfg_reg_t hri_matrix_read_SCFG_DEFMSTR_TYPE_bf(const void *const hw, uint8_t index)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_SCFG[index];
	tmp = (tmp & MATRIX_SCFG_DEFMSTR_TYPE_Msk) >> MATRIX_SCFG_DEFMSTR_TYPE_Pos;
	return tmp;
}

static inline void hri_matrix_set_SCFG_FIXED_DEFMSTR_bf(const void *const hw, uint8_t index, hri_matrix_scfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_SCFG[index] |= MATRIX_SCFG_FIXED_DEFMSTR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_scfg_reg_t hri_matrix_get_SCFG_FIXED_DEFMSTR_bf(const void *const hw, uint8_t index,
                                                                         hri_matrix_scfg_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_SCFG[index];
	tmp = (tmp & MATRIX_SCFG_FIXED_DEFMSTR(mask)) >> MATRIX_SCFG_FIXED_DEFMSTR_Pos;
	return tmp;
}

static inline void hri_matrix_write_SCFG_FIXED_DEFMSTR_bf(const void *const hw, uint8_t index,
                                                          hri_matrix_scfg_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_SCFG[index];
	tmp &= ~MATRIX_SCFG_FIXED_DEFMSTR_Msk;
	tmp |= MATRIX_SCFG_FIXED_DEFMSTR(data);
	((Matrix *)hw)->MATRIX_SCFG[index] = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_SCFG_FIXED_DEFMSTR_bf(const void *const hw, uint8_t index,
                                                          hri_matrix_scfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_SCFG[index] &= ~MATRIX_SCFG_FIXED_DEFMSTR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_SCFG_FIXED_DEFMSTR_bf(const void *const hw, uint8_t index,
                                                           hri_matrix_scfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_SCFG[index] ^= MATRIX_SCFG_FIXED_DEFMSTR(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_scfg_reg_t hri_matrix_read_SCFG_FIXED_DEFMSTR_bf(const void *const hw, uint8_t index)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_SCFG[index];
	tmp = (tmp & MATRIX_SCFG_FIXED_DEFMSTR_Msk) >> MATRIX_SCFG_FIXED_DEFMSTR_Pos;
	return tmp;
}

static inline void hri_matrix_set_SCFG_reg(const void *const hw, uint8_t index, hri_matrix_scfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_SCFG[index] |= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_scfg_reg_t hri_matrix_get_SCFG_reg(const void *const hw, uint8_t index,
                                                            hri_matrix_scfg_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_SCFG[index];
	tmp &= mask;
	return tmp;
}

static inline void hri_matrix_write_SCFG_reg(const void *const hw, uint8_t index, hri_matrix_scfg_reg_t data)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_SCFG[index] = data;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_SCFG_reg(const void *const hw, uint8_t index, hri_matrix_scfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_SCFG[index] &= ~mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_SCFG_reg(const void *const hw, uint8_t index, hri_matrix_scfg_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_SCFG[index] ^= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_scfg_reg_t hri_matrix_read_SCFG_reg(const void *const hw, uint8_t index)
{
	return ((Matrix *)hw)->MATRIX_SCFG[index];
}

static inline void hri_matrix_set_MRCR_RCB0_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR |= MATRIX_MRCR_RCB0;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_MRCR_RCB0_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp = (tmp & MATRIX_MRCR_RCB0) >> MATRIX_MRCR_RCB0_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_MRCR_RCB0_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp &= ~MATRIX_MRCR_RCB0;
	tmp |= value << MATRIX_MRCR_RCB0_Pos;
	((Matrix *)hw)->MATRIX_MRCR = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_MRCR_RCB0_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR &= ~MATRIX_MRCR_RCB0;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_MRCR_RCB0_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR ^= MATRIX_MRCR_RCB0;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_MRCR_RCB1_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR |= MATRIX_MRCR_RCB1;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_MRCR_RCB1_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp = (tmp & MATRIX_MRCR_RCB1) >> MATRIX_MRCR_RCB1_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_MRCR_RCB1_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp &= ~MATRIX_MRCR_RCB1;
	tmp |= value << MATRIX_MRCR_RCB1_Pos;
	((Matrix *)hw)->MATRIX_MRCR = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_MRCR_RCB1_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR &= ~MATRIX_MRCR_RCB1;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_MRCR_RCB1_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR ^= MATRIX_MRCR_RCB1;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_MRCR_RCB2_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR |= MATRIX_MRCR_RCB2;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_MRCR_RCB2_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp = (tmp & MATRIX_MRCR_RCB2) >> MATRIX_MRCR_RCB2_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_MRCR_RCB2_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp &= ~MATRIX_MRCR_RCB2;
	tmp |= value << MATRIX_MRCR_RCB2_Pos;
	((Matrix *)hw)->MATRIX_MRCR = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_MRCR_RCB2_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR &= ~MATRIX_MRCR_RCB2;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_MRCR_RCB2_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR ^= MATRIX_MRCR_RCB2;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_MRCR_RCB3_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR |= MATRIX_MRCR_RCB3;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_MRCR_RCB3_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp = (tmp & MATRIX_MRCR_RCB3) >> MATRIX_MRCR_RCB3_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_MRCR_RCB3_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp &= ~MATRIX_MRCR_RCB3;
	tmp |= value << MATRIX_MRCR_RCB3_Pos;
	((Matrix *)hw)->MATRIX_MRCR = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_MRCR_RCB3_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR &= ~MATRIX_MRCR_RCB3;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_MRCR_RCB3_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR ^= MATRIX_MRCR_RCB3;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_MRCR_RCB4_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR |= MATRIX_MRCR_RCB4;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_MRCR_RCB4_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp = (tmp & MATRIX_MRCR_RCB4) >> MATRIX_MRCR_RCB4_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_MRCR_RCB4_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp &= ~MATRIX_MRCR_RCB4;
	tmp |= value << MATRIX_MRCR_RCB4_Pos;
	((Matrix *)hw)->MATRIX_MRCR = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_MRCR_RCB4_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR &= ~MATRIX_MRCR_RCB4;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_MRCR_RCB4_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR ^= MATRIX_MRCR_RCB4;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_MRCR_RCB5_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR |= MATRIX_MRCR_RCB5;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_MRCR_RCB5_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp = (tmp & MATRIX_MRCR_RCB5) >> MATRIX_MRCR_RCB5_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_MRCR_RCB5_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp &= ~MATRIX_MRCR_RCB5;
	tmp |= value << MATRIX_MRCR_RCB5_Pos;
	((Matrix *)hw)->MATRIX_MRCR = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_MRCR_RCB5_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR &= ~MATRIX_MRCR_RCB5;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_MRCR_RCB5_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR ^= MATRIX_MRCR_RCB5;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_MRCR_RCB6_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR |= MATRIX_MRCR_RCB6;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_MRCR_RCB6_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp = (tmp & MATRIX_MRCR_RCB6) >> MATRIX_MRCR_RCB6_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_MRCR_RCB6_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp &= ~MATRIX_MRCR_RCB6;
	tmp |= value << MATRIX_MRCR_RCB6_Pos;
	((Matrix *)hw)->MATRIX_MRCR = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_MRCR_RCB6_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR &= ~MATRIX_MRCR_RCB6;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_MRCR_RCB6_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR ^= MATRIX_MRCR_RCB6;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_MRCR_RCB8_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR |= MATRIX_MRCR_RCB8;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_MRCR_RCB8_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp = (tmp & MATRIX_MRCR_RCB8) >> MATRIX_MRCR_RCB8_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_MRCR_RCB8_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp &= ~MATRIX_MRCR_RCB8;
	tmp |= value << MATRIX_MRCR_RCB8_Pos;
	((Matrix *)hw)->MATRIX_MRCR = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_MRCR_RCB8_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR &= ~MATRIX_MRCR_RCB8;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_MRCR_RCB8_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR ^= MATRIX_MRCR_RCB8;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_MRCR_reg(const void *const hw, hri_matrix_mrcr_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR |= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_mrcr_reg_t hri_matrix_get_MRCR_reg(const void *const hw, hri_matrix_mrcr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_MRCR;
	tmp &= mask;
	return tmp;
}

static inline void hri_matrix_write_MRCR_reg(const void *const hw, hri_matrix_mrcr_reg_t data)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR = data;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_MRCR_reg(const void *const hw, hri_matrix_mrcr_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR &= ~mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_MRCR_reg(const void *const hw, hri_matrix_mrcr_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_MRCR ^= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_mrcr_reg_t hri_matrix_read_MRCR_reg(const void *const hw)
{
	return ((Matrix *)hw)->MATRIX_MRCR;
}

static inline void hri_matrix_set_CCFG_SYSIO_SYSIO4_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO |= CCFG_SYSIO_SYSIO4;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_CCFG_SYSIO_SYSIO4_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->CCFG_SYSIO;
	tmp = (tmp & CCFG_SYSIO_SYSIO4) >> CCFG_SYSIO_SYSIO4_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_CCFG_SYSIO_SYSIO4_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->CCFG_SYSIO;
	tmp &= ~CCFG_SYSIO_SYSIO4;
	tmp |= value << CCFG_SYSIO_SYSIO4_Pos;
	((Matrix *)hw)->CCFG_SYSIO = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_CCFG_SYSIO_SYSIO4_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO &= ~CCFG_SYSIO_SYSIO4;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_CCFG_SYSIO_SYSIO4_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO ^= CCFG_SYSIO_SYSIO4;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_CCFG_SYSIO_SYSIO5_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO |= CCFG_SYSIO_SYSIO5;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_CCFG_SYSIO_SYSIO5_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->CCFG_SYSIO;
	tmp = (tmp & CCFG_SYSIO_SYSIO5) >> CCFG_SYSIO_SYSIO5_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_CCFG_SYSIO_SYSIO5_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->CCFG_SYSIO;
	tmp &= ~CCFG_SYSIO_SYSIO5;
	tmp |= value << CCFG_SYSIO_SYSIO5_Pos;
	((Matrix *)hw)->CCFG_SYSIO = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_CCFG_SYSIO_SYSIO5_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO &= ~CCFG_SYSIO_SYSIO5;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_CCFG_SYSIO_SYSIO5_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO ^= CCFG_SYSIO_SYSIO5;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_CCFG_SYSIO_SYSIO6_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO |= CCFG_SYSIO_SYSIO6;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_CCFG_SYSIO_SYSIO6_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->CCFG_SYSIO;
	tmp = (tmp & CCFG_SYSIO_SYSIO6) >> CCFG_SYSIO_SYSIO6_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_CCFG_SYSIO_SYSIO6_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->CCFG_SYSIO;
	tmp &= ~CCFG_SYSIO_SYSIO6;
	tmp |= value << CCFG_SYSIO_SYSIO6_Pos;
	((Matrix *)hw)->CCFG_SYSIO = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_CCFG_SYSIO_SYSIO6_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO &= ~CCFG_SYSIO_SYSIO6;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_CCFG_SYSIO_SYSIO6_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO ^= CCFG_SYSIO_SYSIO6;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_CCFG_SYSIO_SYSIO7_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO |= CCFG_SYSIO_SYSIO7;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_CCFG_SYSIO_SYSIO7_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->CCFG_SYSIO;
	tmp = (tmp & CCFG_SYSIO_SYSIO7) >> CCFG_SYSIO_SYSIO7_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_CCFG_SYSIO_SYSIO7_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->CCFG_SYSIO;
	tmp &= ~CCFG_SYSIO_SYSIO7;
	tmp |= value << CCFG_SYSIO_SYSIO7_Pos;
	((Matrix *)hw)->CCFG_SYSIO = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_CCFG_SYSIO_SYSIO7_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO &= ~CCFG_SYSIO_SYSIO7;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_CCFG_SYSIO_SYSIO7_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO ^= CCFG_SYSIO_SYSIO7;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_CCFG_SYSIO_SYSIO12_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO |= CCFG_SYSIO_SYSIO12;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_CCFG_SYSIO_SYSIO12_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->CCFG_SYSIO;
	tmp = (tmp & CCFG_SYSIO_SYSIO12) >> CCFG_SYSIO_SYSIO12_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_CCFG_SYSIO_SYSIO12_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->CCFG_SYSIO;
	tmp &= ~CCFG_SYSIO_SYSIO12;
	tmp |= value << CCFG_SYSIO_SYSIO12_Pos;
	((Matrix *)hw)->CCFG_SYSIO = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_CCFG_SYSIO_SYSIO12_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO &= ~CCFG_SYSIO_SYSIO12;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_CCFG_SYSIO_SYSIO12_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO ^= CCFG_SYSIO_SYSIO12;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_CCFG_SYSIO_reg(const void *const hw, hri_matrix_ccfg_sysio_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO |= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_ccfg_sysio_reg_t hri_matrix_get_CCFG_SYSIO_reg(const void *const           hw,
                                                                        hri_matrix_ccfg_sysio_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->CCFG_SYSIO;
	tmp &= mask;
	return tmp;
}

static inline void hri_matrix_write_CCFG_SYSIO_reg(const void *const hw, hri_matrix_ccfg_sysio_reg_t data)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO = data;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_CCFG_SYSIO_reg(const void *const hw, hri_matrix_ccfg_sysio_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO &= ~mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_CCFG_SYSIO_reg(const void *const hw, hri_matrix_ccfg_sysio_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SYSIO ^= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_ccfg_sysio_reg_t hri_matrix_read_CCFG_SYSIO_reg(const void *const hw)
{
	return ((Matrix *)hw)->CCFG_SYSIO;
}

static inline void hri_matrix_set_CCFG_SMCNFCS_SMC_NFCS0_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS |= CCFG_SMCNFCS_SMC_NFCS0;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_CCFG_SMCNFCS_SMC_NFCS0_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->CCFG_SMCNFCS;
	tmp = (tmp & CCFG_SMCNFCS_SMC_NFCS0) >> CCFG_SMCNFCS_SMC_NFCS0_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_CCFG_SMCNFCS_SMC_NFCS0_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->CCFG_SMCNFCS;
	tmp &= ~CCFG_SMCNFCS_SMC_NFCS0;
	tmp |= value << CCFG_SMCNFCS_SMC_NFCS0_Pos;
	((Matrix *)hw)->CCFG_SMCNFCS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_CCFG_SMCNFCS_SMC_NFCS0_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS &= ~CCFG_SMCNFCS_SMC_NFCS0;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_CCFG_SMCNFCS_SMC_NFCS0_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS ^= CCFG_SMCNFCS_SMC_NFCS0;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_CCFG_SMCNFCS_SMC_NFCS1_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS |= CCFG_SMCNFCS_SMC_NFCS1;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_CCFG_SMCNFCS_SMC_NFCS1_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->CCFG_SMCNFCS;
	tmp = (tmp & CCFG_SMCNFCS_SMC_NFCS1) >> CCFG_SMCNFCS_SMC_NFCS1_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_CCFG_SMCNFCS_SMC_NFCS1_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->CCFG_SMCNFCS;
	tmp &= ~CCFG_SMCNFCS_SMC_NFCS1;
	tmp |= value << CCFG_SMCNFCS_SMC_NFCS1_Pos;
	((Matrix *)hw)->CCFG_SMCNFCS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_CCFG_SMCNFCS_SMC_NFCS1_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS &= ~CCFG_SMCNFCS_SMC_NFCS1;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_CCFG_SMCNFCS_SMC_NFCS1_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS ^= CCFG_SMCNFCS_SMC_NFCS1;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_CCFG_SMCNFCS_SMC_NFCS2_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS |= CCFG_SMCNFCS_SMC_NFCS2;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_CCFG_SMCNFCS_SMC_NFCS2_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->CCFG_SMCNFCS;
	tmp = (tmp & CCFG_SMCNFCS_SMC_NFCS2) >> CCFG_SMCNFCS_SMC_NFCS2_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_CCFG_SMCNFCS_SMC_NFCS2_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->CCFG_SMCNFCS;
	tmp &= ~CCFG_SMCNFCS_SMC_NFCS2;
	tmp |= value << CCFG_SMCNFCS_SMC_NFCS2_Pos;
	((Matrix *)hw)->CCFG_SMCNFCS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_CCFG_SMCNFCS_SMC_NFCS2_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS &= ~CCFG_SMCNFCS_SMC_NFCS2;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_CCFG_SMCNFCS_SMC_NFCS2_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS ^= CCFG_SMCNFCS_SMC_NFCS2;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_CCFG_SMCNFCS_SMC_NFCS3_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS |= CCFG_SMCNFCS_SMC_NFCS3;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_CCFG_SMCNFCS_SMC_NFCS3_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->CCFG_SMCNFCS;
	tmp = (tmp & CCFG_SMCNFCS_SMC_NFCS3) >> CCFG_SMCNFCS_SMC_NFCS3_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_CCFG_SMCNFCS_SMC_NFCS3_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->CCFG_SMCNFCS;
	tmp &= ~CCFG_SMCNFCS_SMC_NFCS3;
	tmp |= value << CCFG_SMCNFCS_SMC_NFCS3_Pos;
	((Matrix *)hw)->CCFG_SMCNFCS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_CCFG_SMCNFCS_SMC_NFCS3_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS &= ~CCFG_SMCNFCS_SMC_NFCS3;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_CCFG_SMCNFCS_SMC_NFCS3_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS ^= CCFG_SMCNFCS_SMC_NFCS3;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_CCFG_SMCNFCS_SDRAMEN_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS |= CCFG_SMCNFCS_SDRAMEN;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_CCFG_SMCNFCS_SDRAMEN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->CCFG_SMCNFCS;
	tmp = (tmp & CCFG_SMCNFCS_SDRAMEN) >> CCFG_SMCNFCS_SDRAMEN_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_CCFG_SMCNFCS_SDRAMEN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->CCFG_SMCNFCS;
	tmp &= ~CCFG_SMCNFCS_SDRAMEN;
	tmp |= value << CCFG_SMCNFCS_SDRAMEN_Pos;
	((Matrix *)hw)->CCFG_SMCNFCS = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_CCFG_SMCNFCS_SDRAMEN_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS &= ~CCFG_SMCNFCS_SDRAMEN;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_CCFG_SMCNFCS_SDRAMEN_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS ^= CCFG_SMCNFCS_SDRAMEN;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_CCFG_SMCNFCS_reg(const void *const hw, hri_matrix_ccfg_smcnfcs_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS |= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_ccfg_smcnfcs_reg_t hri_matrix_get_CCFG_SMCNFCS_reg(const void *const             hw,
                                                                            hri_matrix_ccfg_smcnfcs_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->CCFG_SMCNFCS;
	tmp &= mask;
	return tmp;
}

static inline void hri_matrix_write_CCFG_SMCNFCS_reg(const void *const hw, hri_matrix_ccfg_smcnfcs_reg_t data)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS = data;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_CCFG_SMCNFCS_reg(const void *const hw, hri_matrix_ccfg_smcnfcs_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS &= ~mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_CCFG_SMCNFCS_reg(const void *const hw, hri_matrix_ccfg_smcnfcs_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->CCFG_SMCNFCS ^= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_ccfg_smcnfcs_reg_t hri_matrix_read_CCFG_SMCNFCS_reg(const void *const hw)
{
	return ((Matrix *)hw)->CCFG_SMCNFCS;
}

static inline void hri_matrix_set_WPMR_WPEN_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_WPMR |= MATRIX_WPMR_WPEN;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_matrix_get_WPMR_WPEN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_WPMR;
	tmp = (tmp & MATRIX_WPMR_WPEN) >> MATRIX_WPMR_WPEN_Pos;
	return (bool)tmp;
}

static inline void hri_matrix_write_WPMR_WPEN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_WPMR;
	tmp &= ~MATRIX_WPMR_WPEN;
	tmp |= value << MATRIX_WPMR_WPEN_Pos;
	((Matrix *)hw)->MATRIX_WPMR = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_WPMR_WPEN_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_WPMR &= ~MATRIX_WPMR_WPEN;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_WPMR_WPEN_bit(const void *const hw)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_WPMR ^= MATRIX_WPMR_WPEN;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_set_WPMR_WPKEY_bf(const void *const hw, hri_matrix_wpmr_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_WPMR |= MATRIX_WPMR_WPKEY(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_wpmr_reg_t hri_matrix_get_WPMR_WPKEY_bf(const void *const hw, hri_matrix_wpmr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_WPMR;
	tmp = (tmp & MATRIX_WPMR_WPKEY(mask)) >> MATRIX_WPMR_WPKEY_Pos;
	return tmp;
}

static inline void hri_matrix_write_WPMR_WPKEY_bf(const void *const hw, hri_matrix_wpmr_reg_t data)
{
	uint32_t tmp;
	MATRIX_CRITICAL_SECTION_ENTER();
	tmp = ((Matrix *)hw)->MATRIX_WPMR;
	tmp &= ~MATRIX_WPMR_WPKEY_Msk;
	tmp |= MATRIX_WPMR_WPKEY(data);
	((Matrix *)hw)->MATRIX_WPMR = tmp;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_WPMR_WPKEY_bf(const void *const hw, hri_matrix_wpmr_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_WPMR &= ~MATRIX_WPMR_WPKEY(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_WPMR_WPKEY_bf(const void *const hw, hri_matrix_wpmr_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_WPMR ^= MATRIX_WPMR_WPKEY(mask);
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_wpmr_reg_t hri_matrix_read_WPMR_WPKEY_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_WPMR;
	tmp = (tmp & MATRIX_WPMR_WPKEY_Msk) >> MATRIX_WPMR_WPKEY_Pos;
	return tmp;
}

static inline void hri_matrix_set_WPMR_reg(const void *const hw, hri_matrix_wpmr_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_WPMR |= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_wpmr_reg_t hri_matrix_get_WPMR_reg(const void *const hw, hri_matrix_wpmr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_WPMR;
	tmp &= mask;
	return tmp;
}

static inline void hri_matrix_write_WPMR_reg(const void *const hw, hri_matrix_wpmr_reg_t data)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_WPMR = data;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_clear_WPMR_reg(const void *const hw, hri_matrix_wpmr_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_WPMR &= ~mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline void hri_matrix_toggle_WPMR_reg(const void *const hw, hri_matrix_wpmr_reg_t mask)
{
	MATRIX_CRITICAL_SECTION_ENTER();
	((Matrix *)hw)->MATRIX_WPMR ^= mask;
	MATRIX_CRITICAL_SECTION_LEAVE();
}

static inline hri_matrix_wpmr_reg_t hri_matrix_read_WPMR_reg(const void *const hw)
{
	return ((Matrix *)hw)->MATRIX_WPMR;
}

static inline bool hri_matrix_get_WPSR_WPVS_bit(const void *const hw)
{
	return (((Matrix *)hw)->MATRIX_WPSR & MATRIX_WPSR_WPVS) > 0;
}

static inline hri_matrix_wpsr_reg_t hri_matrix_get_WPSR_WPVSRC_bf(const void *const hw, hri_matrix_wpsr_reg_t mask)
{
	return (((Matrix *)hw)->MATRIX_WPSR & MATRIX_WPSR_WPVSRC(mask)) >> MATRIX_WPSR_WPVSRC_Pos;
}

static inline hri_matrix_wpsr_reg_t hri_matrix_read_WPSR_WPVSRC_bf(const void *const hw)
{
	return (((Matrix *)hw)->MATRIX_WPSR & MATRIX_WPSR_WPVSRC_Msk) >> MATRIX_WPSR_WPVSRC_Pos;
}

static inline hri_matrix_wpsr_reg_t hri_matrix_get_WPSR_reg(const void *const hw, hri_matrix_wpsr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Matrix *)hw)->MATRIX_WPSR;
	tmp &= mask;
	return tmp;
}

static inline hri_matrix_wpsr_reg_t hri_matrix_read_WPSR_reg(const void *const hw)
{
	return ((Matrix *)hw)->MATRIX_WPSR;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_MATRIX_S70_H_INCLUDED */
#endif /* _SAMS70_MATRIX_COMPONENT_ */
