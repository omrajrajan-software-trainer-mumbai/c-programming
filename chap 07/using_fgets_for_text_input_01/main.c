// Using fgets() for text input in c with code blocks
// chap-07 page 93

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//The code starts with the main()
int main()
{
    printf("Using fgets() for text input in c with code blocks\n");

    //Variable declaration and initialisation
    char name[20];

    // Prompting the user to enter their name
    printf("Who are you?");

    //Taking input value from the user using the fgets() and storing it in a variable 'name'
    fgets(name, 20 , stdin);

    // Outputting the value taken from the user
    printf("Glad to meet you, %s!", name );

    return 0;
}
