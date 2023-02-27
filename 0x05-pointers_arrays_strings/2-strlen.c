/*
 * File: 2-strlen.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * _strlen - Counts the length of a string.
 * @s: Each character in the string.
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return len;
}
