#include<stdio.h>

main()
{
	int n,nsave,rem,d,j=1,dec=0;
	printf("enter the no in binary :");
	scanf("%d",&n);
	nsave=n;
	while(n>0)
	{
		rem=n%10;
		d=rem*j;
		dec+=d;
		j*=2;
		n/=10;
	}
	printf("Binary number = %d ,Decimal number = %d\n",nsave,dec);
}
