/*
 * File: 7-print_diagonal.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * print_diagonal - draws a diagonal line.
 * @n: Number of times \ is printed
 */
void print_diagonal(int n)
{
int a, b;
if (n > 0)
{
for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
{
if (b == a)
{
_putchar('\\');
}
else if (b < a)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}
