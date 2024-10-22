// Creating a nested loop in C with CodeBlocks
// chap - 09 page 119

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//The code starts with the main()
int main() {
    printf("Creating a nested loop in C with CodeBlocks\n\n");

    //Variable declaration and initialization
    int alphabet, code;
    char starting_alphabet = 'A';
    char ending_alphabet = 'Z';
    int starting_row = 1;
    int ending_row = 9;

    // Using for loop
    for(alphabet = starting_alphabet; alphabet <= ending_alphabet; alphabet++)
    {
        // A for loop within a for loop
        for(code = starting_row; code <= ending_row; code++)
        {
            //Printing the output
            printf("%c%d \t", alphabet, code);
        }
        // End a line of text
        putchar('\n');
    }
    return 0;
}
