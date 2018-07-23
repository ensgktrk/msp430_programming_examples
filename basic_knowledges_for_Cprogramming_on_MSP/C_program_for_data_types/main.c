#include <msp430.h> 


char a='@';
short b = -1;
int c=2;
long d= 3;
float e= 12.3;
float f= -255.25;
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	a='@';
	while(1);
}
