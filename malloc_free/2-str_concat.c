#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into newly allocated memory
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concatantion;
	unsigned int i = 0, j = 0, Length1 = 0, Length2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[Length1] != '\0')
		Length1++;

	while (s2[Length2] != '\0')
		Length2++;

	concatantion = malloc(sizeof(char) * (Length1 + Length2 + 1));
	if (concatantion == NULL)
		return (NULL);

	for (i = 0; i < Length1; i++)
		concatantion[i] = s1[i];

	for (j = 0; j < Length2; j++)
		concatantion[i + j] = s2[j];

	concatantion[i + j] = '\0';

	return (concatantion);
}

