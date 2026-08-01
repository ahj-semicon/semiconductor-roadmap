/*
 * File  : ex05_struct_malloc.c
 * Day   : 10
 * Topic : Structure with malloc()
 * Goal  : Allocate memory for a structure dynamically.
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
    Student *s;
    s = (Student *)malloc(sizeof(Student));

    if (s == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%19s", s->name);

    printf("Enter age: ");
    scanf("%d", &s->age);

    printf("\n");
    printf("Name : %s\n", s->name);
    printf("Age  : %d\n", s->age);

    free(s);

    return 0;
}

/*
 * Summary
 * - malloc() can allocate memory for a structure
 * - Use the arrow operator (->) to access structure members through a pointer.
 * - Release dynamically allocated memory with free().
 */