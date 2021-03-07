#include<stdio.h>
#include<stdlib.h>

/*
Allocating Potentially Noncontiguous Memory
The following illustrates one way of allocating a two-dimensional array where the al‐
located memory is not guaranteed to be contiguous. First, the “outer” array is allocated
and then each row is allocated using separate malloc statements:
*/

int main(){

  int rows = 2;
  int columns = 5;

  int **matrix = (int **) malloc(rows * sizeof(int *));

  for (int i = 0; i < rows; i++) {
    matrix[i] = (int *) malloc(columns * sizeof(int));s
  }

  for(int i=0; i<2; i++) {
    for(int j=0; j<5; j++) {
      printf("matrix[%d][%d] Address: %p Value: %d\n",i, j, &matrix[i][j], matrix[i][j]);
    }
  }

  return 0;
}
