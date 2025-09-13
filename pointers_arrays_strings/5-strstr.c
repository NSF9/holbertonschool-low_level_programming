#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *str, char *StrLookingFor)
{
	int i;

	if (*StrLookingFor == '\0')
		return (str);

	while (*str)
	{
		i = 0;
		while (StrLookingFor[i] && str[i] == StrLookingFor[i])
		{
			i++;
		}
		if (StrLookingFor[i] == '\0')
			return (str);
		str++;
	}
	return (NULL);
}
