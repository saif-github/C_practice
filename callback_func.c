
//Callback function demonstration
//An event in one thread results in the invocation, or callback, of a function in another thread.

#include<stdio.h>
#include<stdlib.h>
#include <pthread.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>


typedef struct _factorialData {
	int number;
	int result;
	void (*callBack)(struct _factorialData*);
}FactorialData;


void* factorial(void *args) {

FactorialData *factorialData = (FactorialData*) args; //typecasting

void (*callBack)(FactorialData*); // Function prototype

int number = factorialData->number;

callBack = factorialData->callBack;

callBack(factorialData);

int num = 1;
	for(int i = 1; i<=number; i++) {
		num *= i;
	}

factorialData->result = num;

callBack(factorialData);

pthread_exit(NULL);
}

void callBackFunction(FactorialData *factorialData) {
	printf("Factorial is %d\n", factorialData->result);
}

int main(int arc,char **argv)
{
pthread_t thread_id;

FactorialData *data =(FactorialData*) malloc(sizeof(FactorialData));

if(!data) {
printf("Failed to allocate memory\n");
return -1;
}

data->number = 5;
data->callBack = callBackFunction;

int thread =pthread_create(&thread_id, NULL,factorial,(void *)data);

sleep(2000);

return 0;
}
