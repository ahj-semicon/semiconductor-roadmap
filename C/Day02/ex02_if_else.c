/*
 * File  : ex02_if_else.c
 * Day   : 02
 * Topic : If-Else Statement
 * Goal  : Learn How to use if-else statement.
 */

 #include <stdio.h>

 int main (void)
 {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("Positive Number\n");
    }
    else{
        printf("Zero or Negative Number\n");
    }

    return 0;
 }

 /*
 * Summary
 * - if executes when the condition is true.
 * - else executes when the condition is false.
 * - Only one block is executed.
 */