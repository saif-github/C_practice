#include<stdio.h>
main()
{
FILE *fp;
char name[10];
int age;
fp=fopen("rec.dat","w");
printf("enter your name and age:");
scanf("%s %d ",name,&age);
fprintf(fp,"my name is %s and age is %d",name,age);
fclose(fp);
}
