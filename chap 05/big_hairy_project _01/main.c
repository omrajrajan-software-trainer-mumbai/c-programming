// Using printf() and scanf() to create a short in c with code blocks
// chap-05 page 56

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//The code starts with the main()
int main()

// The code starts here
{
    printf("Using printf() and scanf() to create a short in c with code blocks\n\n");

    // Variable Declaration and initialization
    char adjective [20];
    char food [20];
    char chore [20];
    char furniture [20];

    /* Get the words to use in the madlib */

    // Prompting the user using printf() to enter the appropriate input
    printf("Enter an adjective:");
    // Taking the input using scanf()
    scanf("%s", &adjective);

    printf("Enter a food :");
    scanf("%s", &food);

    printf("Enter a chore:");
    scanf("%s", &chore);

    printf("Enter a furniture:");
    scanf("%s", &furniture);

    // Display the output

    printf("\n\n Don't touch that %s %s!\n ", adjective,food);
    printf("I just %s the %s!\n", chore , furniture);

    return 0;
}
