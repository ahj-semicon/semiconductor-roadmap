/*
 * File  : ex01_if.c
 * Day   : 02
 * Topic : Basic If Statement
 * Goal  : Learn how to use the if statement.
 */

#include <stdio.h>

int main (void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("Positive Number\n");
    }

    return 0;
}

 /*
 * Summary
 * - if executes only when the condition is true.
 * - '>' checks whether the left value is greater.
 * - A false condition skips the block.
 */