// Using function to add two numbers in C with CodeBlocks
// chap - 10
// Programmer - Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

// Function Prototype or Declaration Defines a function 'add' that takes two integer parameters 'first_number' and 'second_number'
//Variable declaration and initialization
int add(int first_number, int second_number)
{
    // Returns the sum of 'first_number' and 'second_number'
    return first_number + second_number;
}

//The Application starts with the main() function
int main() {
    printf("Using function to add two numbers in C with CodeBlocks\n\n");

    //Variable declaration and initialization
    //Calls the add function with arguments 5 and 3, storing result in 'result'
    int result = add(5, 3);

    // Prints the result
    printf("Sum = %d", result);

    return 0;
}


