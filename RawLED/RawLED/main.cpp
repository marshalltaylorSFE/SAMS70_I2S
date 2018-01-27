/*
 * RawLED.cpp
 *
 * Created: 1/25/2018 5:36:19 PM
 * Author : marshall.taylor
 */ 


#include "sam.h"

volatile int number;

int main(void)
{
    /* Initialize the SAM system */
    SystemInit();

    /* Replace with your application code */
    while (1) 
    {
		number++;
    }
}
