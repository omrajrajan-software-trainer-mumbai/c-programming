// Program to demonstrate using multiple if statements in C with CodeBlocks
// chap - 08  page no - 100

// Preprocessor directive
#include<stdio.h>

// Application starts with the main() function
int main()
{
    printf("Program to demonstrate using multiple if statements in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    int first_integer, second_integer;

    printf("Input the first integer value: ");
    scanf("%d", &first_integer);

    printf("Input the second integer value: ");
    scanf("%d", &second_integer);

    puts("Evaluating ...");

    // Using if statement to check the condition that the first number is lesser than the second number
    if(first_integer < second_integer)
    {
        printf("%d is less than %d\n", first_integer, second_integer);
    }

    // Using if statement to check the condition that the first number is greater than the second number
    if(first_integer > second_integer)
    {
        printf("%d is greater than %d\n", first_integer, second_integer);
    }

 return (0);
}
