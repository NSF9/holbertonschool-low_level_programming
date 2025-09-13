#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @num: number to calculate factorial
 *
 * Return: factorial of n, -1 if n < 0
 */
int factorial(int num)
{
	if (num < 0)
		return (-1);

	if (num == 0)
		return (1);

	return (num * factorial(num - 1));
}
