/*
 * File  : ex06_day03_practice.c
 * Day   : 03
 * Topic : Number Pattern
 * Goal  : Practice loops with nested for statements.
 */

#include <stdio.h>

int main(void)
{
    int i;
    int j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", 6-j);
        }
        printf("\n");
    }

    return 0;
}

/*
 * Summary
 * - Use nested for loops.
 * - Repeat based on the outer loop.
 * - Print a number pattern.
 */