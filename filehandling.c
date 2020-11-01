#include<stdio.h>
main()
{
	FILE *fp;		//we use a structure pointer of file type to declare a file.

	fp=fopen("myfile","w+");		//try for appending,reading,writing see in file usinf cat

/*fopen()	 - create a new file or open a existing file
  fclose()  - closes a file */

	fprintf(fp,"1234\n");

	fclose(fp);
}

/*check description in manual page ,type man fopen in terminal window*/

/*mode	description
r	opens a text file in reading mode
w	opens or create a text file in writing mode.
a	opens a text file in append mode
r+	opens a text file in both reading and writing mode
w+	opens a text file in both reading and writing mode
a+	opens a text file in both reading and writing mode
rb	opens a binary file in reading mode
wb	opens or create a binary file in writing mode
ab	opens a binary file in append mode
rb+	opens a binary file in both reading and writing mode
wb+	opens a binary file in both reading and writing mode
ab+	opens a binary file in both reading and writing mode */
