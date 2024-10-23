// Program to enter values using scanf() function and format specifier in C with CodeBlocks
// Chap - 07  page - 91

// Preprocessor directive
#include <stdio.h>

// Application starts with main() function
int main()
{
    printf("\nProgram to enter values using scanf() function and format specifier\n");

    // variable declaration and initialization
    char firstname[15];

    // Prompting user to enter firstname using printf() function
    printf("Type your first name: ");

    // storing the value in firstname variable using scanf() and format specifier %s
    scanf("%s", firstname);

    // printing the output using printf() and format specifier %s
    printf("Pleased to meet you, %s.\n", firstname);

    return(0);
}
