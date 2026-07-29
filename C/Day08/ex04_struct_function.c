/*
 * File  : ex04_struct_function.c
 * Day   : 08
 * Topic : Structure and Function
 * Goal  : Learn how to pass a structure to a function.
 */

#include <stdio.h>

struct Student
{
    char name[20];
    int age;
};

void printStudent(struct Student s)
{
    printf("Name : %s\n", s.name);
    printf("Age  : %d\n", s.age);
};

int main(void)
{
    struct Student s1 = {"Kim", 20};

    printStudent(s1);

    return 0;
}

/*
 * Summary
 * - A structure can be passed to a function
 * - The function receives a copy of the structure.
 * - Access members with the dot operator.
 */