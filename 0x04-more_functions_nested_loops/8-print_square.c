/*
 * File: 8-print_square.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * print_square - Prints a square with #.
 * @size: Size of square.
 */
void print_square(int size)
{
int a, b;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
