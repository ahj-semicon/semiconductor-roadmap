/*
 * File  : ex06_day08_practice.c
 * Day   : 08
 * Topic : Structure Practice
 * Goal  : Practice structures, structure arrays, functions, and structure pointers.
 */

#include <stdio.h>

struct Student
{
    char name[20];
    int age;
};

void printStudent(struct Student s)
{
    printf("%s %d\n", s.name, s.age);
}

int main(void)
{
    struct Student students[2] =
    {
        {"Kim", 20},
        {"Lee", 22}
    };

    struct Student *ptr = &students[0];

    printStudent(students[0]);
    printStudent(students[1]);

    printf("%s\n", ptr->name);
    printf("%d\n", ptr->age);

    return 0;
}

/*
 * Summary
 * - A structure groups related data.
 * - Structure arrays store multiple structures.
 * - Strucutres can be passed to functions.
 * - use -> to access members through a structure pointer.
 */