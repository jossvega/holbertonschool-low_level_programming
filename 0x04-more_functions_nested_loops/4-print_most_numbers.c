#include "holberton.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9.
 *
 * Return: nothing.
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
