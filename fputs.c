#include<stdio.h>
main()
{
	FILE *fptr;
	char str[80];
	fptr=fopen("test.txt","w");
	printf("enter the text\n");

	while((gets(str))!=NULL)
	fputs(str,fptr);
	fclose(fptr);
}
