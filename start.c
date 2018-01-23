
#include <stdio.h>                     /* Used for (f)printf() functions */
#include <stdlib.h>                                   /* Used for exit() */

// a global variable:
int global; // is set to 0

void foo() {
	printf("PRINTINF GLOBAL\n");
	printf("In DEC the number is %d\n", global);
	printf("In HEX the number is %x\n", global);
	printf("In OCT the number is %o\n", global);
	
	int local;  // set to whatever happens to be in memory there
  	printf("\nPRINTINF LOCAL\n");
	printf("In DEC the number is %d\n", local);
	printf("In HEX the number is %x\n", local);
	printf("In OCT the number is %o\n", local);
	
	local = 100;
	
	printf("\nIn DEC the number is %d\n", local);
	printf("In HEX the number is %x\n", local);
	printf("In OCT the number is %o\n", local);
	
	printf("\nAddress of local = %p\n", &local);
	
	/* what about %X\n as an argument?  */
}

void foo2()
{
	//DEFINING VARIABLES IN OCTAL AND HEXADECIMAL
	// Often, when writing systems programs, the programmer needs to use a different number base rather than the default decimal.
	// Integer constants can be defined in octal or hex by using the associated prefix, e.g., to define an integer as an octal constant use %o

	int    oct = 0567;
	// To define an integer as a hex constant use %0x
	int    sum  = 0x7ab4;
	int    flag = 0x7AB4;     /* Note upper or lowercase hex ok */
}

int main (void){
	int x,y,z; 
	
	int *a,b,c; 
	
	x = 2;
	y = 5;
	z = 10; 
	
	a = &x;
	b = y;
	
	foo();
	
	for(int i; i<10; i++)
	{
		printf("Hola Mundo!\n");
	}
	
    return (EXIT_SUCCESS);
}
