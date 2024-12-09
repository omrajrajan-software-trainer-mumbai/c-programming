// Verifying if a number is a prime number or not using for loop and break in C with CodeBlocks
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
    int number_to_check = 29;
    int mid_of_number_to_check = number_to_check / 2 ;
    // Boolean variable to indicate if the 'number_to_check' is prime (1 means true)
    int isPrime = 1;

    //Loop from 2 to half of number_to_check
    for (loop_counter = 2; loop_counter < mid_of_number_to_check; loop_counter++)
    {
        // Checks if the number is divisible by the loop_counter
        if(number_to_check % loop_counter == 0)
        {
            //Sets isPrime to 0 (false) if number_to_check is divisible
            isPrime = 0;

            //Exits the loop as we found a divisor
            break;
        }
    }
    // Displaying the output
    if (isPrime)
    {
        printf("%d is a prime number", number_to_check);
    }else{

        printf("%d is not prime number", number_to_check);

    }
    //Indicates that the program executed successfully
    return 0;
}
