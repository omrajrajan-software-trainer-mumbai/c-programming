// Creating a program to demonstrate the use of various math functions in C with CodeBlocks
// chap 11 page - 153
// Programmer : Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
//Include math library
#include <math.h>

int main()
{
    printf("Creating a program to demonstrate the use of various math functions in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    float result, value;

    //Finding square root
    printf("Input a float value: ");
    scanf("%f", &value);
    result = sqrt(value);
    printf("\nThe square root of %.2f is %.2f\n\n", value, result);

    // Finding the base raised to the power of the exponent
    result = pow(value, 3);
    printf("%.2f to the 3rd power is %.2f\n\n", value, result);

    // Using the floor(); it rounds up a floating-point value to the next whole number
    result = floor(value);
    printf("The floor of %.2f is %.2f\n\n", value, result);

    // Using the ceil(); it rounds down a floating-point value to the next whole number
    result = ceil(value);
    printf("And the ceiling of %.2f is %.2f\n\n", value, result);

    return 0;
}
