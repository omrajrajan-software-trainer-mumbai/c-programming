// Printing the same statement 10 times using while loop in C with CodeBlocks
// chap - 09 page 121

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//The code starts with the main()
int main() {
    printf("Printing the same statement 10 times using while loop in C with CodeBlocks\n\n");

    //Variable declaration and initialization
    int counter;
    int start_number = 0;
    int end_number = 10;

    counter = start_number;
    while(counter < end_number)
    {
        // Printing the statement
        printf("%d.Sore shoulder surgery.\n", counter+1);
        counter++;
    }
    return 0;
}
