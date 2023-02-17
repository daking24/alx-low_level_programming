/*
 * File: 8-print_base16.c
 * Auth: King David Ajayi
 */

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int base_sixteen_number;
char base_sixteen_letter;

for (base_sixteen_number = 0; base_sixteen_number < 10; base_sixteen_number++)
{
putchar((base_sixteen_number % 10) + '0');
}
for (base_sixteen_letter = 'a'; base_sixteen_letter <= 'f'; base_sixteen_letter++)
{
putchar(base_sixteen_letter);
}
putchar('\n');

return (0);
}
