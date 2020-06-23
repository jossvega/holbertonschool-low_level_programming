#include "holberton.h"

/**
 * _puts - prints a string
 *
 * @str: pointer to char
 * Return: nothing
 */

void _puts(char *str)
{
	int x;

	x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
