// Creating a program to find the use of pointer variable C with CodeBlocks
// chap 18
//Programmer : Kavyakrishnan

//Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Creating a program to find the use of pointer variable C with CodeBlocks\n\n");

    //Variable declaration and initialization
    char first_letter, second_letter, third_letter;
    char *p;

    first_letter = 'A'; second_letter = 'B'; third_letter = 'C';

    // Printing the output
    printf("Know your ");

    //Initialize
    p = &first_letter;
    //Use
    putchar(*p);

    //Initialize
    p = &second_letter;
    //Use
    putchar(*p);

    //Initialize
    p = &third_letter;
    //Use
    putchar(*p);

    printf("'s\n");

    return 0;
}
