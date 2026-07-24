/*
 * File  : ex02_pointer.c
 * Day   : 07
 * Topic : Pointer variable.
 * Goal  : Learn how to declare and use a pointer.
 */

#include <stdio.h>

int main(void)
{
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("num = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);
    printf("ptr = %p\n", (void *)ptr);

    return 0;
}

/*
 * Summary
 * - A pointer stores an address.
 * - Use * to declare a pointer.
 * - Assign an address using &.
 */