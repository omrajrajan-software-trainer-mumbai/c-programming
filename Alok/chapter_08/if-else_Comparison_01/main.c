// Program to demonstrate comparing if and else statements in C with CodeBlocks
// chap - 08  page no - 104

// preprocessor directive
#include <stdio.h>

// Application starts with the main() function
int main()
{
    int a, b;
    a = 6;
    b = a - 2;
    if (a < b)
    {
        printf("%d is greater than %d\n",a ,b);
    }
    else
    {
        printf("%d is not greater than %d\n",a ,b);
    }
    return (0);
}
