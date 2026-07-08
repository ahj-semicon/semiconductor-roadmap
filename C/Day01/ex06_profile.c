/*
 * File  : ex06_profile.c
 * Day   : 01
 * Topic : Final Practice
 * Goal  : Combine variables, input, output, and data types.
 */

#include <stdio.h>

int main(void)
{
    char name[30];
    int age;
    float height;

    printf("Enter your name: ");
    scanf("%29s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height(cm) : ");
    scanf("%f", &height);

    printf("\n===== Profile =====\n");
    printf("Name   : %s\n", name);
    printf("Age    : %d\n", age);
    printf("Height : %.1f cm\n", height);

    return 0;
}

 /*
 * Summary
 * - %s if used for strings.
 * - scanf() receives user input.
 * - Variables store different types of data.
 */