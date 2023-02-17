/*
 * File: 6-print_numberz.c
 * Auth: King David Ajayi
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
int base_ten;
for (base_ten = 0; base_ten < 10; base_ten++)
{
putchar((base_ten % 10) + '0');
}
putchar('\n');

return (0);
}
