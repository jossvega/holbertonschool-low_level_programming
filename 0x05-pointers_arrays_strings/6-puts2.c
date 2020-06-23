#include "holberton.h"

/**
 * puts2 - function that prints every other character
 *
 * @str: pointer to char
 * Return: nothing
 */

void puts2(char *str)
{
	int x;

	x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
