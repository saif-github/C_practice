#include<stdio.h>
void main()
{
	int x;
	int i,j,s;
	int c=1;
	printf("enter the no of rows:");
	scanf("%d",&x);
	for (i=1;i<=x;i++)
	{
		  for(s=x-i;s>=1;s--)
		    {
		      printf(" ");
		    }
		for(j=1;j<=(2*i)-1;j++)
		  {
		    printf("%d",c);
		  }
		printf("\n");
	}
}

