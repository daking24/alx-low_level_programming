/*
 * File: 100-times_table.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * print_times_table - Prints times table of the input,
 *                     starts with 0.
 * @n: The value of the times table.
 */
void print_times_table(int n)
{
int val, fac, res;

if (n >= 0 && n <= 15)
{
for (val = 0; val <= n; val++)
{
_putchar('0');
for (fac = 1; fac <= n; fac++)
{
_putchar(',');
_putchar(' ');
res = val * fac;
if (res <= 99)
{
 _putchar(' ');
}
if (res <= 9)
{
_putchar(' ');
}
if (res >= 100)
{
_putchar((res / 100) + '0');
_putchar(((res / 10)) % 10 + '0');
}
else if (res <= 99 && res >= 10)
{
_putchar((res / 10) + '0');
}
_putchar((res % 10) + '0');
}
_putchar('\n');
}
}
}
