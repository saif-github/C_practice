
extern int x;

void func3(void)
{
/*if the variable x is needed only in this function then we use extern in this function*/
	//extern int x;
	printf("%d\n",x);
	printf("function 3 executed\n");
}

void func4(void)
{
	printf("%d\n",x);
	printf("function 4 executed\n");
}
