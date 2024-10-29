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
    int end_counter, loop_counter, sum;
    int first_number = 0;
    int second_number = 1;


    // Taking input from the user and making it more interactive
    printf("Enter the number terms you want for the fibonacci series: ");
    scanf("%d", &end_counter);

    // Printing the first two numbers
    if (end_counter >= first_number && end_counter >= second_number)
    {
        printf("%d %d ", first_number, second_number);
    }

    // Starting the loop from the 3rd term
    for (loop_counter = 3; loop_counter <= end_counter; loop_counter++)
    {
        sum = first_number + second_number;

        // Printing the next term
        printf("%d ", sum);

        // Updating the terms
        first_number = second_number;
        second_number = sum;
    }

    //Indicates that the program executed successfully
    return 0;
}
