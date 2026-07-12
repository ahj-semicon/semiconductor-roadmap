/*
 * File  : ex05_do_while.c
 * Day   : 03
 * Topic : Do-While Loop
 * Goal  : Learn How to use the do-while loop.
 */

#include <stdio.h>

int main(void)
{
    int i = 6;

    do
    {
        printf("%d\n", i);
        i++;
    }
    while (i <= 5);

    return 0;
}

/*
 * Summary
 * - Repeat with do-while.
 * - Execute first.
 * - Check the condition after.
 */