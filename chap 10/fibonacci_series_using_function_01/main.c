// Creating Function to Print Fibonacci Series Upto to n terms in C with CodeBlocks
// chap - 10
// Programmer :- Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

// Function to print Fibonacci series, 'end_counter' is number of terms
void fibonacci(int end_counter)
{
    int first_term = 0;
    int second_term = 1;
    int next_term, loop_counter;

    //Prints first two terms
    printf("Fibonacci series:%d, %d ", first_term, second_term);

    //Starts from 3rd term to nth term
    for(loop_counter = 3; loop_counter <= end_counter; loop_counter++)
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
    printf("Creating Function to Print Fibonacci Series Upto to n terms in C with CodeBlocks\n\n");

    //Calls fibonacci with 10 terms
    fibonacci(10);

    //Indicates that the program executed successfully
    return 0;
}
