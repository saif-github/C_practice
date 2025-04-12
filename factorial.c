/*29. Write a program to display the factorial of an entered integer */
#include<stdio.h>
int main()
{
	int x,i;
	scanf("%d",&x);
	int a=1,b;
	b=x;
	for(i=1;i<=x;i++)
	{
		a=a*b;
		--b;

		}
	printf("%d\n",a);
}
