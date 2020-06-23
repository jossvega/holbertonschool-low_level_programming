#include "holberton.h"

/**
 * puts_half - half prints string
 *
 * @str: pointer to char
 * Return: nothing
 */

void puts_half(char *str)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	y = x / 2;

	if (x % 2 == 1)
	{
		y++;
	}

	while (str[y] != '\0')
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');
}
