/*
 * File: 8-print_array
 * Auth: King David Ajayi
 */

#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array
 * @a: array name
 * @n:nuber of elements
 */
void print_array(int *a, int n)
{
int index;

for (index = 0; index < n; index++)
{
printf("%d", a[index]);

if (index == n - 1)
{
continue;
}
printf(", ");
}
printf("\n");
}
