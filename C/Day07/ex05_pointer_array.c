/*
 * File  : ex05_pointer_array.c
 * Day   : 07
 * Topic : Pointer and Array
 * Goal  : Learn the relationship between array and pointers.
 */

#include <stdio.h>

int main(void)
{
    int numbers[3] = {10, 20, 30};

    printf("numbers      = %p\n", (void *)numbers);
    printf("&numbers[0]  = %p\n", (void *)&numbers[0]);

    printf("numbers[0] = %d\n", numbers[0]);
    printf("*numbers   = %d\n", *numbers);

    return 0;
}


/*
 * Summary
 * - An array name is the address of the first element.
 * - numbers == &numbers[0]
 * - *numbers is the first element.
 */