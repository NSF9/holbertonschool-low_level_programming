#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @Str: string to search in
 * @Char: character to locate
 *
 * Return: pointer to first occurrence of c in s, or NULL
 */
char *_strchr(char *Str, char Char)
{
	while (*Str != '\0')
	{
		if (*Str == Char)
			return (Str);
		Str++;
	}


	if (Char == '\0')
		return (Str);
return (NULL);
}
