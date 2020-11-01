#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	int *p;
	c=a*b;
	p=&c;
	b=*p/b;
	a=*p/a;
	printf("%d %d\n",a,b);
}
