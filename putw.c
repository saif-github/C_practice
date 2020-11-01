#include<stdio.h>
main()
{
	FILe *fptr;
	int value;
	fptr=fopen("num.dat","wb");
	for(value=1;value<=30;value++);
	putw(value,fptr);
	fclose(fptr);
}
