// Creating a nested loop in C with CodeBlocks
// chap - 09 page 119

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//The Application starts with the main() function
int main() {
    printf("Creating a nested loop in C with CodeBlocks\n\n");

    //Variable declaration and initialization
    int first_value, second_value, first_counter, second_counter;
    first_value = 1;
    second_value = 6;

    // Using for loop
    for(first_counter = first_value; first_counter < second_value; first_counter++) {
        // A loop within a loop
        for(second_counter = first_value; second_counter < second_value; second_counter++) {
            //Printing the statement
            printf("*");
        }
        printf("\n");
    }
    /*
    output
    *****
    *****
    *****
    *****
    *****
    */

    return 0;
}
