#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything based on format
 * @format: List of argument types: c, i, f, s
 */
void print_all(const char* const format, ...)
{
	va_list Arguments;
	int i = 0, j;
	char* sep = "";
	char* str;

	struct printer {
		char t;
		void (*f)(va_list);
	} types[] = {
		{'c', NULL},
		{'i', NULL},
		{'f', NULL},
		{'s', NULL}
	};

	va_start(Arguments, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == types[j].t)
			{
				printf("%s", sep);
				if (format[i] == 'c')
					printf("%c", va_arg(Arguments, int));
				if (format[i] == 'i')
					printf("%d", va_arg(Arguments, int));
				if (format[i] == 'f')
					printf("%f", va_arg(Arguments, double));
				if (format[i] == 's')
				{
					str = va_arg(Arguments, char*);
					printf("%s", str ? str : "(nil)");
				}
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(Arguments);

	printf("\n");
}
