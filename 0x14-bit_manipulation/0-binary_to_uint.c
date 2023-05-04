/*
 * Auth: King David Ajayi
 * File: 0-binary_to_uint.c
 */

#include "main.h"

/**
 * binary_to_uint - Transforms a binary number to an unsigned int.
 * @b: A pointer to string of 0 and 1 chars.
 *
 * Return: If b = NULL or contains not 0 or 1 - 0.
 *		Else - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0; /* unsigned int variable to hold the result */
	int index = 0; /* index variable for iterating through the string */

	if (b == NULL)
	{
		return (0);
	}

	while (b[index] != '\0') /* iterate through the string */
	{
		if (b[index] == '0') /* if current char is '0' */
		{
			uint <<= 1; /* shift uint left by one bit */
		}
		else if (b[index] == '1') /* if current char is '1' */
		{
			uint <<= 1; /* shift uint left by one bit */
			uint |= 1; /* set the least significant bit to 1 */
		} else /* if current char is not '0' or '1' */
		{
			return (0); /* return 0 */
		}
		index++; /* increment index */
	}

	return (uint); /* return the resulting unsigned int */
}
