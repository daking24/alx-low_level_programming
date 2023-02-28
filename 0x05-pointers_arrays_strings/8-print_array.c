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
int i;

for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
}
printf("\n");
}
