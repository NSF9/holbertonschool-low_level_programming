#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: 8x8 array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int Row, Column;


	for (Row = 0; Row < 8; Row++)
	{
		for (Column = 0; Column < 8; Column++)
		{
			_putchar(a[Row][Column]);
		}
		_putchar('\n');
	}


}
