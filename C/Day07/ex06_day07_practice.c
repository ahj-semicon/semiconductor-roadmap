/*
 * File  : ex06_day07_practice.c
 * Day   : 07
 * Topic : Pointer Practice
 * Goal  : Practice address, pointer, and dereference.
 */

#include <stdio.h>

int main(void)
{
    int score = 95;
    int *ptr = &score;

    printf("score = %d\n", score);
    printf("Address = %p\n", (void *)&score);
    printf("Pointer = %p\n", (void *)ptr);
    printf("Value through pointer = %d\n", *ptr);

    return 0;
}

/*
 * Summary
 * - & gets an address.
 * - A pointer stores an address.
 * - * gets the value from an address.
 *
 */