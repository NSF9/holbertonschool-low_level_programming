#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Returns a pointer to a newly allocated space in memory.
 *
 * @size: unsigned int
 *
 * @c: char
 *
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
