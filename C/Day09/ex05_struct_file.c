/*
 * File  : ex05_struct_file.c
 * Day   : 09
 * Topic : Structure + File
 * Goal  : Save structure data to a file.
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
        printf("File open failed.\n");
        return 1;
    }

    fprintf(fp, "Name : %s\n", s1.name);
    fprintf(fp, "Age : %d\n", s1.age);

    fclose(fp);

    printf("Student saved.\n");

    return 0;
}

/*
 * Summary
 * - Structure members can be written using fprintf().
 * - Access members with '.'.
 * - Save data to a text file.
 */