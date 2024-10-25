// Printing Numbers from 1 to 10 using a for Loop in C with CodeBlocks
// chap 09

//Preprocessor Directives
//Includes the standard input/output library for functions like printf()
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Printing Numbers from 1 to 10 using a for Loop in C with CodeBlocks\n\n");
    //Variable declaration and initialization
    int loop_counter = 1;

    // The for loop initializes 'loop_counter' to 1, checks if 'loop_counter' is less than or equal to 10, and increments 'loop_counter' by 1 each iteration
    for(loop_counter = 1; loop_counter <= 10; loop_counter++)
    {
        // This statement prints the current value of 'loop_counter' followed by a newline character
        printf("%d\n", loop_counter);
    }

    //Indicates that the program executed successfully
    return 0;
}
