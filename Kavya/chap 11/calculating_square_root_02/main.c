// Creating a program to find square root of a number in C with CodeBlocks
// chap 09
//Programmer : Kavyakrishnan

//Preprocessor Directives
#include <stdio.h>
//Include math library for sqrt()
#include <math.h>

//The application starts with the main()
int main()
{
    printf("Creating a program to find square root of a number in C with CodeBlocks\n\n");

    //Define a double variable for which to find the square root
    double number;
    double result;

    //Prompting the user to input the value
    printf("Enter the number:");
    scanf("%lf", &number);

    //Using the sqrt() function to calculate the square root of the number
    //sqrt() computes the positive square root of the argument provided
    result = sqrt (number);

    //Displaying the output
    printf("The square root of %.2lf is %.2lf\n", number, result);

    return 0;
}
