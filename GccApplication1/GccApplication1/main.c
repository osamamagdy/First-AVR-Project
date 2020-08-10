/*
 * GccApplication1.c
 *
 * Created: 7/9/2020 10:53:10 AM
 * Author : Osama Magdy
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	
	// Initialization
	
	DDRB = 0xFF;
	PORTB = 0x00;
	
    /* Replace with your application code */
    while (1) 
    {
		PORTB = 0x01;
		_delay_ms(100);
		for (char i = 0 ; i <7 ; i++)
		{
			PORTB = PORTB<<1;
			_delay_ms(100);
		}
		
		for (char i = 0 ; i<7 ; i++)
		{
			PORTB = PORTB>>1;
			_delay_ms(100);
		}
		
		for (char i = 0 ; i <7 ; i++)
		{
			PORTB = (PORTB<<1) | 0x01;
			_delay_ms(100);
		}
		
		
		
		
		
    }
}

