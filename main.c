#define F_CPU 16000000UL
#define BAUD_RATE 9600
#define BAUD_PRESCALER (((F_CPU / (BAUD_RATE * 16UL))) - 1)

/*--------------------Libraries---------------------------*/
#include <stdlib.h>
#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>

#include "inc/uart.h"

/*--------------------Variables---------------------------*/
char String[10];

/*-----------------------------------------------------------*/

int main(void)
{
		UART_init(BAUD_PRESCALER); 

		while(1)
		{
			sprintf(String,"Hello world! \n");
			UART_putstring(String);
			_delay_ms(1000);  

			sprintf(String,"The year is %u\n", 2020);
			UART_putstring(String);
			_delay_ms(1000);  
		}
}	
