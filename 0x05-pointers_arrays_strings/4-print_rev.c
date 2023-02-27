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
int len = 0, i;
while (*s != '\0')
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
