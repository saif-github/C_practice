#include<stdio.h>
void main() 
		{
		printf("asdff");
			main(); 
		}
		/*here the stack over flows and cause segmentation fault*/
		/*we r calling main() in the main() it keeps on making stack frames 
		finally segmentation fault*/
