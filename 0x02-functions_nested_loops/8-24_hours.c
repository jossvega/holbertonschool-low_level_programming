#include "holberton.h"

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int number1;
	int number2;

	for (number1 = 0; number1 < 24; number1++)
	{
		for (number2 = 0; number2 < 60 ; number2++)
		{
			_putchar ((number1 / 10) + 48);
			_putchar ((number1 % 10) + 48);
			_putchar (':');
			_putchar ((number2 / 10) + 48);
			_putchar ((number2 % 10) + 48);
			_putchar ('\n');
		}
	}
}
