// Creating a program to find the location of a variable in C with CodeBlocks
// chap 18
//Programmer : Kavyakrishnan

//Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Creating a program to find the location of a variable in C with CodeBlocks\n\n");

    //Variable declaration and initialization
    char hello[] = "Hello!";
    int number = 0;

    //Starting a while loop
    while(hello[number])
    {
        //Displaying the letter as well as its address
        printf("%c at %p\n", hello[number], &hello[number]);
        number++;
    }
    return 0;
}
