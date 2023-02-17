/*
 * File: 7-print_tebahpla.c
 * Auth: King David Ajayi
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabets in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
char low_alphabet;

for (low_alphabet = 'z'; low_alphabet >= 'a'; low_alphabet--)
{
putchar(low_alphabet);
}
putchar('\n');

return (0);
}
