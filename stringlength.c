#include<stdio.h>

int length(char *ptr)
{
	int count=0;
	while(*ptr!='\0')
	{
		count++;
		ptr++;
	}
	return count;
}
int main()
{
	char name[]="sonic khan";
	int len=0;
	len=length(name);
	printf("length=%d\n",len);
}
