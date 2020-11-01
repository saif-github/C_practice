#include<stdio.h>
main()
{
FILE *p;
char ch;
if((p=fopen("myfile.txt","r"))==NULL)
printf("This file doesn't exist\n");
else
{
while((ch=fgetc(p))!=EOF)
printf("%c",ch);
}
fclose(p);
}
