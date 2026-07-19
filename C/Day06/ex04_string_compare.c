/*
 * File  : ex04_string_compare.c
 * Day   : 06
 * Topic : String Compare
 * Goal  : Learn how to compare two strings.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char password[20];

    printf("Enter password: ");
    scanf("%19s", password);

    if (strcmp(password, "1234") == 0)
    {
        printf("Correct!\n");
    }
    else
    {
        printf("Wrong!\n");
    }

    return 0;
}

/*
 * Summary
 * - strcmp() compares two strings.
 * - strcmp() returns 0 if the strings are equal.
 * - Do not use == to compare strings.
 */
