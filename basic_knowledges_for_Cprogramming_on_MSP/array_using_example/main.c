#include <msp430.h> 
/**
 * array usage
 */
float a[5] ={1,2,3,4,5};
float *a_pointer;

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	a_pointer=a; /*burada a_pointer, a dizisinin ilk elemanýn adresini alýr. Yani dizi adý,aslýnda o dizinin hafýzadaki baþlangýç adresini tutmaktadýr.*/
	a_pointer +=3;/**a_pointer dizinin ilk elemanýnýn baþlangýç deðerini tutmaktadýr. Eðer dizi içinde diðer elemanlara ulaþmak istersek. Bu yöntemi kullana biliriz.
	Bu örnekte 4. elemana ulaþýlmak istenmektedir.*/
	*a_pointer =0;/*a_pointer'ýn deðerinin gösterdiði yere 0 yaz. */
	
	while(1);
}
