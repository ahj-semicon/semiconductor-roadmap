/*
 * File  : ex01_address.c
 * Day   : 07
 * Topic : Address Operator
 * Goal  : Learn how to get the address of a variable.
 */

#include <stdio.h>

int main(void)
{
    int num = 10;

    printf("Value   : %d\n", num);
    printf("Address : %p\n", (void *)&num);

    return 0;
}

/*
 * Summary
 * - Every variable has an address.
 * - & gets the address of a variable.
 * - %p prints an address.
 */