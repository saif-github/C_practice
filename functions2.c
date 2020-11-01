/*10. int funct2(int b) { if (b == 0) return b; else funct1(--b); }

int funct1(int a) { if (a == 0) return a; else funct2(--a); }

void main() { int a=7; printf("%d",funct1(a)); }*/

#include<stdio.h>

int funct2(int b)
{
	if (b == 0) 
	return b; 
	else 
	funct1(--b);
}

int funct1(int a)
{
	 if (a == 0)
	 return a;
	 else
	 funct2(--a);
 }

void main()
{
 	int a=7;
 	printf("%d\n",funct1(a)); 
}

