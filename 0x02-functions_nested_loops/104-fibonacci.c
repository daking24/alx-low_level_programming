/*
 * File: 104-fibonacci.c
 * Auth: King David Ajayi
 */

#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long a = 0, b = 1, c;
unsigned long a1, a2, b1, b2;
unsigned long n1, n2;

for (count = 0; count < 92; count++)
{
c = a + b;
printf("%lu, ", sum);
a = b;
b = c;
}

a1 = a / 10000000000;
b1 = b / 10000000000;
a2 = a % 10000000000;
b2 = b % 10000000000;

for (count = 93; count < 99; count++)
{
n1 = a1 + b1;
n2 = a2 + b2;
if (a2 + b2 > 9999999999)
{
n1 += 1;
n2 %= 10000000000;
}
printf("%lu%lu", n1, n2);
if (count != 98)
{
printf(", ");
}
a1 = b1;
a2 = b2;
b1 = n1;
b2 = n2;
}
printf("\n");
return (0);
}
