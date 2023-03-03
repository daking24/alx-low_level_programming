/*
 * File: 0-strcat.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * _strcat - Concatenates the string  @src, including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (*(dest + i))
{
i++;
}
while (*(src + j))
{
*(dest + i) = *(src + j);
i++;
j++;
}
*(dest + i) = '\0';
return (dest);
}
