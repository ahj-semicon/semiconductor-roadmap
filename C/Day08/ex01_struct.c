/*
 * File  : ex01_struct.c
 * Day   : 08
 * Topic : Structure
 * Goal  : Learn how to declare and use a structure.
 */

#include <stdio.h>

struct Student
{
    char name[20];
    int age;
};

int main(void)
{
    struct Student s1;

    s1.age = 20;

    printf("Age : %d\n", s1.age);

    return 0;
}

/*
 * Summary
 * - A structure groups different data types.
 * - Use struct to declare a structure.
 * - Access members using the dot (.) operator.
 */