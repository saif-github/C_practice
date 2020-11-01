#include <stdio.h>

int main ()
{
	unsigned int *ptr = NULL;
	printf("The value of ptr is : %x\n", &ptr);
	return 0;
}

/*On most of the operating systems, programs are not permitted to access memory at
address 0 because that memory is reserved by the operating system.*/

/*by convention, if a pointer contains the null
(zero) value, it is assumed to point to nothing.*/
