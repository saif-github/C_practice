#include<stdio.h>
#include<stdlib.h>

//Allocating Contiguous Memory
int main(){

  int rows = 2;
  int columns = 5;

  int **matrix = (int **) malloc(rows * sizeof(int *));

  matrix[0] = (int *) malloc(rows * columns * sizeof(int));

  for (int i = 1; i < rows; i++)
    matrix[i] = matrix[0] + i * columns;

  for(int i=0; i<2; i++) {
    for(int j=0; j<5; j++) {
      printf("matrix[%d][%d] Address: %p Value: %d\n",i, j, &matrix[i][j], matrix[i][j]);
    }
  }

  return 0;
}
