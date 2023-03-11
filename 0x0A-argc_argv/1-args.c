/*
 * File: 1-args
 * Auth: King David Ajayi
 */

#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments passed to program
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc);
}
