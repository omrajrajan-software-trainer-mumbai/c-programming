// Program to demonstrate the simple comparison between two variable with values. Which will be the greater ?
// chap - 08  page no - 98

// Preprocessor directive
#include<stdio.h>

// Application starts with the main() function
int main()

{
    // Declaring variable first_number and second_number
    int first_number, second_number;

    //  Initializing value of first_number as 6
    first_number = 6;

    // Initializing value of second_number as value of first_number - 2
    second_number = first_number - 2;

    // checking  the condition if first_number is greater than second_number
    if(first_number > second_number)
    {
        // using printf() function with format specifier
        printf("%d is greater than %d\n", first_number, second_number);
    }

    return (0);
}
