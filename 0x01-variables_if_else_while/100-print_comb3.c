/*
 * File: 100-print_comb3.c
 * Auth: King David Ajayi
 */

#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int digit_one, digit_two;

for (digit_one = 0; digit_one < 9; digit_one++)
{
for (digit_two = digit_one + 1; digit_two < 10; digit_two++)
{
putchar((digit_one % 10) + '0');
putchar((digit_two % 10) + '0');
if (digit_one == 8 && digit_two == 9)
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
