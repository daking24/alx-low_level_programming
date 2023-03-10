/*
 * File: 3-puts.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to 'stdout';
 * @str: String input.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
