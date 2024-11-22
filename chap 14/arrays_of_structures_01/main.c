// Creating a program to declare an array of structures in C with CodeBlocks
// chap 14 page - 205
// Programmer : Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Creating a program to declare an array of structures in C with CodeBlocks\n\n");

    // Declaring and initializing a structure
    struct scores
    {
        // Initializing an structure array
        char name[32];
        int score;
    };
    struct scores player[4];
    int loop_counter;

    // Initiating a for loop
    for(loop_counter = 0; loop_counter < 4; loop_counter++)
    {
        // Inputing multiple values from the user using scan()
        printf("Enter player %d: ", loop_counter + 1);
        scanf("%s", player[loop_counter].name);
        printf("Enter their score: ");
        scanf("%d", &player[loop_counter].score);
    }

    // Printing the final output
    puts("\nPlayer Info");
    printf("#\tName\tScore\n");

    // Initiating a for loop
    for(loop_counter = 0; loop_counter < 4; loop_counter++)
    {
        printf("%d\t%s\t%5d\n", loop_counter + 1, player[loop_counter].name, player[loop_counter].score);
    }

    return 0;
}
