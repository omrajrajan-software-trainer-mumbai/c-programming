// Printing pattern using nested for loop in C with CodeBlocks
// chap 09

//Preprocessor Directives
//Includes the standard input/output library for functions like printf()
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Printing pattern using nested for loop in C with CodeBlocks\n\n");
    //Variable declaration and initialization
    int outer_counter, inner_counter;
    // Number of rows in a pattern
    int rows = 5;

    //Outer loop for each row
    for(outer_counter = 1; outer_counter <= rows; outer_counter++)
    {
        //Inner row controls number of columns per row
        for(inner_counter = 0; inner_counter < outer_counter; inner_counter++)
        {
            // Prints a star followed by space
            printf("* ");
        }
        //Moves to the next line after completing one row
        printf("\n");
    }

    return 0;
}
