#include "holberton.h"

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o','n'};
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(l[i]);
	}
	_putchar('\n');

	return (0);
}
