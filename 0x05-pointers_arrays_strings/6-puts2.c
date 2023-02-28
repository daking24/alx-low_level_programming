/*
 * File: 6-puts2.c
 * Auth: King David Ajayi

#include "main.h"

/**
 * puts2 - print only first char out of 2.
 * @str: Input
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if ((i % 2) == 0)
{
_putchar(str[i]);
}
else
{
continue;
}
}
_putchar('\n');
}
