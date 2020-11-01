#include<stdio.h>
union my
{
	int a;
	char b;
	short int c;
}
main()
{
	union my example;
	example.a = 256;
	printf("a=%d\n",example.a);
	example.b = 128;
	printf("b=%u\n",example.b);
	example.b = 1;
	printf("c=%hd\n",example.c);
}

