#include "holberton.h"

/**
 * a - prints the row.
 * b - prints the col.
 * followed by a new line
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + 48);
			}
			_putchar((b % 10) + 48);

		}
		_putchar('\n');
	}
}
