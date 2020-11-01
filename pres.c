#include<stdio.h>
main()
{
	volatile char a,b= -1;
	a= b++ - b++ + b-- + --b;
	printf("a=%d\n",a);
	return 0;
}
