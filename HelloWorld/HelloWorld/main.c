
#define F_CPU 10000000L
#include <avr/io.h>


int main(void)
{
    DDRA = 0xff;            // setting all I/O's in port A as outputs
    PORTA = ~(1<<PA3);
	_delay_ms(500);		   // turning on led 0 (active low)
}
