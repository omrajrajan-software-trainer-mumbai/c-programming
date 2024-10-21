// Program to compare values using IF statements in C with CodeBlocks
// chap-08 page 100

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//The code starts with the main()
int main() {

    printf("Program to compare values using IF statements in C with CodeBlocks\n");

    //Variable declaration and initialization
    int first_number, second_number;

    // Prompting the user to enter value and saving it using scanf()
    printf("Enter the first value: ");
    scanf("%d", &first_number);

    printf("Enter the second value: ");
    scanf("%d", &second_number);

    // checking a condition using the if statement
    if(first_number > second_number) {

        // This line will be executed if the expression in the condition returns true
        printf("%d is greater than %d", first_number, second_number);
    }

    // checking a condition using the if statement
    if(first_number < second_number) {
        // This line will be executed if the expression in the condition returns true
        printf("%d is lesser than %d", first_number, second_number);
    }

    return 0;
}
