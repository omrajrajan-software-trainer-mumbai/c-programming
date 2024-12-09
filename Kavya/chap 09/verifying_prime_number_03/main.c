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
    int number_to_check;
    int loop_counter, counter = 0;

    // Getting value from user and storing it using scanf()
    printf("Enter an integer:");
    scanf("%d", &number_to_check);

    if(number_to_check == 0 || number_to_check == 1)
    {
        printf("\n%d is neither prime nor composite number\n", number_to_check);
    }
    else
    {
        for(loop_counter = 2; loop_counter <= number_to_check/2; loop_counter++)
        {
            if(number_to_check % loop_counter == 0)
            {
                counter++;
                // It breaks out of the loop
                break;
            }
        }
        if(counter == 0)
        {
            printf("\n%d is a prime number\n", number_to_check);
        }
        else
        {
            printf("\n%d is not a prime number\n", number_to_check);
        }
    }
    return 0;
}
