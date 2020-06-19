#include "holberton.h"

/**
 *print_line - function to print
 *
 *x - is the number of times character should be printed
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
