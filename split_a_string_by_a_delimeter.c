// C program for splitting a string
// using strtok()
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Tomato-is-a-fruit-not-a-vegitable";

    // Returns first token
    char* token = strtok(str, " - ");

    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL) {
        printf(" %s \n", token);
        token = strtok(NULL, " - ");
    }

    return 0;
}
