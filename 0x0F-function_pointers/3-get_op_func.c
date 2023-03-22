rewrite the following function with for loop - /*
 * File: 3-get_op_func.c
 * Auth: Brennan D Baraban
 */

#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
    
for (int i = 0; ops[i].op != NULL; i++)
{
if (*(ops[i].op) == *s)
{
return (ops[i].f);
}
}
 return (NULL);
}
