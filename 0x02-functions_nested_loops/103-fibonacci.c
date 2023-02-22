/*
 * File: 103-fibonacci.c
 * Auth: King David Ajayi
 */

#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long a = 0, b = 1, c;
float d;

while (1)
{
c = a + b;
if (c > 4000000)
{
break;
}
if ((c % 2) == 0)
{
d += c;
}
a = b;
b = c;
}
printf("%.0f\n", d);

return (0);
}
