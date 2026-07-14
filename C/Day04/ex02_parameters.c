/*
 * File  : ex02_parameters.c
 * Day   : 04
 * Topic : Parameters
 * Goal  : Learn how to pass values to a function.
 */

#include <stdio.h>

void printNumber(int number)
{
    printf("Number: %d\n", number);
}

int main(void)
{
    printNumber(10);
    printNumber(25);
    printNumber(100);

    return 0;
}

/*
 * Summary
 * - Pass values to a function.
 * - Use parameters.
 * - Print different results.
 */