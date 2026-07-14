/*
 * File  : ex06_day04_practice.c
 * Day   : 04
 * Topic : Function Practice
 * Goal  : Practice functions with parameters and return valuse.
 */

#include <stdio.h>

int square(int number)
{
    return number * number;
}

int main(void)
{
    int value = 7;
    int result;

    result = square(value);

    printf("%d squared = %d\n", value, result);

    return 0;
}

/*
 * Summary
 * - Create a function.
 * - Return a calculated value.
 * - Use the returned value.
 */