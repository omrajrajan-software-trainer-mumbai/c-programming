// Printing first 10 natural numbers using a while Loop in C with CodeBlocks
// chap 09

//Preprocessor Directives
//Includes the standard input/output library for functions like printf()
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Printing first 10 natural numbers using a while Loop in C with CodeBlocks\n\n");
    //Variable declaration and initialization

    // Initializes sum to 0
    int sum = 0;
    //Initializes loop counter to 1
    int loop_counter = 1;

    // Starts loop while loop_counter is less than or equal to 10
    while(loop_counter <= 10)
    {
        // Adds the current value of loop_counter to sum
        sum += loop_counter;
        loop_counter++;
    }

     // Displays the calculated sum
     printf("%d", sum);
    //Indicates that the program executed successfully
    return 0;
}
