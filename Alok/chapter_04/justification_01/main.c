// Program to demonstrate how printf() can format text using conversion characters in C with CodeBlocks
// chapter 04 - page 47

// Preprocessor directive
#include <stdio.h>
#include <stdlib.h>

// Application begin with main() function
int main()
{
    printf("\nProgram to demonstrate how printf() can format text using conversion characters in C with CodeBlocks\n");
    printf("%15s", "Right\n");
    printf("%-15s", "Left\n");

    return 0;
}
