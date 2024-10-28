// Printing Fibonacci Sequence up to n terms using a for loop in C with CodeBlocks
// chap 09

//Preprocessor Directives
//Includes the standard input/output library for functions like printf()
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Printing Fibonacci Sequence up to n terms using a for loop in C with CodeBlocks\n\n");
    //Variable declaration and initialization
    int loop_counter, next_term;
    //Number of terms in the Fibonacci sequence to print
    int end_counter = 10;
    //Initial two terms of the Fibonacci sequence
    int first_unit = 0;
    int second_unit = 1;

     // Prints the first two terms
     printf("%d %d",first_unit, second_unit);

     // Starts loop from the 3rd term
     for(loop_counter = 3; loop_counter <= end_counter; loop_counter++)
     {
         // Next term is the sum of the previous two
         next_term = first_unit + second_unit;
         printf(" %d",next_term);

         // Updates second_unit to the first_unit
         first_unit = second_unit;
         //Updates new term to the second_unit
         second_unit = next_term;
     }
     printf("\n");
    //Indicates that the program executed successfully
    return 0;
}
