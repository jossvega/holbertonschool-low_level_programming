#include "holberton.h"

/**
 * print_triangle - function that prints a square, followed by a new line
 * @size: size of triangle
 * Return: nothing.
 */

void print_triangle(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 1; x <= size; x++)
	{
		for (y = 1  ; y <= size ; y++)
		{
			if (x <= size - y)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
