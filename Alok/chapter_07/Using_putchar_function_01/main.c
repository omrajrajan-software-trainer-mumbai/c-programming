// Program to demonstrate putting putchar() function to work using getchar() and putchar() function in C with CodeBlocks.
// Chap - 07  page - 86

//Preprocessor directive
#include <stdio.h>

//Application starts with main() function
int main()
{
    int ch;
    printf("Press Enter: ");
    getchar();

    ch = "H";
    putchar(ch);
    ch="i";
    putchar(ch);
    putchar('!');

    return(0);
}
