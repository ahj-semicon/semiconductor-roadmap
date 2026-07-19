/*
 * File  : ex06_day05_practice.c
 * Day   : 05
 * Topic : Array Practice
 * Goal  : Practices array input, output, and sum.
 */

#include <stdio.h>

int main(void)
{
    int numbers[5];
    int i;
    int sum = 0;

    printf("Enter 5 number:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("\nNumbers:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
        sum += numbers[i];
    }

    printf("\nSum = %d\n", sum);

    return 0;
}

/*
 * Summary
 * - Input values into an array.
 * - Print all array elements.
 * - Calculate and print the sum.
 */
