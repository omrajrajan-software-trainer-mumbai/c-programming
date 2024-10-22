// Creating a nested loop in C with CodeBlocks
// chap - 09 page 119

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//The Application starts with the main() function
int main() {
    printf("Creating a nested loop in C with CodeBlocks\n\n");

    //Variable declaration and initialization
    int inner_loop_counter, outer_loop_counter;
    int starting_value = 1;
    int ending_value = 5;

    // Using for loop
    for(outer_loop_counter = starting_value; outer_loop_counter <= ending_value; outer_loop_counter++)
    {
        // A for loop within a for loop
        for(inner_loop_counter = starting_value; inner_loop_counter <= ending_value; inner_loop_counter++)
        {
            //Printing the output
            printf("*");
        }
        // End a line of text
        putchar('\n');
    }

    return 0;
}
