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

    p = &first_letter;
    *p = 'A';
    p = &second_letter;
    *p = 'B';
    p = &third_letter;
    *p = 'C';

    // Displaying the output
    printf("Know your %c%c%c's\n", first_letter, second_letter, third_letter);

    return 0;
}
