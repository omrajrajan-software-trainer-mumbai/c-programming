// Printing even numbers between 1-20 using for loop in C using CodeBlocks
// C for Dummies - chap 09 page 114

// Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main() function
int main() {
    printf("Printing even numbers between 1-20 using for loop in C using CodeBlocks\n\n");

    // Variable declaration and initialization
    int number_1;

    // This statement initializes the loop, states the condition and the update statement
    for(number_1 = 2; number_1 <= 20; number_1 = number_1 + 2)
    {
        printf("%d\n", number_1);
    }
    return 0;
}
