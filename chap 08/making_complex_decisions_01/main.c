//Using the if-else statement to make complex decisions in C using CodeBlocks
//chap-08 page-100

//Preprocessor Directive
#include <stdio.h>
#include <stdlib.h>

// The code begins with main()
int main()
{
    printf("Using the if-else statement to make complex decisions in C using CodeBlocks\n\n");

    // Variable Declaration and Initialization
    int number_1, number_2;

    number_1 = 6;
    number_2 = number_1 - 2;

    //Checking a condition using if-else statement

    if (number_1 > number_2)
    {
    //This line will be executed if the above condition is true
        printf("%d is greater than %d", number_1, number_2);

    } else {

    //This line will be executed if the above condition is not true
        printf("%d is lessr than %d", number_1, number_2);
    }

    return 0;
}
