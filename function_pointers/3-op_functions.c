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
/**
 * op_sub - Computes the subtraction of two integers.
 * @a: First operand.
 * @b: Second operand.
 *
 * Return: Result of a - b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Computes the multiplication of two integers.
 * @a: First operand.
 * @b: Second operand.
 *
 * Return: Result of a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Computes the division of two integers.
 * @a: First operand.
 * @b: Second operand.
 *
 * Return: Result of a / b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Computes the modulus (remainder) of two integers.
 * @a: First operand.
 * @b: Second operand.
 *
 * Return: Result of a % b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

