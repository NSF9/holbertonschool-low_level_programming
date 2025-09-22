#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a callback function.
 * @name: Pointer to a string containing the name.
 * @f: Function pointer that takes a char * and returns void.
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
