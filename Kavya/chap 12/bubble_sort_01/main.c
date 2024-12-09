// Creating a program to compare  each array element  with every other array element in an organized sequence in C with CodeBlocks
// chap 12 page - 171
// Programmer : Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

// Defining constant
#define SIZE 6

// The application starts with main()
int main()
{
    printf("Creating a program to compare  each array element  with every other array element in an organized sequence in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    int bubble[] = {95, 60, 6, 87, 50, 24 };
    int inner_loop, outer_loop, temp, number;

    // Display original array
    printf("Original Array: ");

    // Initiating the loop
    for(number = 0; number < SIZE; number++)
    {
        // Displaying the array
        printf("%d\t", bubble[number]);
    }
    printf("\n");

    // Bubble sort
    // Initiating the outer loop
    for(outer_loop = 0; outer_loop < SIZE - 1; outer_loop++)
    {
        // Initiating the inner loop
        for(inner_loop = outer_loop + 1; inner_loop < SIZE; inner_loop++)
        {
            // Using the if statement to declare the bigger number
            if(bubble[outer_loop] > bubble[inner_loop])
            {
                // The condition
                temp = bubble[outer_loop];
                bubble[outer_loop] = bubble[inner_loop];
                bubble[inner_loop] = temp;
            }
        }
    }

    // Display the sorted array
    printf("Sorted Array: ");

    // A loop to display the final outut
    for(number = 0; number < SIZE; number++)
    {
        printf(" %d\t", bubble[number]);
    }
    printf("\n");

    return 0;
}
