/*
 * File  : ex05_leap_year.c
 * Day   : 02
 * Topic : Leap Year
 * Goal  : Learn How to use logical operators with if statements.
 */

#include <stdio.h>

int main(void)
{
    int year;

    printf("Enter your year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

/*
 * Summary
 * - && means AND.
 * - || means OR.
 * - ! and != represent NOT and not equal.
 */