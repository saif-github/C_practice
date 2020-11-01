#include<stdio.h>
int main()
{
	  int a=10;				//here if we give static or global then no problem
	  static int b=a;                       // here if we give static the program does't executes
	  printf("a=%d\n b=%d\n",a,b);
	  return 0;
}
/* In this program if we simply take int we get o/p,
but as if we change it to static in only b=a we don't get o/p,
here the program does't even go for execution it gets error in compilation itself,
if it have gone in execution it would have fetch a value and put in b*/
