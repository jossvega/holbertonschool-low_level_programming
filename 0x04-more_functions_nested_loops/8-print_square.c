#include "holberton.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	int c;
	int i;

	if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
