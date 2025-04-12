#include <stdio.h>

/*to find the no of bits on state in a byte (i.e no os 1's) */



main()
{
	int a,b=0x01,c=0,d=0;
	int count=0;
	int i;

	printf("enter the no:");
	scanf("%d",&a);

	for(i=0;i<sizeof(int);i++)
	{
		c=(b<<i);
		d=a&c;

		if(d!=0)
		{
			count++;
		}
	
	printf("%d\t",c);
	printf("%d\n",d!=0?1:0);	
	}

	printf("the no of 1's in a byte is:%d\n",count);
}
