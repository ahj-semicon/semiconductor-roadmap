/*
 * File  : ex05_string_loop.c
 * Day   : 06
 * Topic : String Loop
 * Goal  : Learn how to access each character in a string.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[] = "Apple";
    int i;

    for (i = 0; i < strlen(word); i++)
    {
        printf("%c\n", word[i]);
    }

    return 0;
}

/*
 * Summary
 * - A string is an array of characters.
 * - Use word[i] to access one character.
 * - Use %c to print one character.
 */
