#include <msp430.h> 
#include "math.h"

#define M 20
#define PI 3.1415

float sine_arr[M];

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	int count;
	for (count=0;count<M;count){sine_arr[count]=sin(2*PI*count/M);}
	while(1);
}
