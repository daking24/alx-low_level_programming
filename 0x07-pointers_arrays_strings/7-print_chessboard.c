/*
 * File: 7-print_chessboard.c
 * Auth: King David Ajayi
 */

#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: input
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
