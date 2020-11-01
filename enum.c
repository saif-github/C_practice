#include<stdio.h>
enum day{sun,mon,thu,wed,tha,fri,sat};
main()
{
	enum day today;
	today=sat;
	if(today==sun)
		printf("holiday\n");
	else if(today==sat)
		printf("half working day\n");
	else
		printf("full working day\n");
}
