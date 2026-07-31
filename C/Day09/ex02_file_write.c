/*
 * File  : ex02_file_write.c
 * Day   : 09
 * Topic : File Write
 * Goal  : Learn how to write data to a file.
 */

#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("data.txt", "w");

    if (fp == NULL)
    {
        printf("File open failed.\n");
        return 1;
    }

    fprintf(fp, "Hello, C Programming!\n");
    fprintf(fp, "Day09 File I/O\n");

    fclose(fp);

    printf("Data written successfully.\n");

    return 0;
}

/*
 * Summary
 * - fprintf() writes formatted data to a file.
 * - The first argument is the file pointer.
 * - Always close the file after writing.
 */