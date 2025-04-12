#include<stdio.h>
#include<math.h>

double sqrt(double x);
int isprime(int n);

main()
{
	int num;
	print("enter a number : ");
	scanf("%d",&num);
	if(isprime(num))
	printf("number is prime\n");
	else
	printf("number is not prime\n");
}
int isprime(int n)
{
	int i,flag=1;
	for(i=2;i<=sqrt(n);i++)
	{
	if(n%i==0)
	{
	flag=0;
	break;
	}
	}
	return (flag);
}
