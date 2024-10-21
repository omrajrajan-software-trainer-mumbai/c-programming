// Printing alphabets A-Z using for loop in C with CodeBlocks
// C for Dummies - chap 09 page 114

// Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main() function
int main() {
    printf("Printing alphabets A-Z using for loop in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    char alphabet;

    // This statement initializes the loop, states the condition and the update statement
    for(alphabet='A'; alphabet<='Z'; alphabet++)
    {
        printf("%c %d\n", alphabet, alphabet);
    }
    return 0;
}
