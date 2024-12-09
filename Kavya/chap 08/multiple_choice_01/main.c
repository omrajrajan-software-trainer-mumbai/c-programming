//Using switch statement to make code decisions in C using CodeBlocks
//chap-08 page-100

//Preprocessor Directive
#include <stdio.h>
#include <stdlib.h>

// The code begins with main()
int main()
{
    printf("Using switch statement to make code decisions in C using CodeBlocks\n\n");

    // Variable Declaration and Initialization
    int code;

    //Prompting the user to enter the value and storing the value using scanf()
    printf("Enter the error code(1-3): ");
    scanf("%d", &code);

    // The expression will be written within the parentheses
    switch (code)
    {
        case 1:
            printf("\nDrive Fault, not your fault.");
            break;
        case 2:
            printf("\nIllegal Format, call a lawyer.");
            break;
        case 3:
            printf("\nBad filename, spank it.");
            break;
        default:
            printf("That's not 1, 2 or 3.");
            break;
    }
    return 0;
}
