#include "holberton.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9.
 *
 * Return: nothing.
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
