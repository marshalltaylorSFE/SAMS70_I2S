#include <atmel_start.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	while (true) {
		delay_ms(1000);
		gpio_toggle_pin_level(STATLED);
	}
}
