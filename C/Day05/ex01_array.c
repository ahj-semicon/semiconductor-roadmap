/*
 * File  : ex01_array.c
 * Day   : 05
 * Topic : Array Declaration
 * Goal  : Learn how to declare and access arrays.
 */

#include <stdio.h>

int main(void)
{
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);
    printf("%d\n", numbers[3]);
    printf("%d\n", numbers[4]);

    return 0;
}

/*
 * Summary
 * - Array stores multiple values.
 * - Index starts from 0.
 * - number[0] means the first element.
 */