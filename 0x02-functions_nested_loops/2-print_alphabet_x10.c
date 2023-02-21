/*
 * File: 2-print_alphabet_x10.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * print_alphabet_x10 - Prints all lowercase alphabets 10 times,
 *                      followed by a new line.
 */
void print_alphabet_x10(void)
{
int x;
char lower;
for (x = 1; x <= 10; x++)
{
for (lower ='a'; lower <= 'z'; lower++)
{
_putchar(lower);
}
_putchar('\n');
}
}
