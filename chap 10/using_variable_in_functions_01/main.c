// Using local variables in a C programming function with CodeBlocks
// chap - 10 page 135

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

// Function Prototype or Declaration
void vegas();
void california();

//The Application starts with the main() function
int main() {
    printf("Using local variables in a C programming function with CodeBlocks\n\n");

    //Variable declaration and initialization
    int first_unit;
    first_unit = 365;

    // Displaying the above declaration using printf()
    printf("In the main function, first_unit = %d\n", first_unit);

    // Calling the function vegas()
    vegas();
    // Calling the function california()
    california();

    printf("In the main function, first_unit = %d\n", first_unit);
    return 0;
}

// Defining the function
void vegas(void)
{
    //Variable declaration and initialization
    int first_unit;
    first_unit = -10;

    printf("In the vegas function, first_unit = %d\n", first_unit);
}

// Defining the function
void california(void)
{
    //Variable declaration and initialization
    int first_unit;
    first_unit = -20;

    printf("In the california function, first_unit = %d\n", first_unit);
}
