/*
 * File  : ex04_array_sum.c
 * Day   : 05
 * Topic : Array Sum
 * Goal  : Learn how to calculate the sum of array elements.
 */

#include <stdio.h>

int main(void)
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int i;
    int sum = 0;

    for (i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }

    printf("Sum = %d\n", sum);
}

/*
 * Summary
 * - Use a loop to process array elements.
 * - Accumulate values in a variable.
 * - Print the total sum.
 */