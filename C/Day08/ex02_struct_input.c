/*
 * File  : ex02_struct_input.c
 * Day   : 08
 * Topic : Structure Input
 * Goal  : Learn how to store and print structure members.
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

    printf("Enter name: ");
    scanf("%19s", s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("\nStudent Information\n");
    printf("Name : %s\n", s1.name);
    printf("Age  : %d\n", s1.age);

    return 0;
}

/*
 * Summary
 * - Structure members can store values.
 * - Use . to access members.
 * - String members and integer members are handled differently.
 */