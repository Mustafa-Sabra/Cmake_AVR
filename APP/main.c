/*
 * main.c
 *
 *  Created on: Jun 3, 2024
 *      Author: musta
 */

#include "STD_TYPES.h"
#include "LED_int.h"
#include "DIO_init.h"

int main(void)
{
	u8 BTN_value = 0;
	LED_e led_arr[] = {LED_e_1};

	DIO_u8setPinDir(DIO_PORT_A,DIO_PIN_2,DIO_INPUT);
	DIO_u8setPinVal(DIO_PORT_A,DIO_PIN_2,DIO_HIGH);

	LED_vidInit(led_arr,1);

	while(1)
	{
		DIO_u8getPinVal(DIO_PORT_A,DIO_PIN_2,&BTN_value);
		if(BTN_value)
		{
			LED_vidTurnOffLed(LED_e_1);
		}
		else
		{
			LED_vidTurnOnLed(LED_e_1);
		}
	}

	return 0;
}
