// Creating a function in C with CodeBlocks
// chap - 10 page 131

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

// Function Prototype
void prompt();

//The Application starts with the main() function
int main() {
    printf("Creating a function in C with CodeBlocks\n\n");

    //Variable declaration and initialization
    int loop;
    char input[32];

    loop=0;
    while(loop < 5)
    {
        printf("C:\\DOS> ");
        fgets(input, 31, stdin);
        loop++;
    }

    return 0;
}
// Display prompt

void prompt()
{
}
