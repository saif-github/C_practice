#include<stdio.h>

main()
{
	char a[10];		//this will take 10 character space
	int i;
	for(i=0;i<10;i++)
	scanf("%c",&a[i]);
	
	
	for(i=0;i<10;i++)
	printf("%c",a[i]);
}
