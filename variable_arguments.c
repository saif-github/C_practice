/*program to find out sum of integers*/

#include<stdio.h>
#include<stdarg.h>

int sum(int , ...);  //ellipsis(...)

main()
{
	printf("total=%d\n",sum(2,99,68));
	printf("total=%d\n",sum(3,11,79,32));
	printf("total=%d\n",sum(5,23,34,45,56,78));
}

int sum(int num, ...)		//passing variable arguments
{
	int i;
	va_list ap;		//argument pointer
	int arg,total=0;
	printf("no of arguments=%d\n",num);
/*va_start initalize ap and points to the first unnamed argument passed to the function */
	va_start(ap,num);
	
	printf("arguments=");

	for(i=0;i<num;i++)
	{
/*va_arg returns the value of current arguments and increment ap */
		arg=va_arg(ap,int);	
		printf("%d ",arg);
		total+=arg;
	}
	printf("\n");
/*va_end sets the argument pointer to NULL */
	va_end(ap);
	return total;
}
