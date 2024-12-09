// Creating a program to demonstrate the use of floor() in C with CodeBlocks
// chap 11
// Programmer : Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
//Include math library for floor()
#include <math.h>

int main()
{
    printf("Creating a program to demonstrate the use of floor() in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    //Define a double variable
    double number = 7.65;
    double floored_value;

    // Using the floor() function to get the greatest integer less than or equal to the input value
    // floor() truncates any decimal and returns the largest integer less than or equal to the value
    floored_value = floor(number);

    //Display the floored value result
    printf("The floor value of %.2lf is %.2lf\n", number, floored_value);

    return 0;
}
