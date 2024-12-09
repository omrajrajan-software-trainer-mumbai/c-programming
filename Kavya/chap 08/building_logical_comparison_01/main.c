//Using two or more comparisons into a single if statement in C using CodeBlocks
//chap-08 page-106

//Preprocessor Directive
#include <stdio.h>
#include <stdlib.h>

// The code begins with main()
int main()
{
    printf("Using two or more comparisons into a single if statement in C using CodeBlocks\n\n");

    // Variable Declaration and Initialization
    int coordinate;

    //Prompting the user to enter the value and storing the value and saving it using scanf()
    printf("Input target coordinate: ");
    scanf("%d", &coordinate);

    //Checking a condition using if-else statement
    if(coordinate <= 5 && coordinate >= -5)
    {
        //The below statement will be executed if the above statement is true
        printf("\nClose Enough!");
    }
    else
    {
        //The below statement will be executed if the above statement is not true
        printf("\nTarget is out of range!");
    }

    return 0;
}
