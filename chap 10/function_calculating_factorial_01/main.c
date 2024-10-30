// Finding factorial using a function in C with CodeBlocks
// chap - 10
// Programmer - Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

// Recursive function to calculate factorial; 'number' is the input parameter
//Variable declaration and initialization
int factorial(int number)
{
    // Base condition to end recursion when 'number' is 0
    // Using if condition
    if(number == 0)
    {
        //Returns 1 as factorial of 0 is 1
        return 1;
    }else{
        //Recursively calls factorial with number-1
        return number * factorial(number - 1);
    }
}
//The application starts with main ()
int main()
{
    printf("Finding factorial using a function in C with CodeBlocks\n\n");

    //Variable declaration and initialization
    int factorial_number = 7;
    // Calls factorial function
    int result = factorial(factorial_number);

    //Prints the result
    printf("Factorial of %d is %d\n", factorial_number, result);

    return 0;
}
