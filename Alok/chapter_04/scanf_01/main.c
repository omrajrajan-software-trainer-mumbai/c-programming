// Program to demonstrate the miracle of scanf() in C with CodeBlocks
// chapter 04 - page 51

// Preprocessor directive
#include <stdio.h>
#include <stdlib.h>

// Application starts with main() function
int main()
{
    printf("\nProgram to demonstrate the miracle of scanf() in C with CodeBlocks\n");

    // Variable declaration and initialization
    char grade; // Creating a character datatype - which is a single character
    char name[20]; // Creating a string datatype - Which is an array of characters
    char color[20]; // Creating a string datatpes - Which is an array of characters

    // Taking input from the user using the scanf() function with format specifier and & symbol
    printf("\nPlease enter your name: ");
    scanf("%s", &name);
    printf("Please enter your favorite color: ");
    scanf("%s", &color);

	// Consume leftover newline character
    getchar();

    printf("Please enter your grade: ");
    scanf("%c", &grade); // Single character input

    // using the %s format specifier to substitute the value of the variable name and color in the format string
    printf("%s's favorite color is %s and their grade is %c\n", name, color, grade);

    return 0;
}
