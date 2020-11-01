#include<stdio.h>
//#include<conio.h>
main()
{
	 FILE *fp;
	 char ch;
	scanf("%c",&ch);
	 fp = fopen("one.txt","a+");
	 printf("Enter data");
	//while((ch=getchar())!=EOF)
	 //{
		//printf("%c",ch);
	    //putc(ch,fp);
	 //}
	/* fclose(fp);
	 fp = fopen("one.txt", "r");*/
	 while((ch=getc())!=EOF)
	   printf("%c",ch);
	 fclose(fp);
}
