// Printing the same statement 10 times using for loop in C using CodeBlocks
// C for Dummies - chap 09 page 114

// Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main() function
int main() {
    printf("Printing the same statement 10 times using for loop in C using CodeBlocks\n\n");

    // Variable declaration and initialization
    int for_loop_counter;

    // This statement initializes the loop, states the condition and the update statement
    for(for_loop_counter = 0; for_loop_counter < 10; for_loop_counter = for_loop_counter + 1) {
        printf("%d. Sore shoulder surgery.\n", for_loop_counter + 1);
    }
    return 0;
}
