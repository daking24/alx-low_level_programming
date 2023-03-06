/*
 * File: 4-strpbrk.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * *_strpbrk -Searches a string for any of a set of bytes.
 * @s: String to look out for.
 * @accept: String to search.
 *
 * Return: Pointer to the byte in @s that matches @accept or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
{
return (s);
}
}
s++;
}
return ('\0');
}
