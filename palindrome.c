#include<stdio.h>
int main()
{
	int i,j;
	char com1,com2;
     char *ptr1,*ptr2;
	char m[5]="sonic";
	com1=calla(ptr1);
	com2=callb(ptr2);
	if(com1==com2)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("not palindrome\n");
	}
}
calla(char *ptr1)
{
	int i;
	for(i=0;i<5;i++)
     ptr1++;
}
callb(char *ptr2)
{
	int 
	




