/*
 * File  : ex03_else_if.c
 * Day   : 02
 * Topic : Else if Statement
 * Goal  : Learn How to use else if statements.
 */

#include <stdio.h>

int main(void)
{
    int score;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 90)
    {
        printf("Grade : A\n");
    }
    else if (score >= 80)
    {
        printf("Grade : B\n");
    }
     else if (score >= 70)
    {
        printf("Grade : C\n");
    }
     else
    {
        printf("Grade : F\n");
    }

    return 0;
}

/*
 * Summary
 * - if executes when the condition is true.
 * - else executes when the condition is false.
 * - Only one block is executed.
 */