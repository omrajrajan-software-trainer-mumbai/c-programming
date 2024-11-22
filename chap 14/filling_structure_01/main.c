// Creating a program to declare an initialized structure in C with CodeBlocks
// chap 14 page - 203
// Programmer : Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Creating a program to declare an initialized structure in C with CodeBlocks\n\n");

    // Declaring and initializing a structure
    struct president
    {
        // Initializing an structure array
        char name[40];
        int year;
    };
    // Declaring the structure variable
    struct president first = {
        "George Washington",
        1789
    };
    struct president second = {
        "John Adams",
        1797
    };

    // Displaying the final output
    printf("The first president was %s\n", first.name);
    printf("He was inaugurated in %d\n\n", first.year);

    printf("The second president was %s\n", second.name);
    printf("He was inaugurated in %d\n", second.year);

    return 0;
}
