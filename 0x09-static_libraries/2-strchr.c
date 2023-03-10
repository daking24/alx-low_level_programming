/*
 * File: 2-strchr.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * *_strchr - Locates a character in a string.
 * @s: String
 * @c: character to be located
 *
 * Return: Pointer to first occurence of @c, or NULL.
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (0);
}
