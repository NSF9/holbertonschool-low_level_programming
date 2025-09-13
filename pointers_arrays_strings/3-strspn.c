#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @str: string to search in
 * @accept: characters to match
 *
 * Return: number of bytes in initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *str, char *accept)
{
	unsigned int count = 0;

	char *a;

	while (*str != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*str == *a)
				break;
			a++;
		}

		if (*a == '\0')
			return (count);

		count++;

		str++;
	}

	return (count);
}
