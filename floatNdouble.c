#include<stdio.h>
main()
{
	float a=55555555555555555.555555555555;
	double b=55555555555555555.555555555555;
	printf("fractional values are:\na=%f\n b=%f\n",a,b);
	return 0;
}
/*float is 4byte & double is 8byte
both take fractional values
but using float and double in embedded c is a sin,
look here for values in a & b and observe that float looses it value 
in middle*/
/*5. Print entered float and a double, distinguish between them.*/

