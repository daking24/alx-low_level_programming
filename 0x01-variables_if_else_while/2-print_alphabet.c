/*
 * File: 2-print_alphabet.c
 * Auth: King David Ajayi
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabets in descending order from a-z.
 *
 * Return: Always 0.
 */
int main(void)
{
char low_alphabet;

for (low_alphabet = 'a'; low_alphabet <= 'z'; low_alphabet++)
{
putchar(low_alphabet);
putchar('\n');

return (0);
}
}
