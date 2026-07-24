/*
 * File  : ex03_dereference.c
 * Day   : 07
 * Topic : Dereference
 * Goal  : Learn how to access a value through a pointer.
 */

#include <stdio.h>

int main(void)
{
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("num = %d\n", num);
    printf("*ptr = %d\n", *ptr);

    return 0;
}


/*
 * Summary
 * - ptr stores an address.
 * - *ptr accesses the value at that address.
 * - * is called the dereference operator.
 */