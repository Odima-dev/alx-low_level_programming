#include "main.h"

/**
 * print_chessboard - printed board
 * @a: do printing
 * Return: crap
 */

void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
			_putchar(a[row][column]);
		_putchar('\n');
	}
}