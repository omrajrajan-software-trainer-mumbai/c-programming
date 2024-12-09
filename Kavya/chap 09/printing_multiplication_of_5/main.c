// Printing Multiplication Table of 5 using a for Loop in C with CodeBlocks
// chap 09

//Preprocessor Directives
//Includes the standard input/output library for functions like printf()
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Printing Multiplication Table of 5 using a for Loop in C with CodeBlocks\n\n");
    // Variable declaration and initialization
    // Number for which the multiplication table is to be printed
    int number = 5;
    int loop_counter = 1;

    // The for loop initializes 'loop_counter' to 1, checks if 'loop_counter' is less than or equal to 10, and increments 'loop_counter' by 1 each iteration
    for(loop_counter = 1; loop_counter <= 10; loop_counter++)
    {
    // Prints each line of the multiplication table
    printf("%d x %d = %d\n", number, loop_counter, number*loop_counter);
    }
    //Indicates that the program executed successfully
    return 0;
}
