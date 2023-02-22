/*
 * File: 11-print_to_98.c
 * Auth: King David Ajayi
 */

#include <stdio.h>

/**
 * print_to_98 - Prints all N numbers from input to 98,
 *               separated by a comma followed by a space for each.
 * @n: Begin counting from this number.
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
{
printf("%d, ", n--);
}
printf("%d\n", n);
}
else
{
while (n < 98)
{
printf("%d, ", n++);
}
printf("%d\n", n);
}
}
