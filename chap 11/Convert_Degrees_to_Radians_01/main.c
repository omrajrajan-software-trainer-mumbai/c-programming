// Creating a program to convert degrees to radians in C with CodeBlocks
// chap 11 page - 155
// Programmer : Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Creating a program to convert degrees to radians in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    float degrees, radians;

    // Getting input from user
    printf("Enter an angle in degrees: ");
    scanf("%f", &degrees);

    // Deriving the formula
    radians = 0.0174532925 * degrees;

    // Displaying the output
    printf("\n%.2f degrees is %.2f radians.\n", degrees, radians);

    return 0;
}
