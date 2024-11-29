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

    //Variable declaration and initialization
    // Variable to store the result
    int factorial = 1;
    int loop_counter;
    // Number to find the factorial of
    int number;

    // Taking input from the user and making it more interactive
    printf("Enter a non-negative integer:");
    scanf("%d", &number);

    if(number < 0)
    {
        // Printing the base statement
        printf("\nFactorial is not defined for negative numbers\n");
    }
    else
    {
        // Printing the factorial using the loop
        for(loop_counter = 1; loop_counter <= number; loop_counter++)
        {
            // Multiplying the value of left and right operand and storing it in the left operand
            factorial *= loop_counter;
        }
        printf("\nThe factorial of first %d numbers is %d\n", number, factorial);
    }
    return 0;
}
