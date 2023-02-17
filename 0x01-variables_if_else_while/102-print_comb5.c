/*
 * File: 102-print_comb5.c
 * Auth: King David Ajayi
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        range from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int number_one, number_two;

for (number_one = 0; number_one <= 98; number_one++)
{
for (number_two = number_one + 1; number_two <= 99; number_two++)
{
putchar((number_one / 10) + '0');
putchar((number_one % 10) + '0');
putchar(' ');
putchar((number_two / 10) + '0');
putchar((number_two % 10) + '0');
if (number_one == 98 && number_two == 99)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
