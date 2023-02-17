/*
 * File: 3-print_alphabets.c
 * Auth: King David Ajayi
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabets, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');

return (0);
}
