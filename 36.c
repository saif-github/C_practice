/*36. Scan two integers to ‘a’ and ‘b’ and print a+b, if ‘a’ and ‘b’ both are 
		greater than 10.*/
#include<stdio.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b);
if (a>10&&b>10)
printf("%d\n",a+b);
else
printf("not valid\n");
}
