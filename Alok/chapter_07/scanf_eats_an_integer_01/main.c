// Program to demonstrate storing value of number using scanf() and format specifier in C with CodeBlocks.
// Chap - 07  page - 92

// preprocessor directive
#include <stdio.h>

// Application starts with main() function
int main()
{
    int favorite_number;
    printf("What is your favorite number: ");
    scanf("%d", &favorite_number);

    printf("%d is my favorite number, too!\n", favorite_number);

    return(0);
}
