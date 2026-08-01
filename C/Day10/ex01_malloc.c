/*
 * File  : ex01_malloc.c
 * Day   : 10
 * Topic : malloc()
 * Goal  : Learn how to allocate memory dynamically.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr;

    ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    *ptr = 100;

    printf("Value : %d\n", *ptr);

    free(ptr);

    return 0;
}

/*
 * Summary
 * - malloc() allocates memory during program execution.
 * - sizeof(int) requests enough memory for one int.
 * - malloc() returns an address.
 * - free() releases allocated memory.
 */