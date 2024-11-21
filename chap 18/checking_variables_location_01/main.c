// Creating a program to find the location of a variable in C with CodeBlocks
// chap 18
//Programmer : Kavya Krishnan

//Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Creating a program to find the location of a variable in C with CodeBlocks\n\n");

    //Variable declaration and initialization
    char alphabet = 'c';
    int variable = 123;
    float first_integer = 98.6;
    double second_integer = 6.022E23;

    //Displaying the location address of each element
    printf("Address of 'alphabet' %p\n", &alphabet);
    printf("Address of 'variable' %p\n", &variable);
    printf("Address of 'first_integer' %p\n", &first_integer);
    printf("Address of 'second_integer' %p\n", &second_integer);

    return 0;
}
