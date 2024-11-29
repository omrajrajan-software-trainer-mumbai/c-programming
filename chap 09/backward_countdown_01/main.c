// Printing Countdown from 10 to 1 Using a while Loop in C with CodeBlocks
// chap 09

//Preprocessor Directives
//Includes the standard input/output library for functions like printf()
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Printing Countdown from 10 to 1 Using a while Loop in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    // Loop counter initialized to 10
    int loop_counter = 10;

    // Loop runs while loop_counter is greater than 0
    while (loop_counter > 0)
    {
        // This statement prints the current value of 'loop_counter' followed by a newline character
        printf("%d\n", loop_counter);

        // Decrements loop_counter by 1
        loop_counter--;
    }

    //Indicates that the program executed successfully
    return 0;
}
