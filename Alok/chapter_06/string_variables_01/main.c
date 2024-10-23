// Program to demonstrate working of puts() and gets() function in C with CodeBlocks
// chapter: 6  page: 70

// preprocessor directive
#include <stdio.h>
#include <stdlib.h>

// Application starts with the main() function
int main()

{
     printf("Program to demonstrate working of puts() and gets() function in C with CodeBlocks\n");

     char jerk[20];
     puts("\nName some jerk you know: ");
     gets(jerk);

     puts("Yeah, I think");
     puts(jerk);
     puts("is a jerk, too.");

     return(0);
}
