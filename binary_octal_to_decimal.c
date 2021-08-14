#include<stdio.h>

unsigned int func(unsigned int n,unsigned int base);

int main()
{
  int num,base,result;
  char choice;
  printf("Enter 'b' for binary and 'o' for octal : \n");
  scanf("%c",&choice);
  printf("Enter the number : ");
  scanf("%d",&num);

  if(choice == 'b')
  base = 2;
  else
  base = 8;
  result = func(num,base);
  printf("Decimal number is %d\n",result);
}

unsigned int func(unsigned int n,unsigned int base)
{
  int rem,d,j=1,dec = 0;

  while(n >0)
  {
    rem = n%10;  //taking the last digit

    d=rem*j;
    dec+=d;
    j*=base;

    n=n/10;  // skipping the last digit
  }
  return dec;
}
