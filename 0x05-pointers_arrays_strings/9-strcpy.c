/*
 * File: 9-strcpy.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src.
 * @dest: copy to
 * @src: copy from
 *
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
