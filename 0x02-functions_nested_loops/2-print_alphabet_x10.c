#include "holberton.h"

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int l;
	int j;

	for (l = 0; l <= 9; l++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
