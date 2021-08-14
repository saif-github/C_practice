#include <stdio.h>

int main(int argc, char const *argv[]) {
  char arr[5]={'h','i','j','k','l'};

  char *ptr = &arr[1];

  printf("%c\n",*ptr++);
  printf("%c\n",*ptr + 3);
  printf("%c\n",*ptr - 2);
  printf("%c\n",*++ptr);
  printf("%c\n",++*ptr);
  printf("%c\n",*ptr + 2);

  return 0;
}
