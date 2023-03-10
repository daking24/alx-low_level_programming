/*
 * File: 1-memcpy.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * *_memcpy - Copies memory area.
 * @dest: copy to here.
 * @src: copy from here.
 * @n: number of bytes to copy.
 *
 * Return: Pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r, i = n;
for (r = 0; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
