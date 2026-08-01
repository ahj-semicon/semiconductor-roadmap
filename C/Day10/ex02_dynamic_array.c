/*
 * File  : ex02_dynamic_array.c
 * Day   : 10
 * Topic : Dynamic array
 * Goal  : Allocate memory for an integer array using malloc().
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;

    arr = (int *)malloc(sizeof(int) * 5);

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
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
 * - Allocate memory for multiple integers.
 * - Access dynamically allocated memory using array indexing.
 * - Release allocated memory with free()
 */