#include<stdio.h>
int main()
{
	int a=123;
	printf("%-5.3d,hi\n",a);
	printf("%-3.4d,bye\n",a);
	printf("%3.4d\n",a);
	printf("%7.3d\n",a);
	printf("%-7.3d,hello\n",a);
	//printf("%-07d,hi\n",a);
	printf("%07d\n",a);
	//printf("%0.3d\n",a);
}
/*11. Display the output for a integer in 7 columns, with a sign and left aligned.*/
