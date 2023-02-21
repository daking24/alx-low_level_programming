/*
 * File: 5-sign.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * print_sign - Prints the sign of the inputed number.
 * @n: The number of which the sign will be printed.
 *
 * Return: 1 if the input is greater than zero,
 *         0 if the input is zero,
 *         -1 if the input is less than zero.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
