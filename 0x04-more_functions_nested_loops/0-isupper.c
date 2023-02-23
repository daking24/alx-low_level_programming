/*
 * File: 0-isupper.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * _isupper - Checks for uppercase letters.
 * @c: The letter to be checked.
 *
 * Return: If Uppercase - 1, else 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
