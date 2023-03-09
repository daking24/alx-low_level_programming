/*
 * File: 1-print_rev_recursion.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
