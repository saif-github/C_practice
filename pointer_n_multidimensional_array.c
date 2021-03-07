#include<stdio.h>


int main(){
  int matrix[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};

  for(int i=0; i<2; i++) {
    for(int j=0; j<5; j++) {
      printf("matrix[%d][%d] Address: %p Value: %d\n",i, j, &matrix[i][j], matrix[i][j]);
    }
  }

  int (*pmatrix)[5] = matrix;

  printf("%p\n", matrix);
  printf("%p\n", matrix + 1);

  printf("%ld\n",sizeof(matrix)/sizeof(matrix[0])); //no of rows
  printf("%ld\n",sizeof(matrix[0])); // Displays 20
  printf("%p  %d\n", matrix[0] + 1, *(matrix[0] + 1));

  printf("%ld\n",sizeof(*(pmatrix+0))); // Displays 20
  printf("%p  %d\n", *(pmatrix+0) + 1, *(*(pmatrix+0) + 1));

  return 0;
}
