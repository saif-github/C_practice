#include <stdio.h>
#include <stdarg.h>

float fun( int noa, .../* elipsis */)
{
	int count;
	int i_data; //int data
	float sum; //char data

	
	va_list a_list;	//declare argument list.
	
	va_start(a_list, noa);
	
	sum = 0;
	for (count = 0; count < noa; count++)
	{
		i_data = va_arg(a_list, int);
		sum += i_data;
		printf("element number: %d = %d\n", count, i_data);
	}
	
	sum /= (float)count;
	va_end(a_list);
	
	return (sum);
}




int main()
{
	printf("%f\n", fun(3, 100, 55, 'A'));
	return 0;
}
