#include "holberton.h"

/**
 * print_chessboard - function that prints a chessboard
 * @a: size of dos D array
 */

void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y;

	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
