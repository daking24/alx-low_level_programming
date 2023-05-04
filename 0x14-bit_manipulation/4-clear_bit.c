/*
 * Auth: King David Ajayi
 * File: 4-clear_bit.c
 */

#include "main.h"

/**
 * clear_bit - Sets the value of a bit to '0' at given index.
 * @n: Pointer to the bit
 * @index: Index to set the value at.
 *
 * Return: If error - (-1)
 *	Else - 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
