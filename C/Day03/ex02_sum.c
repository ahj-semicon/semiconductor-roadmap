/*
 * File  : ex02_sum.c
 * Day   : 03
 * Topic : Sum with For Loop
 * Goal  : Learn How to calculate a sum using a for loop.
 */

#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}

/*
 * Summary
 * - Repeat with for.
 * - Add values to sum.
 * - Print the final result.
 */