// Program to get a character in a string using getchar() function in C with CodeBlocks.
// chap - 07  page - 84

//preprocessor directive
#include <stdio.h>

//Application starts with main() function
int main()
{
    int c;
    printf("I'm waiting for a character: ");

    c=getchar();
    printf("I waited for the '%c character.\n",c);

    return(0);
}
