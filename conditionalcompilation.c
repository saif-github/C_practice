#include<stdio.h>

#define SEASON 1

#define TRIPLE(x) x*3;		//comments this define and chec for conditions
#define DOUBLE(x) x*2;
#define SQUARE(x) x*x;

int main()
{
	int var=10;			//CONDITIONAL COMPILATION
	int result=0;

	#if SEASON==1
	result=TRIPLE(var);		//if any condition false it will not appear in the preprocessor file

	#elif SEASON==2
	result=SQUARE(var);

	#else
	result=DOUBLE(var);

	#endif
	printf("result=%d\n",result);
	return 0;
}
/*check in file ccpre.i */
