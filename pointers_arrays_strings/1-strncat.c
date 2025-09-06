#include "main.h"

/**
 * join_strings_limited - appends up to n characters from src to dest
 * @dest: the base string to append to
 * @src: the string to append from
 * @n: max number of characters to copy
 *
 * Return: dest with src appended
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
