// Creating a function with array as parameter to find Sum of elements in C with CodeBlocks
// chap - 10
// Programmer :- Kavya Krishnan

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//Function to calculate sum of array; 'arr' is the array, 'size' is its length
int sumArray(int arr[], int size)
{
    int sum = 0;
    int loop_counter;

    for(loop_counter = 0; loop_counter < size; loop_counter++)
    {
        // Adds each element to sum
        sum += arr[loop_counter];
    }
    return sum;
}

//The application starts with main ()
int main()
{
    printf("Creating a function with array as parameter to find Sum of elements in C with CodeBlocks\n\n");

    //  Declares an integer array with 5 elements
    int arr[] = {1, 2, 3, 4, 5};

    //Calls sumArray with the array and its size
    int result = sumArray(arr, 5);
    printf("Sum of array elements = %d", result);

    return 0;
}
