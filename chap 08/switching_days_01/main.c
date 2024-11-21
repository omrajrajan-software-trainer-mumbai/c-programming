// Using switch statement to select a day of the week in C using CodeBlocks

//Preprocessor Directive
#include <stdio.h>
#include <stdlib.h>

// The code begins with main()
int main()
{
    printf("Using switch statement to select a day of the week in C using CodeBlocks\n\n");

    // Variable Declaration and Initialization
    int day;

    // Prompting the user to enter the value and storing the value using scanf()
    printf("Enter a number(1-7) to choose a day of the week:");
    scanf("%d", &day);

    //The switch statement begins from here
    switch (day) //The type of expression will be written within the parentheses

    {
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("This day does not exist");

    }
    return 0;
}
