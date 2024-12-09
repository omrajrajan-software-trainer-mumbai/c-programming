// Creating a program to demonstrate the use of arrays in C with CodeBlocks
// chap 12 page - 169
// Programmer : Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Creating a program to demonstrate the use of arrays in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    char firstname[16];

    // Getting input from user
    printf("What is your name? ");
    fgets(firstname, 16, stdin);

    // Displaying the output
    printf("Pleased to meet you, %s\n", firstname);

    return 0;
}
