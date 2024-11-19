// Creating a function to calculate the base raised to the power of the exponent in C with CodeBlocks
// chap 11
//Programmer : Kavyakrishnan

//Preprocessor Directives
#include <stdio.h>
//Include math library for pow()
#include <math.h>

//The application starts with the main()
int main()
{
    printf("Creating a function to calculate the base raised to the power of the exponent in C with CodeBlocks\n\n");

    //Define base and exponent
    double base = 3.0;
    double exponent = 4.0;
    double result;

    //Using the pow() function to calculate the base raised to the power of the exponent
    result = pow(base, exponent);

    // pow(x, y) returns x raised to the power of y

    //Display the result in a formatted output
    printf("%.2lf raised to the power of %.2lf is %.2lf.\n", base, exponent, result);

    return 0;
}
