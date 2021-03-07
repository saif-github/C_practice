#include<stdio.h>
#include<stdlib.h>

int main(){

  int *arr[5];

  int i = 0;


  printf("%d \n",sizeof(arr)/sizeof(arr+0));

  for (i=0; i<(sizeof(arr)/sizeof(arr+0)); i++){
    arr[i]= (int *)malloc(sizeof(int));
    *arr[i]=i;
  }

  printf("%d \n",arr);
  printf("%d \n",arr+1);
  printf("%d \n",*(arr+1)); //arr[i]
  printf("%d \n",**(arr+1)); //*arr[i]

  return 0;
}
