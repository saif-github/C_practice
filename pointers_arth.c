/*************************************************
4. Try the following pointer arithmetic
        a. Addition of number to a pointer
        b. Subtraction of number from a pointer
        c. Addition of two pointers
        d. Multiplying a pointer with number
        e. Dividing a pointer with a number
**************************************************/

#include<stdio.h>

int main()
{
	int x=5,y=2;
	int a=0,b=0,c=0,d=0,e=0;
	int *ptr;
	int *ptr2;
	ptr=&x ;
	ptr2=&y;
	a= (*ptr)+5;
	b= (*ptr)-5;
	c=(*ptr)+(*ptr2);
	d=(*ptr)*2;
	e=(*ptr)/2;
	printf("%d %d %d %d %d\n",a,b,c,d,e);
}


