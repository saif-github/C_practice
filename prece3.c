#include<stdio.h>
main()
{
	int a,b=5,c=11,d=10;
	a= b++ & --c |  d++;
	printf("a= %d\n b=%d\n c=%d\n d=%d\n",a,b,c);
	return 0;
}
/* && and || are the logical operators-always gives o/p in 1 or 0
    & and | are the bit wise operators*/

