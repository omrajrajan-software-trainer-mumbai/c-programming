// Creating a program and using the sizeof operator to determine how much storage each C language variable type occupies  in C with CodeBlocks
// chap 18
//Programmer : Kavyakrishnan

//Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Creating a program and using the sizeof operator to determine how much storage each C language variable type occupies\n\n");

    //Variable declaration and initialization
    char alphabet = 'c';
    int variable = 123;
    float first_integer = 98.6;
    double second_integer = 6.022E23;

    //Displaying the size of each element
    printf("char \t%u\n", sizeof(alphabet));
    printf("int \t%u\n", sizeof(variable));
    printf("float \t%u\n", sizeof(first_integer));
    printf("double \t%u\n", sizeof(second_integer));

    return 0;
}
