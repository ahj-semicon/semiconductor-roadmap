/*
 * File  : ex03_struct_array.c
 * Day   : 08
 * Topic : Structure Array
 * Goal  : Learn how to use an array of structures.
 */

#include <stdio.h>

struct Student
{
    char name[20];
    int age;
};

int main(void)
{
    struct Student students[2] =
    {
        {"Kim", 20},
        {"Lee", 22}
    };

    printf("%s %d\n", students[0].name, students[0].age);
    printf("%s %d\n", students[1].name, students[1].age);

    return 0;
}

/*
 * Summary
 * - A structure array stores multiple structures.
 * - Access elements using [].
 * - Access members using .
 */