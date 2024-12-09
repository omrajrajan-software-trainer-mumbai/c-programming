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

    // Using for loop
    for(first_counter = 1; first_counter <= 6; first_counter++) {

        // A loop within a loop - nested loop
        for(second_counter = 1; second_counter < first_counter; second_counter++) {
            printf(" %d ", second_counter);
        }
        printf("\n");
    }
    /*
    output
    1
    1  2
    1  2  3
    1  2  3  4
    1  2  3  4  5
    */

    return 0;
}
