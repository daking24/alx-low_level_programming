/*
 * File: 10-print_triangle.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * print_triangle - Prints a triangle, then new line.
 * @size: Size of triangle
 */
void print_triangle(int size)
{
int a, b;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= size; a++)
{
for (b = a; b < size; b++)
{
_putchar(' ');
}
for (b = 0; b <= a; b++)
{
_putchar('#');
}
if (a == b)
{
continue;
}
_putchar('\n');
}
}
}
