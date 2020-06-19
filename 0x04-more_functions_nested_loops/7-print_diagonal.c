#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @x: value check
 * @a; file
 * @b: col
 * Return: nothing.
 */

void print_diagonal(int x);
{
	int a;
	int b;

	for (a = 0; a <= x; a++)
	{
		for (b = 0; b <= a; b++)
		{
			if (b == a)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
