/*
 * File  : ex04_even_odd.c
 * Day   : 02
 * Topic : Even and Odd Numbers
 * Goal  : Learn How to use the modulo operator with if statements.
 */

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }

    return 0;
}

/*
 * Summary
 * - '%' returs the remainder.
 * - Even numbers have a remainder of 0 when divided by 2.
 * - Odd numbers hvae a remainder of 1 when divided by 2.
 */