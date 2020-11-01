#include<stdio.h>		//apend
main()
{
	FILE *fp;
	char s[10];
	fp=fopen("myfile","a");
	fprintf(fp,"khan is khan\n");
	fclose(fp);
}
