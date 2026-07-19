/*
 * File  : ex03_string_length.c
 * Day   : 06
 * Topic : String Length
 * Goal  : Learn how to measure the length of a string.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20];
    int length;

    printf("Enter your name: ");
    scanf("%19s", name);

    length = strlen(name);

    printf("Length = %d\n", length);

    return 0;
}

/*
 * Summary
 * - strlen() returns the number of characters.
 * - The null character (\0) is not counted.
 * - Include <string.h> to use strlen().
 */