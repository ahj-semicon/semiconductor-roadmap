/*
 * File  : ex04_pointer_scanf.c
 * Day   : 07
 * Topic : Pointer and scanf
 * Goal  : Learn why scanf() needs an address.
 */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number:  ");
    scanf("%d", &num);

    printf("num = %d\n", num);

    return 0;
}

/*
 * Summary
 * - scanf() needs an address.
 * - Use & to pass the address of a variable.
 * - scanf() stores the input at that address.
 */