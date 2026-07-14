/*
 * File  : ex05_scope.c
 * Day   : 04
 * Topic : Variable Scope
 * Goal  : Learn how variable scope works.
 */

#include <stdio.h>

void printNumber(void)
{
    int number = 20;

    printf("Inside function: %d\n", number);
}

int main(void)
{
    int number = 10;

    printf("Inside main: %d\n", number);

    printNumber();

    return 0;
}

/*
 * Summary
 * - Variables have scope.
 * - Local variables exist only in their function.
 * - Different functions use different variables.
 */