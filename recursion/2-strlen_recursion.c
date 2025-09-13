#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char* str)
{
	if (*str == '\0')
		return (0);

	return (1 + _strlen_recursion(str + 1));
}
