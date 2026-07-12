/*
 * File  : ex01_for_loop.c
 * Day   : 03
 * Topic : For Loop
 * Goal  : Learn How to use the for loop.
 */

#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}

/*
 * Summary
 * - for repeats code.
 * - Initialize once.
 * - Check the condition.
 * - Increment the loop variable.
 */