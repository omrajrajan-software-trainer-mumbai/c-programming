//Taking value from the user and comparing it with default number in C using CodeBlocks
//chap-08 page-101

//Preprocessor Directive
#include <stdio.h>
#include <stdlib.h>

//Assigning the value 5 to the variable secret and defining it
#define secret 5

// The code begins with main()
int main()
{
    printf("Taking value from the user and comparing it with default number in C using CodeBlocks\n\n");

    // Variable Declaration and Initialization
    int guess;

    //Prompting the user to guess the number and storing it in scanf()
    printf("Can you guess the secret number: \n");
    scanf("%d", &guess);

    //Checking the condition
    if(guess == secret){
        //This statement will be executed if the above condition is right
        printf("\nYou guessed it right!!!");
        }

    //Checking the alternative condition
    if(guess != secret){
        //This statement will be executed if the above condition is right
        printf("WRONG!!");
    }
    return 0;
}
