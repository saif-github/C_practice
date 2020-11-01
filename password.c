#include<stdio.h>
#include<string.h>

main()
{

	
	char str1[4]="saif";
	char str2[4];

		printf("Enter the password=");
		scanf("%s",str2);
		printf("\n");

	if((strcmp(str1,str2))==0)
	printf("password is matched\n");
	else
	printf("password is not matched\n");

}



