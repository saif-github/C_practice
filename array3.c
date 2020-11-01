#include<stdio.h>
par(int *a)
{
	int i=0;
	for(i=0;i<5;i++)
		printf("%d\n",*(a+i));	//a[i]	
}
int main()
{
	int m[5]={10,20,30,40,50};
	par(m);
	printf("\n");
	return 0;
}
