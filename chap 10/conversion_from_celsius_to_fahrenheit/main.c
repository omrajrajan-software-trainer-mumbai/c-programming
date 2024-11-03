// Creating  Function to convert Celsius to Fahrenheit in C with CodeBlocks
// chap - 10
// Programmer :- Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//Function to convert Celsius to Fahrenheit
float convert(float celsius)
{
    // Uses formula F = C * 9/5 + 32
    return (celsius * 9/5) + 32;
}

//The application starts with main()
int main()
{
    printf("Creating  Function to convert Celsius to Fahrenheit in C with CodeBlocks\n\n");
    //Calls convert with 25.0 degrees Celsius
    float result = convert(25.0);

    //Prints temperature in Fahrenheit
    printf("Fahrenheit = %.2f\n", result);

    //Indicates that the program executed successfully
    return 0;
}
