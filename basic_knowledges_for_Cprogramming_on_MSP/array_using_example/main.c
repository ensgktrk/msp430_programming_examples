#include <msp430.h> 
/**
 * array usage
 */
float a[5] ={1,2,3,4,5};
float *a_pointer;

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	a_pointer=a; /*burada a_pointer, a dizisinin ilk eleman�n adresini al�r. Yani dizi ad�,asl�nda o dizinin haf�zadaki ba�lang�� adresini tutmaktad�r.*/
	a_pointer +=3;/**a_pointer dizinin ilk eleman�n�n ba�lang�� de�erini tutmaktad�r. E�er dizi i�inde di�er elemanlara ula�mak istersek. Bu y�ntemi kullana biliriz.
	Bu �rnekte 4. elemana ula��lmak istenmektedir.*/
	*a_pointer =0;/*a_pointer'�n de�erinin g�sterdi�i yere 0 yaz. */
	
	while(1);
}
