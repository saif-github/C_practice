#include<stdio.h>
struct person
{
	char name[20];
	int age;
	char gen;
};
main()
{
	struct person p1={"BaigtheGreat",21,'m'};
	printf("%s::%d::%c\n",p1.name,p1.age,p1.gen);
}
