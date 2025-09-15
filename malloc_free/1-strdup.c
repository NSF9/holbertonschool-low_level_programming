#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string into newly allocated memory
 * @String: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *String)
{
	char *Duplicated;
	unsigned int i, Length = 0;

	if (String == NULL)
		return (NULL);

	while (String[Length] != '\0')
		Length++;

	Duplicated = (char *)malloc((Length + 1) * sizeof(char));
	if (Duplicated == NULL)
		return (NULL);

	for (i = 0; i < Length; i++)
		Duplicated[i] = String[i];

	Duplicated[Length] = '\0';

	return (Duplicated);
}

