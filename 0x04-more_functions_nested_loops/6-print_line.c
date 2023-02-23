/*
 * File: 6-print_line.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * print_line - Draw a straight line with _.
 * @n: Number of _ to print
 */
void print_line(int n)
{
int length;
if (n > 0)
{
for (length = 0; length < n; length++)
{
_putchar('_');
}
}
_putchar('\n');
}
