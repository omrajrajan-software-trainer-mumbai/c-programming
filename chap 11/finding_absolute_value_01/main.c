// Creating a program to find the absolute value of an integer in C with CodeBlocks
// chap 11
//Programmer : Kavyakrishnan

//Preprocessor Directives
#include <stdio.h>
//Include stdlib library for abs()
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Creating a program to find the absolute value of an integer in C with CodeBlocks\n\n");

    //Define an integer variable with a negative value
    int number = -42;
    int absolute_value;

    //Using the abs() function to get the absolute value of the integer
    //abs() returns the non-negative value of an integer input (magnitude only).
    absolute_value = abs(number);

    //Display the result showing absolute conversion
    printf("The absolute value of %d is %d\n", number, absolute_value);

    return 0;
}
