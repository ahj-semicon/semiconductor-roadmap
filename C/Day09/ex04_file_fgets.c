/*
 * File  : ex04_file_fgets.c
 * Day   : 09
 * Topic : fgets()
 * Goal  : Read one line from a file.
 */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char text[100];

    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("File open failed.\n");
        return 1;
    }

    fgets(text, sizeof(text), fp);

    printf("%s", text);

    fclose(fp);

    return 0;
}

/*
 * Summary
 * - fgets() reads one whole line.
 * - Spaces are included.
 * - Stops at newline or end of line.
 */