/*
 * File: 102-fibonacci.c
 * Auth: King David Ajayi
 */

#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers,
 *        starting with 1 and 2,
 *        followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
int count = 50;
int a = 1, b = 2, c;
int i;

printf("%d, %d", a, b);

for (i = 3; i <= count; i++)
{
c = a + b;
printf(", %d", c);
a = b;
b = c;
}

printf("\n");

return (0);
}
