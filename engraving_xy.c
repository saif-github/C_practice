#include<stdio.h>

int print_x_y(int x,int y);

int main()
{
	int x1,x2,y1,y2;
	printf("enter the starting point-");
	scanf("%d",&x1);
	scanf("%d",&y1);
	
	printf("enter the endng point-");
	scanf("%d",&x2);
	scanf("%d",&y2);

	int i,j;
	if(x2>=x1 & y2>=y1)
	{
		printf("enter only the x-y plane cordinates\n");
		if(x2!=x1 & y2==y1)
		{
			printf("straigth line-0 degree\n");
			for(i=x1;i<=x2;i++)
			{
				printf("(%d,%d)\n",i,y2);
			}
		}
		else if(x2==x1 & y2!=y1)
		{
			printf("straight line-90 degree\n");
			for(i=y1;i<=y2;i++)
			{
				printf("(%d,%d)\n",x2,i);
			}
		}
		else if(x2!=x1 & y2!=y1)
		{
			if(x2==y2)
			{
				printf("straigth line-45 degree\n");
				for(i=x1;i<=x2;i++)

				printf("(%d,%d)\n",i,i);
			}
			else if(x2==(4*y2))
			{
				printf("straigth line-15 degree\n");
				j=x1;
				for(i=y1;i<=y2;i++)
				{
				 	//for(j=x1;j<=x2;j+=4);
					print_x_y(j,i);
					j+=4;
					//printf("(%d,%d)\n",j,i);
				    
				}
			}
			else
			printf("no movement\n");
		}
		else
			printf("no movement\n");
	}
	else
		printf("parameters not suitable\n");
return 0;
}

int print_x_y(int x,int y)
{
printf("(%d,%d)\n",x,y);
}

