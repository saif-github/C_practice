#include <stdio.h>

int main()
{

	unsigned int arr[] = { 10 , 20};

	unsigned int *ptr = arr;

	//printf("x1 = %p  x2 = %p \n", ptr , ptr++);
	//printf("  x = %d \n",++*ptr);
	printf("  x = %d \n",*ptr++);
	//printf("  x = %d \n",*++ptr);

}
