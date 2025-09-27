#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers separated by a given string.
 * @separator: The string to print between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: Nothing (void).
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list Arguments;
	unsigned int i;

	va_start(Arguments, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(Arguments, int));

		if (separator != NULL && i < n - 1)

			printf("%s", separator);
	}

	va_end(Arguments);

	printf("\n");

}
