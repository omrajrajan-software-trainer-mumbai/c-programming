// Program to prepare for constant updates with the help of constants in C with CodeBlocks
// chapter 05 - page 69

// Preprocessor Directive
#include <stdio.h>
#include <stdlib.h>

// using the #define directive to define a constant
#define CONSTANT_VALUE_01 13

// Application begins with the main() function
int main()
{
    printf("Program to prepare for constant updates with the help of constants in C with CodeBlocks\n\n");

    printf("The value is %d\n", CONSTANT_VALUE_01);
    printf("And %d is the value\n", CONSTANT_VALUE_01);
    printf("It's not %d\n", CONSTANT_VALUE_01 + 1);
    printf("And it's not %d\n", CONSTANT_VALUE_01 - 1);
    printf("No, the value is %d\n", CONSTANT_VALUE_01);

    // returning integer 0 to the operating system to indicate normal termination of the application
    return 0;
}
