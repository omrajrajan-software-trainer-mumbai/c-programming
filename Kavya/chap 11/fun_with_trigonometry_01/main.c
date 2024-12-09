// Creating a program to explore trigonometry in C with CodeBlocks
// chap 11 page - 156
// Programmer : Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
//Include math library
#include <math.h>

// Defining Constants
#define PI 3.14159
#define WAVELENGTH 70
#define PERIOD .1

int main()
{
    printf("Creating a program to explore trigonometry in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    float graph, first_variable, second_variable;

    // Initiating outer loop
    for(graph = 0; graph < PI; graph += PERIOD)
    {
        first_variable = sin(graph);

        // Initiating inner loop
        for(second_variable = 0; second_variable < first_variable * WAVELENGTH; second_variable++)
        {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
