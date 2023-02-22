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
int count;
unsigned long a = 0, b = 1, c;


for (count = 0; count < 50; count++)
{
c = a + b;
printf("%lu", c);
a = b;
b = c;
}

if (count == 49)
{
printf("\n");
}
else
{
printf(", ");
}

return (0);
}
