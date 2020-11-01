#include<stdio.h>
struct dataofperson
{
	char name[20];			//address for ex:1000
	int age;				//	    		  1020
	char gen;				//	    		  1024
};
int main()
{
	struct dataofperson p1={"sonic khan",21,'m'};
	struct dataofperson *ptr;
	ptr=&p1;
	ptr->age=25;					//here this is how we can change data
	printf("%s %d %c\n",ptr->name,ptr->age,ptr->gen);	// -> is use to assign pointers value 
	printf("\n");
}	
