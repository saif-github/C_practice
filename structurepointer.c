#include<stdio.h>

struct dataofperson
{
	char name[20];
	int age;
	char gen;
};

int main()
{
	struct dataofperson p1={"sonic khan",21,'m'};
	struct dataofperson *ptr;
	ptr=&p1;
	printf("%s %d %c\n",(*ptr).name,(*ptr).age,(*ptr).gen);
	printstructvalue(p1);
	printf("\n");
}
printstructvalue(struct dataofperson p1)
{
	printf("%s:%d:%c\n",p1.name,p1.age,p1.gen);
}	
