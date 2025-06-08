#include<stdio.h>

main()
{
	int a[5]={1,2,3,4,5};
	printf("%d\n",*a);
	printf("%d\n",*(a+1));		//here a is address of array,*(a+1) gives a[1]
	printf("%d\n",*(a+2));
	printf("%d\n",*(a+6));		//after the array size it will print '0'

	printf("%d\n",a[0]);
	printf("%d\n",a[1]);
	printf("%d\n",*&a[3]);
}

