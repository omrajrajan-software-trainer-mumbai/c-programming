// Creating  Function to Swap Two Numbers Using Call by reference in C with CodeBlocks
// chap - 10
// Programmer :- Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

// Function to swap two integers by using pointers
void swap(int *first_number, int *second_number)
{
    //Stores the value at address 'first_number' in prompt
    int prompt = *first_number;
    //Assigns value at address 'second_number' to address 'first_number'
    *first_number = *second_number;
    // Assigns prompt to address 'second_number'
    *second_number = prompt;
}

//The application starts with main()
int main()
{
    printf("Creating  Function to Swap Two Numbers Using Call by reference in C with CodeBlocks\n\n");
    // Variable Declaration and Initialization
    int first_term = 10;
    int second_term = 20;

    //Printing the initial value
    printf("Before swap:first_term = %d, second_term = %d\n\n", first_term, second_term);

    //Calls swap with addresses of x and y
    swap(&first_term, &second_term);

    //Prints the value after the swap
    printf("After swap:first_term = %d, second_term = %d\n", first_term, second_term);

    return 0;
}
