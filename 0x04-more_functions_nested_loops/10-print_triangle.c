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
if (size > 0)
{
for (a = 1; a <= size; a++)
{
for (b = a; b < size; b++)
{
_putchar(' ');
}
for (b = 1; b <= a; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
