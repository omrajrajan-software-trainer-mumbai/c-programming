// Using getchar() to fetch single characters in C with CodeBlocks
// chap-07 page 84

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//The code starts with the main()
int main()
{
    printf("Using getchar() to fetch single characters in C with CodeBlocks\n\n");

    // Variable Declaration and Initialization
    char single_character;

    printf("Please enter a single character: ");

    // Taking Input from the user using getchar()
    single_character = getchar();

    printf("I waited for the %c character", single_character);

    return 0;
}
