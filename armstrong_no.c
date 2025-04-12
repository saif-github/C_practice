#include<stdio.h>

/*if the sum of the cube of digits is equal to number itself then it is called armstrong no*/

main()
{
	int num,n,cube,d,sum;
	printf("Armstrong numbers are : \n");

	for(num=0;num<=999;num++)
	{
		n=num;
		sum=0;

		while(n>0)
		{
			d=n%10;
			n/=10;
			cube=d*d*d;
			sum=sum+cube;
		}
		if(num==sum)
		printf("%d\n",num);
	}
}
