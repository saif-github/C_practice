#include<stdio.h>
main()
{
char a='s',*p1=&a;
int b=52,*p2=&b;
float c=15.2,*p3=&c;
double d=18.623,*p4=&d;

printf("%d  %d\n",sizeof(*p1),sizeof(p1));
printf("%d  %d\n",sizeof(*p2),sizeof(p2));
printf("%d  %d\n",sizeof(*p3),sizeof(p3));
printf("%d  %d\n",sizeof(*p4),sizeof(p4));
}
