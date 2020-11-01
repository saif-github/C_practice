#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fptr;
	unsigned int ch;
	if((fptr=fopen("myfile.txt","w"))==NULL)
	{
		printf("file does not exist\n");
		exit(0);
	}
	else
	{
		printf("enter text:\n");
		while((ch=getchar())!=EOF)
		fputc(ch,fptr);
	}
	fclose(fptr);
}
/*press cntrl+z to stop reading characters */
