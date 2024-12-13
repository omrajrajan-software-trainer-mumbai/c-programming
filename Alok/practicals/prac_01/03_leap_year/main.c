// Program to check if the year entered is leap year or not in C with CodeBlocks

// Preprocessor directives
#include <stdio.h>

int main()
{
    printf("Program to check if the year entered is leap year or not in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    int year_int;

    // Ask the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year_int);

    //check if the number is perfectly divisible by 400
        // If it's true then print year is a leap year
    if (year_int % 400 == 0)
    {
        printf("%d is a leap year.\n", year_int);
    }

    //check if the number is perfectly divisible by 100
        // If it's true then print year is not a leap year
    if (year_int % 100 == 0)
    {
        printf("%d is not a leap year.\n", year_int);
    }

    //check if the number is perfectly divisible by 4
        // If it's true then print year is leap year
    if (year_int % 4 == 0)
    {
        printf("%d is a leap year.\n", year_int);
    }

    return 0;
}
