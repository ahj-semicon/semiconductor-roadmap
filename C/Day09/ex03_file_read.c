/*
 * File  : ex03_file_read.c
 * Day   : 09
 * Topic : File Read
 * Goal  : Learn how to read data from a file.
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

    fscanf(fp, "%99s", text);

    printf("Read : %s\n", text);

    fclose(fp);

    return 0;
}

/*
 * Summary
 * - "r" opens a file for reading.
 * - fscanf() reads data from a file.
 * - fclose() closes the file.
 */