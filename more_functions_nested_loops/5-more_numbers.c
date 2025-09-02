#include "main.h"
/*
 * more_numbers - prints number from 1 to 14 10 times
 *
 * Return:0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
 */
void more_numbers(void)
{
 
int i,j;

for ( i = 0; i <= 10; i++)
{

	for (j = 0; j <= 14; j++)
	{
		if ( j >= 10)
			_putchar(( j / 10 ) + '0');

		_putchar(( j % 10) + '0');
	}

	_putchar('\n');
}


}
