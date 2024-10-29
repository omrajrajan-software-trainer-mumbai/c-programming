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
    // Number to check if it is prime
    int number = 29;
    // Boolean variable to indicate if the number is prime (1 means true)
    int isPrime = 1;

    //Loop from 2 to half of number
    for (loop_counter = 2; loop_counter < number; loop_counter++)
    {
        // Checks if the number is divisible by the loop_counter
        if(number % loop_counter == 0)
        {
            //Sets isPrime to 0 (false) if number is divisible
            isPrime = 0;
            //Exits the loop as we found a divisor
            break;
        }
    }
    // Displaying the output
    if (isPrime)
    {
        printf("%d is a prime number", number);
    }else{

        printf("%d is not prime number", number);

    }
    //Indicates that the program executed successfully
    return 0;
}
