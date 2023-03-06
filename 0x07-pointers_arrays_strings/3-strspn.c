/*
 * File: 3-strspn.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: input.
 * @accept: input.
 *
 * Return: Number of bytes in the inital segment of @s.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int r;
while (*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
n++;
break:
}
else if (accept[r + 1] == '\0')
{
return (n);
}
}
s++;
}
return (n);
}
