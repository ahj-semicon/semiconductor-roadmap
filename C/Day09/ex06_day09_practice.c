/*
 * File  : ex06_day09_practice.c
 * Day   : 09
 * Topic : File I/O Practice
 * Goal  : Save structure data to a file and read it back.
 */

#include <stdio.h>

struct Student
{
    char name[20];
    int age;
};

int main(void)
{
    struct Student s1 = {"Kim", 20};

    FILE *fp;

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File Open Failed.\n");
        return 1;
    }

    fprintf(fp, "%s %d", s1.name, s1.age);

    fclose(fp);

    printf("Saved!\n");

    char name[20];
    int age;

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File Open Failed.\n");
        return 1;
    }

    fscanf(fp, "%19s %d", name, &age);

    printf("Read : %s %d\n", name, age);

    fclose(fp);

    return 0;    
}

/*
 * Summary
 * - Use fprintf() to save data to a file.
 * - Use fscanf() to read data from a file.
 * - Open a file with "w" mode to write.
 * - Open a file with "r" mode to read.
 * - Always close the file with fclose().
 */