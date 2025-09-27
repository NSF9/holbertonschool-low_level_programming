#ifndef variadic_functions_h
#define variadic_functions_h

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

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

#endif
