#include <msp430.h> 

#define CONST 4
int a=0,b=0;
const int c[]={1,2,3,4};
int d= 32767;
int SR_bits;

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	a=2*CONST;
	b=4*CONST;
	d=d+c[1];
	SR_bits=_get_SR_register();//SR bitlerini aktif eder.
	while(1);
}
