#include<stdio.h>

func(int,int);

main()
{
int num,opt;
printf("enter a decimal number :  ");
scanf("%d",&num);
printf("1. Binary\n 2.Octal\n  3.Hexadecimal \n");
printf("enter your option :");
scanf("%d",&opt);

switch(opt)
{
	case 1:
	printf("Binary equivalent is : ");
	func(num,2);
	break;

	case 2:
	printf("Octal equivalent is : ");
	func(num,8);
	break;

	case 3:
	printf("Hexadecimal equivalent is : ");
	func(num,16);
	break;
	}
	printf("\n");
}

func(int num,int b)
{
int i=0,j,rem;
char arr[20];
while(num>0);
{
rem=num%b;
num/=b;
if(rem>9&&rem<16)
arr[i++]=rem-10+'A';
else
arr[i++]=rem+'0';
}
for(j=i-1;j>=0;j--)
printf("%c",arr[j]);
}
