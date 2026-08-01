/*
 * File  : ex03_calloc.c
 * Day   : 10
 * Topic : calloc()
 * Goal  : Allocate and initialize memory using calloc().
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;

    arr = (int *)calloc(5, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

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
 * - calloc() allocates memory and initializes it to 0.
 * - Specify the number of elements and the size of each element.
 * - Release allocated memory with free().
 */