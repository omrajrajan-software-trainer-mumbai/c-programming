// Creating a program and making a tic tac toe game using a 2 dimensional array in C with CodeBlocks
// chap 12 page - 173
// Programmer : Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

// The application starts with main()
int main()
{
    printf("Creating a program and making a tic tac toe game using a 2 dimensional array in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    char tictactoe[3][3];
    int outer_loop, inner_loop;

    // Initialize matrix
    for(outer_loop = 0; outer_loop < 3; outer_loop++)
    {
        for(inner_loop = 0; inner_loop < 3; inner_loop++)
        {
            tictactoe[outer_loop][inner_loop] = '.';
        }
        tictactoe[1][1] = 'X';
    }
    // Display game board
    printf("Ready to play Tic-Tac-Toe?\n");

    for(outer_loop = 0; outer_loop < 3; outer_loop++)
    {
        for(inner_loop = 0; inner_loop < 3; inner_loop++)
        {
            printf("%c\t", tictactoe[outer_loop][inner_loop]);
        }
        printf("\n");
    }
    return 0;
}
