#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - Computes the addition of two integers.
 * @a: First operand.
 * @b: Second operand.
 *
 * Return: Result of a + b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}

