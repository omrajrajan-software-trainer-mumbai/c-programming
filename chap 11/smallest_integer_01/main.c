// Creating a program to demonstrate the use of ceil() in C with CodeBlocks
// chap 11
// Programmer : Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
//Include math library for ceil()
#include <math.h>

int main()
{
    printf("Creating a program to demonstrate the use of ceil() in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    //Define a double variable
    double number = 3.14;
    double ceiled_value;

    // Using the ceil() function to get the smallest integer greater than or equal to the input value
    // This function rounds up the value up to the nearest whole number that is greater than or equal to x
    ceiled_value = ceil(number);

    //Display the ceiling value result
    printf("The ceil value of %.2lf is %.2lf\n", number, ceiled_value);

    return 0;
}
