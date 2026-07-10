/*
 * File  : ex06_day02_practice.c
 * Day   : 02
 * Topic : Number Classification
 * Goal  : Practice if, else if, logical operators, and modulo.
 */

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("Positive\n");

        if (number % 2 == 0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
    }
    else if (number < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }

    return 0;
}

/*
 * Summary
 * - if statements can be nested.
 * - '%' is used to check even and odd numbers.
 * - Multiple conditions can be combined logically.
 */