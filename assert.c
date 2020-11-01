#include<assert.h>
#include<stdio.h>

void open_record(char *record_name)
{
	assert(record_name != NULL);
	/* Rest of code */

	printf("assert sucessfull\n");
}

int main(void)
{
    char c=1;
	//open_record(&c);
	open_record(NULL);
}
