#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments passed.
 *
 * Return: The total sum, or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list Argument;
	unsigned int i;
	int Sum = 0;

	if (n == 0)
		return (0);

	va_start(Argument, n);

	for (i = 0; i < n; i++)
		Sum += va_arg(Argument, int);

	va_end(Argument);

	return (Sum);
}

