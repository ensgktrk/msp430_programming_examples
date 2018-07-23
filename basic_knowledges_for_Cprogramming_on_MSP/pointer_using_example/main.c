#include <msp430.h> 
/**
 * Pointer Using example.
 */
int a=3;
int *a_pointer;
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	a_pointer=&a;
	*a_pointer=5;
	while(1);
}
