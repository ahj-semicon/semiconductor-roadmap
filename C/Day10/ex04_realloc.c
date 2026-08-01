/*
 * File  : ex04_realloc.c
 * Day   : 10
 * Topic : calloc()
 * Goal  : Allocate and initialize memory using calloc().
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;

    arr = (int *)malloc(sizeof(int) * 3);

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    arr = (int *)realloc(arr, sizeof(int) * 5);

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    arr[3] = 40;
    arr[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}

/*
 * Summary
 * - realloc() changes the size of allocated memory.
 * - Existing data is preserved after resizing.
 * - Always check if realloc() succeeds.
 * - Release memory with free().
 */