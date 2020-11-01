#include<stdio.h>
int main()
{
	int i;
	char name[]="sonic khan";
	printf("name=%p\n",name);
	printf("%s\n",name);
	pass(name);
}
pass(char *ptr)
{
	printf("ptr=%p\n",ptr);
	printf("name:%s\n",ptr);
}
