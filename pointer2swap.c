#include<stdio.h>
main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("%d %d\n",a,b);
}
swap(int *p1,int *p2)
{
	int c;
	c=*p1;
	*p1=*p2;
	*p2=c;
}
