// Using if statement for simple comparisons in C with CodeBlocks
// chap-08 page 98

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//The code starts with the main()
int main() {
    printf("Using if statement for simple comparisons in C with CodeBlocks\n");

    //Variable declaration and initialization
    int first_number, second_number;
    first_number = 6;
    second_number = first_number - 2;

    // checking a condition using the if statement
    if( first_number > second_number ) {
        // This line will be executed if the expression in the condition returns true
        printf("%d is greater than %d\n", first_number, second_number );
    }

    return 0;
}
