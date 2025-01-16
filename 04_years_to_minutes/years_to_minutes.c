/*
    Chnages years into minutes
*/

#include <stdio.h>

int main()
{
    // Initialize variables
    int years = 1;
    int days = 0;
    int hours = 0;
    int mins = 0;

    // Ask question
    puts("Enter your age in years:");

    // Collect input
    scanf("%d", &years);

    // Do the math
    days = years * 365;
    hours = days *24;
    mins = hours *60;

    // Output the age in minutes
    printf("\"%d\" years is \"%d\" minutes\n", years, mins);    

    return 0;
}