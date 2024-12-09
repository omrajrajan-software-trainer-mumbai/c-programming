// Finding bigger number between two numbers using a function in C with CodeBlocks
// chap - 10
// Programmer :- Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

// Function to find maximum of two numbers 'first_number' and 'second_number'
int maximum(int first_number, int second_number)
{
    //Uses a ternary operator to return the larger value
    return (first_number > second_number) ? first_number : second_number;
}
//The application starts with main ()
int main()
{
    printf("Finding bigger number between two numbers using a function in C with CodeBlocks\n\n");

    //Calls maximum function with 10 and 20
    //Variable declaration and initialization
    int result = maximum(10, 20);

    //  Prints the maximum number
    printf("Maximum number = %d", result);

    return 0;
}
