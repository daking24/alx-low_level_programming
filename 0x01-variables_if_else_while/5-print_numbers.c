/*
 * File: 5-print_numbers.c
 * Auth: King David Ajayi
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
int base_ten;
for (base_ten = 0; base_ten < 10; base_ten++)
{
printf("%d", base_ten);
}
printf("\n");

return (0);
}
