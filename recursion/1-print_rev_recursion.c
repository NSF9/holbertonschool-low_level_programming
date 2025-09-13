#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @str: pointer to the string
 *
 * Return: Nothing
 */
void PrintRevRecursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	PrintRevRecursion(str + 1);
	_putchar(*str);
}
