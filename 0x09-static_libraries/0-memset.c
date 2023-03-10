/*
 * File: 0-memset.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * *_memset - Fills memory with a constant byte.
 * @s: address of memory area
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: A pointer to @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
