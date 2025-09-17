#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and sets it to zero
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *Arr;
	unsigned int i;
	unsigned int Total;

	if (size == 0 || nmemb == 0)
		return (NULL);

	Total = nmemb * size;

	Arr = malloc(Total);
	if (Arr == NULL)
		return (NULL);

	for (i = 0; i < Total; i++)
		Arr[i] = 0;

	return (Arr);
}

