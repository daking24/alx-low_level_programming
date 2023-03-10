/*
 * File: 5-strstr.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * *_strstr - Locates a substring.
 * @haystack: String to search.
 * @needle: String to locate.
 *
 * Return: Pointer to located substring or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *m = needle;
while (*l == *m && *m != '\0')
{
l++;
m++;
}
if (*m == '\0')
{
return (haystack);
}
}
return (0);
}
