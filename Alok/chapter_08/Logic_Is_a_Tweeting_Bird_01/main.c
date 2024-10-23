// Program to demonstrate multiple condition in if statement in C with CodeBlocks
// chap - 08  page no - 106

// Preprocessor directive
#include <stdio.h>

//  Application starts with the main() function
int main()
{
    int coordinate;

    printf("Input target coordinate: ");
    scanf("%d", &coordinate);

    if(coordinate >= -5 && coordinate <= 5)
    {
        puts("Close enough!");
    }
    else
    {
        puts("Target is out of range!");
    }
    return (0);
}
