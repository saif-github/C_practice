#include<stdio.h>
main()
{
	int a=0Xfafbfcfd;
	char *p;
	p=(char*) &a;
	printf("%c",p);
}
