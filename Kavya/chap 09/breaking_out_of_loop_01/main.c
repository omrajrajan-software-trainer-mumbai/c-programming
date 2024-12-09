// Using the break statement to stop the execution of loop in a while loop in C with CodeBlocks
// chap - 09 page 125

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//The code starts with the main()
int main() {
    printf("Using the break statement to stop the execution of loop in a while loop in C with CodeBlocks\n\n");

    //Variable declaration and initialization
    int counter;

    counter = 0;

    // Here the condition asks if it is true, thus becomes an infinite loop
    while(1) {
        // Printing the statement
        printf("%d\n", counter);
        // Update
        counter = counter + 1;

        // Using if and break to discontinue the loop
        if(counter > 50)
        {
            // break exits from the current loop
            break;
        }

    }
    return 0;
}
