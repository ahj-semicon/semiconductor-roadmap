/*
 * File  : ex02_string_input.c
 * Day   : 06
 * Topic : String Input
 * Goal  : Learn how to input and print a string.
 */

#include <stdio.h>

int main(void)
{
    char name[20];

    printf("Enter your name: ");
    scanf("%19s", name);

    printf("Hello, %s!\n", name);

    return 0;
}

/*
 * Summary
 * - Declare a character array.
 * - Input a string using scanf().
 * - Print the string using %s.
 */