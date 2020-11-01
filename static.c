#include<stdio.h>
main()
{
	static int a;
	printf("a=%d\n",a);
}
/*here static initialize the value from 0 and return to main()*/
// if we use just int a it take some garbage value
