/***********************************************
5. int num[] ={23,34,12,44,56,17};
    a. What will be the o/p for the following:
    b. *num, *(num+0), *(num+j), *(j+num)
***********************************************/

#include <stdio.h>

int main()
{
	int num[] ={23,34,12,44,56,17};
		int j;
		printf("%d \n",*num);
		printf("%d \n",*&num[5]);
		printf("%d \n",*(num+0));
		printf("%d \n",*(num+2));
		for(j=0;j<8;j++)	
		{
			printf("%d ",*(num+j));		//array gives 0's after completion 
		}
		printf("\n");
		*(num+3)=30;
		for(j=0;j<6;j++)	
		{
		printf("%d ",*(j+num));
		}
		printf("\n");
}

