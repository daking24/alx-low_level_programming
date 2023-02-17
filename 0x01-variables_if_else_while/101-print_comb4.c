/*
 * File: 101-print_comb4.c
 * Auth: King David Ajayi
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int digit_one, digit_two, digit_three;

for (digit_one = 0; digit_one < 8; digit_one++)
{
for (digit_two = digit_one + 1; digit_two < 9; digit_two++)
{
for (digit_three = digit_two + 1; digit_three < 10; digit_three++)
{
putchar((digit_one % 10) + '0');
putchar((digit_two % 10) + '0');
putchar((digit_three % 10) + '0');
if (digit_one == 7 && digit_two == 8 && digit_three == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
