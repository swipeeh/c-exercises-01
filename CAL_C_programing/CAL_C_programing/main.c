/*
 * CAL_C_programing.c
 *
 * Created: 10-Apr-18 8:33:34 AM
 * Author : patih
 */ 


#define F_CPU 10000000L //defining the cpu otherwise there will be no delay for half a second, L means long
#include <avr/io.h>
#include <util/delay.h> //this is the import for delays
#define ALL_ON 0xff //this is parameter 
#include <stdbool.h> //we can use statements as true and false

void led_on(int led_no);
void led_off(int led_no);

int main(void)
{
	DDRA = ALL_ON;
	PORTA = 0xfe;
	int led_state = 0;
	
	//loop for blinking 
	while(1) //we can put there true or 1 
	{
		
		if(led_state)
		{
			led_on(3);
			led_state = 1;
		}
		else
		{
			led_off(3);
			led_state = 0;
		}
		
		//calling functions 
		//led_on(4);
		//led_off(4);
	}
}
	void led_on(int led_no)
	{
		PORTA &= ~(1<<led_no); // & ~ this means and inverse
		_delay_ms(500);
		return;
	}
	
	void led_off(int led_no)
	{
		PORTA = ~(1<<led_no);
		_delay_ms(500);
		return;
	}

