// Using fgets() for text input in c with code blocks
// chap-07 page 93

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//The code starts with the main()
int main() {
    printf("Using fgets() for text input in c with code blocks\n\n");

    //Variable declaration and initialization
    char name[10];

    // Prompting the user to enter their name
    printf("Who are you?: ");

    //Taking input value from the user using the fgets() and storing it in a variable 'name'
    fgets(name, 10, stdin);

    // Outputting the value taken from the user
    printf("\n\tGlad to meet you %s.", name);
    return 0;
}
