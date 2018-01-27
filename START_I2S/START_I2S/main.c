#include <atmel_start.h>
#include <stdio.h>
#include <hpl_i2c_m_sync.h>

#define AK4618VQ_SLAVE_ADDRESS 0x20 //“0010000”


int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	
	//Get UART stuff ready
	USART_0_example();
	struct io_descriptor *io;
	usart_async_get_io_descriptor(&USART_0, &io);
	usart_async_enable(&USART_0);

	//Turn on CODEC
	delay_ms(100);
	gpio_set_pin_level(PDWN, false);
	delay_ms(100);
	gpio_set_pin_level(PDWN, true);
	delay_ms(100);
	
	//Get I2C stuff ready
	struct io_descriptor *I2C_0_io;
	uint8_t command_data[2];
	
	i2c_m_sync_get_io_descriptor(&I2C_0, &I2C_0_io);
	i2c_m_sync_enable(&I2C_0);
	i2c_m_sync_set_slaveaddr(&I2C_0, AK4618VQ_SLAVE_ADDRESS, I2C_M_SEVEN);

	//Dummy write for address
	command_data[0] = 0xB0;
	command_data[1] = 0xAF;
	//struct _i2c_m_msg {
	//	uint16_t          addr;
	//	volatile uint16_t flags;
	//	int32_t           len;
	//	uint8_t *         buffer;
	//};
	
	
	struct _i2c_m_msg temp;
	temp.addr = 0x10;
	temp.flags = I2C_M_SEVEN;
	temp.len = 2;
	temp.buffer = &command_data;
	_i2c_m_sync_transfer(&I2C_0, &temp);
	
	//i2c_m_sync_cmd_write(&I2C_0, (uint8_t)0x01, &command_data, 1);
	//io_write(&I2C_0, &command_data, 2);
	delay_ms(1);
	//Read data
	//i2c_m_sync_cmd_read(&I2C_0, (uint8_t)0x04, &command_data, 1);
	
	char output[20];
	sprintf(output, "data: %d",command_data[0]);
	int i;
	for(i = 0; (i < 20)&&(output[i]!=0x00); i++);
	io_write(io, "\n\r", 2);
	io_write(io, output, i);
	io_write(io, "\n\r", 2);
	
	/* Replace with your application code */
	while (1) {
		delay_ms(1000);
		gpio_toggle_pin_level(StatLED);
		io_write(io, "hello", 2);
	}
}
