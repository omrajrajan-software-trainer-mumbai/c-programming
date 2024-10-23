// Program to demonstrate to guess the define number in C with CodeBlocks
// chap - 08  page no - 101

// preprocessor directive
#include <stdio.h>

#define SECRET 17

int main()

{
    int guess;
    printf("Can you guess the secret number: ");
    scanf("%d", &guess);

    if (guess == SECRET)
    {
        puts("You guessed it!");
        return (0);
    }
    if (guess != SECRET)
    {
        puts("Wrong!");
        return (1);
    }
}
