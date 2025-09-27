#ifndef variadic_functions_h
#define variadic_functions_h

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 * struct printer - Struct for mapping a format symbol to a print function
 * @symbol: Format specifier character (e.g. 'c', 'i', 'f', 's')
 * @f: Pointer to a function that prints the corresponding type
 */
struct printer
{
	char symbol;
	void (*f)(va_list);
};

#endif
