/*
 * Auth: King David Ajayi
 * File: 2-get_bit.c
 */

#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at.
 *
 * Return: If an error occurs - (-1).
 * 	   Else - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	return (1);
}
