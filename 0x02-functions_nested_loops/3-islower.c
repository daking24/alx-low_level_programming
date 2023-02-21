/*
 * File: 3-islower.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * _islower - Checks if variable c contains a lowercase alphabet.
 * @c: The character to be checked.
 *
 * Return: 1 if true, 0 if false.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
