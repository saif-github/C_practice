#include<stdio.h>
#include<string.h>

main()
{
	
	const char *mytext = "The quick brown fox jumps over the lazy dog\n";   
	FILE *bfp= fopen("test.txt", "wb");   
	
	if (bfp) 
	{     
		//fwrite(data-element-to-be-written, size_of_elements, number_of_elements, pointer-to-file);
		fwrite(mytext, sizeof(char), strlen(mytext), bfp) ;     
		fclose(bfp) ;   
	} 
}

/*fread() and fwrite() functions are used to read and write is a binary file.*/

/*fread() is also used in the same way, with the same arguments like fwrite() function. */
