// Finding bigger number between two numbers using a function in C with CodeBlocks
// chap - 10
// Programmer :- Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

// Function to find maximum of two numbers 'first_number' and 'second_number'
int maximum(int first_number, int second_number)
{
    //Using if condition
    if (first_number == second_number)
    {
        printf("Both values are equal");
    }

    else if(first_number > second_number)
    {
        printf("%d is greater than %d", first_number, second_number);
    }

    else
    {
        printf("%d is smaller than %d", first_number, second_number);
    }
    return 0;
}
//The application starts with main ()
int main()
{
    printf("Finding bigger number between two numbers using a function in C with CodeBlocks\n\n");

    //Calls maximum function with 10 and 20
    maximum(10, 20);

    return 0;
}
