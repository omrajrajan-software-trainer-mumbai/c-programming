//Using the if statement thrice to perform mathematical comparisons in C using CodeBlocks
//chap-08 page-100

//Preprocessor Directive
#include <stdio.h>
#include <stdlib.h>

// The code begins with main()
int main()
{
    printf("Using the if statement thrice to perform mathematical comparisons in C using CodeBlocks\n\n");

    // Variable Declaration and Initialization
    int number_1, number_2;

    //Prompting the user to enter the value and storing the value using scanf()

    printf("Input the first value: ");
    scanf("%d", &number_1);

    printf("Input the second value: ");
    scanf("%d", &number_2);

    //Checking a condition using if statement

    if(number_1 > number_2){
    //This line will be executed  if the above condition is true
       printf("%d is greater than %d", number_1, number_2);
    }
    //Checking another condition using if statement

    if(number_1 < number_2){
    //This line will be executed  if the above condition is true
       printf("%d is lesser than %d", number_1, number_2);
    }

    if(number_1 == number_2){
    //This line will be executed  if the above condition is true
       printf("%d is equal to %d", number_1, number_2);
    }

    return 0;
}
