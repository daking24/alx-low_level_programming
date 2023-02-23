/*
 * File: 9-fizz_buzz.c
 * Auth: King David Ajayi
 */

#include "main.h"
#include <stdio.h>

/**
 * main - Print the numbers 1 - 100, then new line.
 *        Multiples of 3 prints Fizz.
 *        Multiples of 5 prints Buzz.
 *        Multiples of 3 and 5 prints FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && num % 5 != 0)
{
printf("Fizz");
}
else if (num % 3 != 0 && num % 5 == 0)
{
printf("Buzz");
}
else if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz");
}
else if (i == 1)
{
printf("%d", i);
}
else
{
printf("%d", i);
}
}
printf("\n");
return (0);
}
