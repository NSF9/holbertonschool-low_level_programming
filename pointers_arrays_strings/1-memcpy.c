#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to memory to copy to
 * @surc: pointer to memory to copy from
 * @num: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy (char *dest, char *surc, unsigned int num)

{


unsigned int i;

	for (i = 0; i < num; i++)
	{

	dest[i] = surc[i];

	}

    return (dest);
}
