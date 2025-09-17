#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to take from s2
 *
 * Return: pointer to newly allocated memory containing s1 + n bytes of s2
 *         NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *NewString;
	unsigned int i = 0, j = 0, Length1 = 0, Length2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[Length1])
		Length1++;
	while (s2[Length2])
		Length2++;

	if (n >= Length2)
		n = Length2;

	NewString = malloc(sizeof(char) * (Length1 + n + 1));
	if (NewString == NULL)
		return (NULL);

	for (i = 0; i < Length1; i++)
		NewString[i] = s1[i];

	for (j = 0; j < n; j++)
		NewString[i + j] = s2[j];

	NewString[i + j] = '\0';

	return (NewString);
}

