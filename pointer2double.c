#include<stdio.h>
main()
{
	int a;
	printf("enter the no:");
	scanf("%d",&a);
	twice(&a);
	printf("the doubled no is:%d\n",a);
}
twice(int *x)
{
	*x=*x*2;
}
