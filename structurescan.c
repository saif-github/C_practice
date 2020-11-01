#include<stdio.h>
struct dataofperson
{
	char name[20];
	int age;
	char gen;
	char qualification[20];
};
int main()
{
	struct dataofperson p1,p2;
	printf("enter the data of first person:\n");
	printf("enter the name:");
	scanf("%s",p1.name);
	printf("enter the age:");
	scanf("%d",&p1.age);
	printf("enter the gender:");
	scanf("%s",p1.gen);
	printf("enter the qualification:");
	scanf("%s",p1.qualification);
	printf("\n");
	printf("enter the data of second person:");
	printf("enter the name:");
	scanf("%s",p2.name);
	printf("enter the age:");
	scanf("%d",&p2.age);
	printf("enter the gender:");
	scanf("%S",p2.gen);
	printf("enter the qualification:");
	scanf("%s",p2.qualification);
	printf("\n");
}
