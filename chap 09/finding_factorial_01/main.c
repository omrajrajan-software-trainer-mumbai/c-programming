// Finding factorial of a number in C with CodeBlocks
// chap 09
// Programmer: Kavya Krishnan

//Preprocessor Directives
//Includes the standard input/output library for functions like printf()
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Finding factorial of a number in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    int loop_counter = 1;
    // Number to find the factorial of
    int number = 5;
    // Variable to store the result
    int factorial = 1;

    // The for loop initializes 'loop_counter' to 1, checks if 'loop_counter' is less than or equal to number, and increments 'loop_counter' by 1 each iteration
    for(loop_counter = 1; loop_counter <= number; loop_counter++)
    {
        // Multiplies factorial by loop_counter
        factorial *= loop_counter;
    }
     // Displays the calculated factorial
     printf("Factorial of %d is %d", number, factorial);

    //Indicates that the program executed successfully
    return 0;
}
