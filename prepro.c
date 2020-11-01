#include<stdio.h>		//MACRO EXPANSION
#include"myheader.h"	//header file containing arguments or data need to be include here	
int main()
{
	int var=10;
	int b=15;
	int result=0;
	result=DOUBLE*(var);
	printf("%d\n",result);
	doublethis(&b);
	result=TRIPLE(b);
	printf("%d\n",b);
	printf("%d\n",result);
	result=PRODUCT(10,20);
	printf("%d\n",result);
	PRINTHELLO;
	printf("preprocessor director\n");
}
void doublethis(int *var)
{
	*var=*var*DOUBLE;
	printf("%d\n",*var);
}
/*refer myheader.h file and compile and check for changes in preprocessor file prepro.i*/

