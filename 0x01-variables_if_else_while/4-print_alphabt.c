/*
 * File: 4-print_alphabt.c
 * Auth: King David Ajayi
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabets, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
char low_alphabet;

for (low_alphabet = 'a'; low_alphabet <= 'z'; low_alphabet++)
{
if (low_alphabet != 'q' && low_alphabet != 'e')
{
putchar(low_alphabet);
}
}
putchar('\n');

return (0);
}
