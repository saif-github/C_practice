#include<stdio.h>

struct a
{
short int a;
char b;
short int c;
char d;
};

int main()
{
	printf("%d \n",sizeof(struct a));
}

