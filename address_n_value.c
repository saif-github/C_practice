#include <stdio.h>

int main()
{
int *ptr;
int a;
ptr=&a;
*ptr=40;
printf("\nThe integer %d is stored on address %d\t%d\n\n",*ptr,ptr,&a);
}
