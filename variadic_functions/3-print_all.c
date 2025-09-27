#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything based on format
 * @format: List of argument types: c, i, f, s
 */
void print_all(const char *const format, ...)
{
	va_list Argumenst;
	int i = 0;
	char *sep = "";
	char *str;

	va_start(Argumenst, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's')
		{
			printf("%s", sep);
			if (format[i] == 'c')
				printf("%c", va_arg(Argumenst, int));
			if (format[i] == 'i')
				printf("%d", va_arg(Argumenst, int));
			if (format[i] == 'f')
				printf("%f", va_arg(Argumenst, double));
			if (format[i] == 's')
			{
				str = va_arg(Argumenst, char*);
				if (str == NULL)
					printf("(nil)");
				if (str != NULL)
					printf("%s", str);
			}
			sep = ", ";
		}
		i++;
	}

	va_end(Argumenst);
	printf("\n");
}
