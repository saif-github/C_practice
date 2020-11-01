#include <stdio.h>

struct my
{
int age;
char name[20];
};

main()
{
struct my student;
struct my *ptr;
ptr=&student;
ptr->age=21;
ptr->name="saif"

printf("%d %s \n",ptr->age,&ptr->name);

}
