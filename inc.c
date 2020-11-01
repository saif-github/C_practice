#include<stdio.h>
inc()
{
  int a=10;
  a++;							//incrimenting the a value
	printf("a=%d\n",a);
	return 0;
}
int main()
{
	inc();				//here we r calling inc()
	inc();				//here we r calling inc()
	inc();				//here we r calling inc()
	return 0;
}

