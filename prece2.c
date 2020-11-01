#include<stdio.h>
main()
{
	char a,b= -1,c= -2,d= 3,e= 5;
	a= ++b || --c && ! d++;
	return 0;
}
