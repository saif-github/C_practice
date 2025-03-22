// C program to split a string by multiple delimiters

#include <stdio.h>
#include <string.h>

// Function to split a string by given delimiters
void splitStringByDelimiters(char* inputString,
                             char* delimiters)
{
    // Get the first token
    char* token = strtok(inputString, delimiters);

    // Loop through the string to extract all other tokens
    while (token != NULL) {
        // Print each token
        printf("%s\n", token);

        // Get the next token
        token = strtok(NULL, delimiters);
    }
}

int main()
{
    // Define the input string
    char inputString[]
        = "Tiger,Lion;Crocodile.Hippopotamous|Cheetah.Hyna~Elephants";

    // Define the delimiters
    char delimiters[] = ",;.|";

    // Call the function to split the string by the
    // delimiters
    splitStringByDelimiters(inputString, delimiters);

    return 0;
}
