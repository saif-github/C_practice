#include<stdio.h>

main()
{
int a=40,b=a;
int *ptr;
ptr=&a;
*(ptr+1)=b;
printf(" %d %d \n ",*ptr,*(ptr+1));
}
