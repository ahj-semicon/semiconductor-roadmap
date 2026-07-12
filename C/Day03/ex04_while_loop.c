/*
 * File  : ex04_while_loop.c
 * Day   : 03
 * Topic : While Loop
 * Goal  : Learn How to use the while loop.
 */

#include <stdio.h>

int main(void)
{
    int i = 1;

    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

/*
 * Summary
 * - Repeat with while.
 * - Check the condition first.
 * - Update the loop variable.
 */