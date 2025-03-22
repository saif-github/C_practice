#include <stdio.h>

int main()
{
int *ptr;
int a;
ptr=&a;
*ptr=40;
printf("\nThe integer %d is stored on address %x\t%x\n\n",*ptr,ptr,&a);
}
