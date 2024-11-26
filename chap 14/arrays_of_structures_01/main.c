// Creating a program to declare an array of structures in C with CodeBlocks
// chap 14 page - 205
// Programmer : Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

#define MIN_VALUE 0
#define MAX_VALUE 6

//The application starts with the main()
int main() {
    printf("Creating a program to declare an array of structures in C with CodeBlocks\n\n");

    // Declaring and initializing a structure user defined data-type
    struct scores {
        // Initializing an structure array
        char name[32];
        int score;
    };

    // Declaration and Initialization of Variables
    struct scores player[MAX_VALUE];
    int loop_counter;

    // Initiating a for loop
    for(loop_counter = MIN_VALUE; loop_counter < MAX_VALUE; loop_counter++) {
        // Inputing multiple values from the user using a for-loop and scanf()
        printf("Enter player %d: ", loop_counter + 1);
        scanf("%s", player[loop_counter].name);
        printf("Enter their score: ");
        scanf("%d", &player[loop_counter].score);
    }

    // Printing the final output
    puts("\nPlayer Info");
    printf("#\tName\tScore\n");

    // Initiating a for-loop
    for(loop_counter = MIN_VALUE; loop_counter < MAX_VALUE; loop_counter++) {
        printf(
            "%d\t%s\t%5d\n",
            loop_counter + 1,
            player[loop_counter].name,
            player[loop_counter].score
        );
    }

    return 0;
}
