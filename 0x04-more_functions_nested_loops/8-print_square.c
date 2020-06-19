#include "holberton.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	int con;
	int imp;

	if (size > 0)
	{
		for (con = 0; con < size; con++)
		{
			for (imp = 0; imp < size; imp++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
