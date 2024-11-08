// Creating a function with no return type and no parameters in C with CodeBlocks
// chap - 10
// Programmer :- Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//Function greet has no parameters and no return type
void greet()
{
    //Prints greeting message
    printf("Hello World!!!\n");
}

int main()
{
    printf("Creating a function with no return type and no parameters in C with CodeBlocks\n\n");

    // Calls greet function
    greet();
    return 0;
}