// Printing numbers divisible by 3 between 1-50 using for loop in C with CodeBlocks
// C for Dummies - chap 09 page 114

// Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main() function
int main() {
    printf("Printing numbers divisible by 3 between 1-50 using for loop in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    int for_loop_counter;

    // This statement initializes the loop, states the condition and the update statement
    for(for_loop_counter = 1; for_loop_counter <= 50; for_loop_counter++)
    {
        // Verifying if the number is divisible by 3 using modulus operator
        // what is the difference between == and = ?
        if (for_loop_counter % 3 == 0)
        {
            printf("%d\n", for_loop_counter);
        }
    }
    return 0;
}
