/*
 * File  : ex01_file_open.c
 * Day   : 09
 * Topic : File Open
 * Goal  : Learn how to open and close a file.
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

    printf("File opened successfully.\n");

    fclose(fp);

    return 0;
}

/*
 * Summary
 * - FILE * is a file pointer.
 * - fopen() opens a file.
 * - fclose() closes a file.
 */