/*
 * File  : ex05_struct_pointer.c
 * Day   : 08
 * Topic : Structure Pointer
 * Goal  : Learn how to access structure members through a pointer.
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
    struct Student *ptr = &s1;

    printf("Name : %s\n", ptr->name);
    printf("Age  : %d\n", ptr->age);

    return 0;
}

/*
 * Summary
 * - A pointer can point to a structure.
 * - Use -> to access members through a pointer
 * - ptr->member is the same as (*ptr).member.
 */