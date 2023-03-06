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
int i = 0, j;
int matches = 0;
while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
matches++;
break;
}
if (accept[j + 1] == '\0' && s[i] != accept[j])
{
return (matches);
}
}
i++;
}
return (matches);
}
