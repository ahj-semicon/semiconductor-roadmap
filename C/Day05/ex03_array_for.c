/*
 * File  : ex03_array_for.c
 * Day   : 05
 * Topic : Array with for Loop
 * Goal  : Learn how to print array elements using a loop.
 */

#include <stdio.h>

int main(void)
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}

/*
 * Summary
 * - Use a loop to access every array element.
 * - i is used as the array index.
 * - numbers[i] changes as i changes.
 */