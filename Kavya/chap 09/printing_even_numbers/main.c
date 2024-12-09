// Printing only even numbers between 1 to 20 using a for Loop in C with CodeBlocks
// chap 09

//Preprocessor Directives
//Includes the standard input/output library for functions like printf()
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Printing only even numbers between 1 to 20 using a for Loop in C with CodeBlocks\n\n");
    //Variable declaration and initialization
    int loop_counter;

    // 'loop_counter' starts at 2 and increments by 2 until it reaches 20
    for(loop_counter = 2; loop_counter <= 20; loop_counter = loop_counter + 2)
    {
        // This statement prints the current value of 'loop_counter' followed by a newline character
        printf("%d\n", loop_counter);
    }
    //Indicates that the program executed successfully
    return 0;
}
