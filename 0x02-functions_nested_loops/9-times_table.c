/*
 * File: 9-times_table.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int val, fac, res;

for (val = 0; val <= 9; val++)
{
_putchar('0');
for (fac = 1; fac <= 9; fac++)
{
_putchar(',');
_putchar(' ');
res = val * fac;
if (res <= 9)
{
_putchar(' ');
}
else
{
_putchar((res / 10) + '0');
}
_putchar((res % 10) + '0');
}
 _putchar('$');
_putchar('\n');
}
}
