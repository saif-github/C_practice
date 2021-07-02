
#include <stdio.h>

typedef struct database{
char* name;
unsigned int age;
}DATABASE;

DATABASE student;

#define STUDENT() &student

int main(){
DATABASE *class10 = STUDENT();

class10->name= "Mounkika";
class10->age = 22;

printf("Name of the student is %s\n",class10->name);
printf("Age of the student is %d\n",class10->age);

return 0;
}
