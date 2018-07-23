#include <msp430.h> 
/**
 * The dynamic array using a pointer.
 */
int a=0;
int *a_pointer;

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	int count;
	a_pointer=&a;
	for(count=1;count<10;count++)
	{
	    a_pointer++; /*Burada a_pointer+1,a_pointer+2 yaparak pointer ile ifade edilmiþ olan
	    dizinin indisleri arasýnda geziniyoruz.*/
	    *a_pointer=count;
	}
	while(1);
}
