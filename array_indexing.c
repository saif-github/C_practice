#include<stdio.h>

main()
{
	int a[5]={1,2,3,4,5};
	
	printf("%p\n",a);
	//printf("%p\n",a++);
	printf("%p\n",a+1);		//a++ is not possible in array address insted we can use a+1
	printf("%p\n",&a[1]);
}

