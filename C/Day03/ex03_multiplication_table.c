/*
 * File  : ex03_multiplication_table.c
 * Day   : 03
 * Topic : Multiplication Table
 * Goal  : Learn How to use nested for loops.
 */

#include <stdio.h>

int main(void)
{
    int dan;
    int num;

    for (dan = 2; dan <= 9; dan++)
    {
        printf("[%d Times Table]\n", dan);

        for (num = 1; num <= 9; num++)
        {
            printf("%d x %d = %d\n", dan, num, dan * num);
        }

        printf("\n");
    }

    return 0;
}

/*
 * Summary
 * - Use nested for loops.
 * - Repeat rows and columns.
 * - Print the multiplication table.
 */