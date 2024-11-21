//Using ternary operator to make decisions in C using CodeBlocks
//chap-08 page-111

//Preprocessor Directive
#include <stdio.h>
#include <stdlib.h>

// The code begins with main()
int main()
{
    printf("Using ternary operator to make decisions in C using CodeBlocks\n\n");

    // Variable Declaration and Initialization
    int number_1, number_2, larger;

    //Prompting the user to enter the value and storing the value using scanf()

    printf("Enter the first number:");
    scanf("%d", &number_1);
    printf("Enter the second number:");
    scanf("%d", &number_2);

    //Assigning a value using ternary operator in the variable larger
    larger = (number_1 > number_2) ? number_1 : number_2;
    printf("%d is larger.\n", larger);
    return 0;
}
