/*
 * File  : ex05_array_input_loop.c
 * Day   : 05
 * Topic : Array Input with Loop
 * Goal  : Learn how to input values into an array using a loop.
 */

#include <stdio.h>

int main(void)
{
    int numbers[5];
    int i;
    
    printf("Enter 5 number:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("\nYou entered:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}

/*
 * Summary
 * - Input values into an array.
 * - Use a loop with scanf().
 * - Print all stored values.
 */