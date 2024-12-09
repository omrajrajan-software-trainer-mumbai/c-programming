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
    int no_of_terms, loop_counter, third_term;
    int first_number = 0;
    int second_number = 1;


    // Taking input from the user and making it more interactive
    printf("Enter the number terms you want for the Fibonacci series: ");
    scanf("%d", &no_of_terms);

    // Printing the first two numbers
    if (no_of_terms >= first_number && no_of_terms >= second_number)
    {
        printf("%d %d ", first_number, second_number);
    }

    // Starting the loop from the 3rd term
    for (loop_counter = 3; loop_counter <= no_of_terms; loop_counter++)
    {
        third_term = first_number + second_number;

        // Printing the new term
        printf("%d ", third_term);

        // Updating the terms
        first_number = second_number;
        second_number = third_term;
    }

    //Indicates that the program executed successfully
    return 0;
}
