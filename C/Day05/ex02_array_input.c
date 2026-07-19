/*
 * File  : ex02_array_input.c
 * Day   : 05
 * Topic : Array Input
 * Goal  : Learn how to store values in an array.
 */

#include <stdio.h>

int main(void)
{
    int numbers[5];

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);
    printf("%d\n", numbers[3]);
    printf("%d\n", numbers[4]);

    return 0;
}

/*
 * Summary
 * - Arrays can store values one by one.
 * - Each element has its own index.
 * - Use array[index] to access elements.
 */