// Using a function to verify if a number is even or odd in C with CodeBlocks
// chap - 10
// Programmer - Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//Function to check even or odd; takes one integer parameter 'number'
int checkEvenOdd(int number)
{
    // Using if condition to check if 'number' is divisible by 2 with no remainder
    if (number % 2 == 0)
    {
        printf("%d is Even", number);
    }else{
        printf("%d is Odd", number);
    }
    return 0;
}

//The Application starts with the main() function
int main() {
    printf(" Using a function to verify if a number is even or odd in C with CodeBlocks\n\n");
    // Calls checkEvenOdd with argument 7
    checkEvenOdd(7);
    return 0;
}
