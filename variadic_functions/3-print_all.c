#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char* const format, ...);

/**
 * print_char - Prints a single character.
 * @arg: va_list pointing to the char to print.
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - Prints an integer.
 * @arg: va_list pointing to the int to print.
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - Prints a floating point number.
 * @arg: va_list pointing to the float to print.
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - Prints a string.
 * @arg: va_list pointing to the string to print.
 */
void print_string(va_list arg)
{
	char* s = va_arg(arg, char*);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * struct type_func - Maps a format character to a print function
 * @symbol: Format character
 * @printer: Function to print corresponding type
 */
typedef struct type_func
{
	char* symbol;
	void (*printer)(va_list);
} type_func;

/**
 * print_all - Prints anything passed based on format
 * @format: String of type specifiers
 */
void print_all(const char* const format, ...)
{
	va_list Arguments;
	int i = 0, j;
	char* delim = "";

	type_func map[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(Arguments, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(map[j].symbol))
			{
				printf("%s", delim);
				map[j].printer(Arguments);
				delim = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(Arguments);
}
