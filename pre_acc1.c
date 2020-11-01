#include<stdio.h>

main()
{
int a=-3;
a=-a-a+!a;		//!a-->-(-a)-->(L-->R)
printf("a=%d \n",a);
}
