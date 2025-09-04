#include "main.h"

/**
 * print_square - draws a square line on the terminal
 * @n: number of times the character '#' should be printed
 *
 * Return: void
 */
	void print_square(int size)
	{

	int i;

	if(size <= 0)
	{

	_putchar('\n');

	return;

	}

	for(i =0; i <= size; i++)
	{


_putchar('#');




	}	

_putchar('\n');

	}
