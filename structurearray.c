#include<stdio.h>
struct student
{
	char name[20];
	int age;
};
main()
{
	struct student a[5];
	scandata(a);
	printdata(a);
}
printdata(struct student *ptr)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%s %d\n",ptr->name,ptr->age);
		ptr++;
		
	}
}
scandata(struct student *ptr)
{
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s",ptr->name);
		scanf("%d",&ptr->age);
		ptr++;
	}
}


