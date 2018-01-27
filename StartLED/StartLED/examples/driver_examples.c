/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_examples.h"
#include "driver_init.h"
#include "utils.h"

void I2S_0_example(void)
{
	/* There will be waveform after init. */
	while (1) {
		/* Breakpoint and Step over to see wave changes. */

		i2s_c_sync_set_sck_div(&I2S_0_0, 50);
		i2s_c_sync_set_sck_div(&I2S_0_0, 500);
		i2s_c_sync_set_ws_length(&I2S_0_0, 128);
		i2s_c_sync_set_ws_length(&I2S_0_0, 64);
	}
}

void I2C_0_example(void)
{
	struct io_descriptor *I2C_0_io;

	i2c_m_sync_get_io_descriptor(&I2C_0, &I2C_0_io);
	i2c_m_sync_enable(&I2C_0);
	i2c_m_sync_set_slaveaddr(&I2C_0, 0x12, I2C_M_SEVEN);
	io_write(I2C_0_io, (uint8_t *)"Hello World!", 12);
}

void delay_example(void)
{
	delay_ms(5000);
}
