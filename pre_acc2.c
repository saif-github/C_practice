#include<stdio.h>

main()
{
int a=2,b=1,c,d;
c=a<b;
d=(a>b)&&(c<b);
printf("c=%d d=%d\n",c,d);
}
