#include "main.h"

/**
 * join_strings_limited - Appends n characters from src to the end of dest
 * @dest: Destination string to append to
 * @src: Source string to append from
 * @n: Maximum number of characters to append
 *
 * Return: Pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int d_len = 0, s_index = 0;

	/* Find the current length of dest */
	while (dest[d_len])
		d_len++;

	/* Copy characters from src to dest */
	while (s_index < n && src[s_index])
	{
		dest[d_len] = src[s_index];
		d_len++;
		s_index++;
	}

	dest[d_len] = '\0'; /* null-terminate */

	return (dest);
}
