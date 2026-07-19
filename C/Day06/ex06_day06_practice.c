/*
 * File  : ex06_day06_practice.c
 * Day   : 06
 * Topic : String Practice
 * Goal  : Practice string input, length, and comparison.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[20];

    printf("Enter a word: ");
    scanf("%19s", word);

    printf("Word : %s\n", word);
    printf("Length : %d\n", strlen(word));

    if (strcmp(word, "apple") == 0)
    {
        printf("Correct word!\n");
    }
    else
    {
        printf("Different word!\n");
    }
    
    return 0;
}


/*
 * Summary
 * - Input a string.
 * - Print the string and its length.
 * - Compare strings using strcmp().
 */
