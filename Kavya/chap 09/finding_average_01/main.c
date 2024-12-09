// Calculating average of 5 numbers using for loop in C with CodeBlocks
// chap 09

//Preprocessor Directives
//Includes the standard input/output library for functions like printf()
#include <stdio.h>
#include <stdlib.h>

//The application starts with the main()
int main()
{
    printf("Calculating average of 5 numbers using for loop in C with CodeBlocks\n\n");

    // Variable declaration and initialization
    // To store cumulative sum
    int sum = 0;
    int number, loop_counter;

    for (loop_counter = 1; loop_counter <= 5; loop_counter++)
    {
        // Taking input from user and storing with the help of scanf ()
        printf("Enter the %d's value: ",loop_counter);
        scanf("%d", &number);
        // Adds the input value to sum
        sum += number;
    }
    // Calculates the average by dividing sum by 5
    float average = (float)sum / 5;
    // Displaying the calculated average
    printf("Average = %.2f\n", average);

    //Indicates that the program executed successfully
    return 0;
}
