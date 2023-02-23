/*
 * File: 4-print_most_numbers.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * print_most_numbers -  Prints numbers 0-9 except 2,4.
 */
void print_most_numbers(void)
{
int num;
for (num = 0; num <= 9; num++)
{
if (num != 2 && num != 4)
{
_putchar((num % 10) + '0');
}
}
_putchar('\n');
}
