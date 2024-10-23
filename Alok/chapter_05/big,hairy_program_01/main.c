// Program to  demonstrate a big, hairy program with comments using printf() and scanf() function in C with CodeBlocks
// chapter 05 - page 56

//preprocessor directive
#include <stdio.h>
#include <stdlib.h>

//Appreciation starts with the main() function
int main()

{
    printf("Program to  demonstrate a big, hairy program with comments using printf() and scanf() function\n\n");

/*
MADLIB1.C Source Code
Written by (your name here)
*/

    char adjective[20];
    char food[20];
    char chore[20];
    char furniture[20];

/* Get the words to use in the madlib */
    printf("Enter an adjective: ");     /* prompt */
    scanf("%s", &adjective);          /* input */

    printf("Enter a food: ");
    scanf("%s", &food);

    printf("Enter a household chore (past tense): ");
    scanf("%s", &chore);

    printf("Enter an item of furniture: ");
    scanf("%s", &furniture);

/* Display the output */

    printf("\n\n Don't touch that %s %s! \n", adjective, food);
    printf("I just %s the %s!\n", chore, furniture);

    return 0;
}
