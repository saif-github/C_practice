#include<stdio.h>
int main()
{
	int i;
	char name[]="saif ulla baig";
	for(i=0;name[i]!='\0';i++)		//here condition is till null
	{
		printf("%c",name[i]);		//if we r using for loop we have to use null to terminate
	}	
	printf("\n");
	return 0;
}
/*observe the condition name[i]!='\0' that print string till null */
