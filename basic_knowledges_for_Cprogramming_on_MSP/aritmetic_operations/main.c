#include <msp430.h> 


/**
 * main.c
 */
unsigned int c;
unsigned char d;
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	int a=32767;
	int b;
	c= 0xFFFF;
	unsigned char d= 0x00;
	int e=10;
	float f=10.1;
	int g= 0;
	float h= 0.0;
	a=a+1;
	b=17/2;
	c=c+0x0001;
	d=d-0x01;
	e=e/0;
	f=f/0;
	g=g/g;
	h=h/h;
	
while(1);
}
