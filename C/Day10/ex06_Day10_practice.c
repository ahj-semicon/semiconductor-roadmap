/*
 * File  : ex06_Day10_practice.c
 * Day   : 10
 * Topic : Dynamic Memory Allocation
 * Goal  : Store multiple students using dynamic memory.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char name[20];
    int age;
} Student;

int main(void)
{
    Student *students;
    students = (Student *)malloc(sizeof(Student) * 3);

    if (students == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < 3; i ++)
    {
        printf("Student %d\n", i + 1);
        
        printf("Name : ");
        scanf("%19s", students[i].name);

        printf("Age : ");
        scanf("%d", &students[i].age);

        printf("\n");
    }

    printf("\n===== Student List =====\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s (%d)\n",
               i + 1,
               students[i].name,
               students[i].age);
    }

    free(students);

    return 0;
}

/*
 * Summary
 * - Allocate memory for multiple structures.
 * - Access dynamically allocated structure arrays.
 * - Release allocated memory with free().
 */