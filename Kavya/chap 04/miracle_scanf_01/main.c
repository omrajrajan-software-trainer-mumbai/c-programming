// Taking user input using scanf(), format specifier and ampersand symbol in C with Codeblocks
// chap-04 page 51

//Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//The code starts with the main()
int main()

// The code starts here
{

    printf("Taking user input using scanf(), format specifier and ampersand symbol in C with Codeblocks\n\n");

    // Variable Declaration and initialization
    char name[20];
    char color[20];

    //Taking input from the user using printf() and scanf()
    printf("What is your name? ");
    scanf("%s", &name);

    printf("What is your favourite color? ");
    scanf("%s", &color);

    printf("%s's favorite color is %s\n", name, color);

    return 0;
}
