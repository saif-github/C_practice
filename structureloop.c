#include<stdio.h>
struct person
{
	char name[20];
	int age;
};
int main()
{
	struct person student[2];
	int i=0;
	for(i=0;i<2;i++)
	{
		printf("enter name:");
		scanf("%s",student[i].name);
		printf("enter age:");
		scanf("%d",&student[i].age);
	}
	for(i=0;i<2;i++)
	{
		printstructurevalue(student[i]);
	}
}
printstructurevalue(struct person p1)
{
	printf("printstructure value:::%s:%d\n",p1.name,p1.age);
}
