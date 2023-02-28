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
char *_strcpy(char *dest, const char *src)
{
int index = 0;

while (src[index])
{
dest[index] = src[index];
index++;
}

return (dest);
}
