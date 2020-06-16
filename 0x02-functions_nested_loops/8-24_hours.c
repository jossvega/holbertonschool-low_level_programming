#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
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
