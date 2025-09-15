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
    unsigned  int i;
    char *_Char;

    if (size == 0)
    {
	return (NULL);
	}

    _Char = malloc(sizeof(char) * size);


    if (_Char == NULL)
    {
	return (NULL);
    }


    for (i = 0; i < size; i++)
    {
	_Char[i] = c;

    }

	return (_Char);
}
