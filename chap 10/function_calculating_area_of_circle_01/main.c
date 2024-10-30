// Creating a function to calculate the area of a circle in C with CodeBlocks
// chap - 10
// Programmer :- Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>
// Defines a constant value of PI
#define PI 3.14159

//Function to calculate area; takes radius as input
float areaOfCircle(float radius)
{
    //Calculates area using PI*r^2
    return PI * radius * radius;
}

//The application starts with main ()
int main()
{
    printf("Creating a function to calculate the area of a circle in C with CodeBlocks\n\n");

    // Calls areaOfCircle with radius 5.0
    float result = areaOfCircle(5.0);

    //Prints the area with 2 decimal places
    printf("Area of circle = %.2f", result);
    return 0;
}
