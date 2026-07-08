/*
 * File  : ex03_datatype.c
 * Day   : 01
 * Topic : Data Types
 * Goal  : Learn basic C data types.
 */

#include <stdio.h>

int main(void)
{
    int age = 23;
    float height = 175.5f; //float express > n.xxf
    double weight = 72.8;
    char grade = 'A';

    printf("Age    : %d\n", age);
    printf("Height : %1f\n", height);
    printf("Weight : %1lf\n", weight);
    printf("Grade  : %c\n", grade);

    return 0;
}

/*
 * Summary
 * - int stores integers.
 * - float stores decimal numbers.
 * - double stores more precise decimal numbers.
 * - char stores a single character.
 */