#include "holberton.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @x: input value to check
 * Return: nothing.
 */

void print_line(int x)
{
	int con;

	if (x > 0)
	{
		for (con = 0; con < x; con++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
