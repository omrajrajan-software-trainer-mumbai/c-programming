// Creating Function to Print Fibonacci Series Upto to n terms in C with CodeBlocks
// chap - 10
// Programmer :- Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

// Function to print Fibonacci series, 'number_of_terms' is number of terms
void create_fibonacci_series(int number_of_terms)
{
    int first_term = 0;
    int second_term = 1;
    int next_term, loop_counter;

    //Prints first two terms
    printf("Fibonacci series:%d, %d ", first_term, second_term);

    //Starts from 3rd term to nth term
    for(loop_counter = 3; loop_counter <= number_of_terms; loop_counter++)
    {
        //Calculates next term
        next_term = first_term + second_term;
        // Prints next term
        printf(",%d ", next_term);
        //Updates first_term to second_term
        first_term = second_term;
        //Updates second_term to next_term
        second_term = next_term;
    }
    printf("\n");
}

//The application starts with main()
int main()
{
    printf("Creating Function to Print Fibonacci Series Up to to n terms in C with CodeBlocks\n\n");

    // Variable Declaration and Initialization
    int number_of_terms = 10;

    //Calls Fibonacci with 10 terms
    create_fibonacci_series(number_of_terms);

    //Indicates that the program executed successfully
    return 0;
}
