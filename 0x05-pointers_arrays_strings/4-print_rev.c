/*
 * File: 4-print_rev.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: Contains string.
 */
void print_rev(char *s)
{
int counter = 0;
int i, n;

for (i = 0; s[i] != '\0'; i++)
{
counter++;
}

for (n = (fcounter - 1); n >= 0; n--)
{
_putchar(s[n]);
}
_putchar('\n');
}
