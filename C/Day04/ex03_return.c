/*
 * File  : ex03_return.c
 * Day   : 04
 * Topic : Return Value
 * Goal  : Learn how to return a value from a function.
 */

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int result;

    result = add(10, 20);

    printf("Result: %d\n", result);

    return 0;
}

/*
 * Summary
 * - Return a value.
 * - Store the returned value.
 * - Print the result.
 */