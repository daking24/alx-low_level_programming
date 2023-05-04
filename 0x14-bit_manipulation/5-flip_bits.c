/*
 * Auth: King David Ajayi
 * File: 5-flip_bits.c
 */

#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip
 *		to get from one number to another.
 * @n: The number.
 * @m: The number to flip @n to.
 *
 * Return: The number of bits to flip to get from @n to @m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, b;

	a = n ^ m;
	b = 0;
	while (a > 0)
	{
		b += (a & 1);
		a >>= 1;
	}

	return (b);
}
