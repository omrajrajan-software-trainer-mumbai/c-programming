// Verifying if a number is prime number or not using for loop and break in C with CodeBlocks
// chap 09

//Preprocessor Directives
//Includes the standard input/output library for functions like printf()
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Verifying if a number is prime number or not using for loop and break in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    int loop_counter;
    int number;
    int isPrime = 1;

    //Taking input from user and making it more interactive
    printf("Enter the number for verification: ");
    scanf("%d", &number);

    for(loop_counter = 2; loop_counter < number; loop_counter++)
    {
        if(number % loop_counter == 0)
        {
            isPrime = 0;
            // If the condition is true just break the loop
            break;
        }
    }

    // Displaying the output
    if (isPrime == 0)
    {
        printf("%d is not a Prime number", number);
    }
    else
    {
        printf("%d is a Prime number", number);
    }

    return 0;
}
