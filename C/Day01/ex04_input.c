/*
 * File  : ex04_input.c
 * Day   : 01
 * Topic : User Input
 * Goal  : Learn how to receive input using scanf().
 */

 #include <stdio.h>

 int main(void)
 {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age is %d.\n", age);

    return 0;
 }

 /*
 * Summary
 * - int stores integers.
 * - float stores decimal numbers.
 * - double stores more precise decimal numbers.
 * - char stores a single character.
 */