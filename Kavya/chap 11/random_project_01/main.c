// Creating a program to generate a random number by the system in C with CodeBlocks
// chap 11 page - 155
// Programmer : Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Creating a program to generate a random number by the system in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    int random_number, outer_loop, inner_loop;

    srand ((unsigned)time(NULL));

    // Initiating outer loop
    for(outer_loop = 0; outer_loop < 20; outer_loop++)
    {
        // Initiating outer loop
        for(inner_loop = 0; inner_loop < 5; inner_loop++)
        {
            random_number = rand();
            printf("%d\t", random_number);
        }
        putchar('\n');
    }

    return 0;
}
