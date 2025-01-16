/*
    The introduction to variables.


*/

// Preprocessor directive
// stdio - standard input output
#include <stdio.h>

// Create main
int main() 
{
    // Create a variable
    int first_number;
    // Assign the value to the variable
    first_number = 100;

    // Create and initialize
    int second_number = -19;

    // Print the value of a variable
    printf("The first number is %d\n", first_number);
    
    // Print second variable
    printf("The second number is %d\n", second_number);

    // Create a sum of two numbers
    int sum = first_number + second_number;

    // Print sum
    printf("%d + %d = %d\n", first_number, second_number, sum);

    return 0;
}