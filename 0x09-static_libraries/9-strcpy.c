/*
 * File: 9-strcpy.c
 * Auth: King David Ajayi
 */

#include <stdio.h>
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
int count = 0;

while (count >= 0)
{
*(dest + count) = *(src + count);
if (*(src + count) == '\0')
{
break;
}
count++;
}
return (dest);
}
