#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @str: input string to search within
 * @accept: string containing the set of characters to look for
 *
 * Return: pointer to the first occurrence in s of any character from accept,
 * or NULL if no character is found
 */
char *_strpbrk(char *str, char *accept)
{
	int i;

	while (*str)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*str == accept[i])
				return (str);
		}
		str++;
	}
	return (NULL);
}
