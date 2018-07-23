#include <msp430.h> 


/**
 * main.c
 */
unsigned char a=0x02;
unsigned char b= 0xFF;

unsigned char c,d,e,f;

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	c=a|b; //and operation
	d=a&b; //or operation
	e= a^b; // xor-toggle operation
	f=~a; //not operation
	return 0;
}
