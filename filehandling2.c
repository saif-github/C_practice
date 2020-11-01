#include<stdio.h>
main()
{
	FILE *fp;
	char s[10];
	fp=fopen("merifile","r+");
	fscanf(fp,"%s",s);
	fclose(fp);
	printf("%s\n",s);
}
/*don't give space for string in merifile*/
