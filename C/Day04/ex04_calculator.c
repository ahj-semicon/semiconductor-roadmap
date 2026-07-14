/*
 * File  : ex04_calculator.c
 * Day   : 04
 * Topic : Calculator Function
 * Goal  : Learn how to use functions with parameters and return values.
 */

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int main(void)
{
    printf("Add: %d\n", add(10, 5));
    printf("Subtract: %d\n", subtract(10, 5));
    printf("Multiply: %d\n", multiply(10, 5));
    printf("Divide: %d\n", divide(10, 5));

    return 0;
}

/*
 * Summary
 * - Create multiple functions.
 * - Pass values and return results.
 * - Reuse functions for calculations.
 */