#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a callback function.
 * @name: Pointer to a string containing the name.
 * @f: Pointer to a function that takes a char * and returns void.
 *
 * Description: This function calls the function pointed to by @f
 * and passes it the @name string to handle the actual printing.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
