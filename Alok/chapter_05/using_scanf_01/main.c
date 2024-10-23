// Program to demonstrate the use of scanf() with string datatype in C with CodeBlocks

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Program to demonstrate the use of scanf() with string datatype in C with CodeBlocks\n\n");

    // Variable declaration of character array using [] which is known as string
    char user_name[20];

    printf("Enter Your Name: ");

    // Using scanf() with %s format specifier and address symbol & to take value from the user and store in user_name variable
    scanf("%s", &user_name);

    printf("Glad to meet you, %s!\n", user_name);

    return 0;
}
