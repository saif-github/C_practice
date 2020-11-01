#include<stdio.h>
int main()
{
	int local;
	{
		int local=10;
		printf("local=%d\n",local);
	}
	printf("local=%d\n",local);
	return 0;
}
/*here local=10 block executes first to give 10*/
/*int local executes but does't prints ,it prints after block 1*/
