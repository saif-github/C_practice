#include<stdio.h>
int main()
{
int a=5;
a=fact(a);
printf("in main:%d\n",a);
}
fact(n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		printf("before:%d\n",n);
		return n*fact(n-1);
	}
	printf("after:%d\n",n);

}


/*int funct2(int b)
 { 
	if (b == 0) 
	{
     printf("b=%d\n",b);
	return b;
	}
	else 
	{
	printf("else b=%d\n",b);
	funct1(--b);
	}
 }

int funct1(int a) 
{
	 if (a == 0) 
	{
	printf("a=%d\n",a);
	return a; 
	}
	else 
	{
	printf("else a=%d\n",a);
	funct2(--a);
	 }
}
void main() 
{ 
	int a=7; 
	printf("main=%d\n",funct1(a)); 
}
*/

