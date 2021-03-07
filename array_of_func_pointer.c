#include<stdio.h>

typedef int (*fptrOperation)(int, int);
fptrOperation operations[128] = {NULL};

//int (*fptroperation[128])(int, int) = {NULL};

int add(int num1, int num2) {
return num1 + num2;
}

int subtract(int num1, int num2) {
return num1 - num2;
}

void initializeOperationsArray() {
  operations['+'] = add;
  operations['-'] = subtract;
}

int evaluateArray(char opcode, int num1, int num2) {
  fptrOperation operation;
  operation = operations[opcode];
  return operation(num1, num2);
}

int main()
{
  initializeOperationsArray();
  printf("%d\n",evaluateArray('+', 5, 6));
  printf("%d\n",evaluateArray('-', 5, 6));

  return 0;
}
