/*
 * File: 1-isdigit.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * _isdigit - Checks for digits 0-9.
 * @c: digit to be checked
 *
 * Return: If digit - 1, else - 0.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
