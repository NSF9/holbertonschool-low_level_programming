#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - Determines and returns the appropriate function
 *               for the requested arithmetic operation.
 * @s: The operator provided by the user as input.
 *
 * Return: Pointer to the matching function based on the operator,
 *         or NULL if the operator is invalid.
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
	int i;


	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);

}
