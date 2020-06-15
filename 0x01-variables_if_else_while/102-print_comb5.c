#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number1;
	int number2;

	for (number1 = 0; number1 <= 99; number1++)
	{
		for (number2 = 0; number2 <= 99; number2++)
		{
			if (number1 < number2)
			{
				putchar ((number1 / 10) + 48);
				putchar ((number1 % 10) + 48);
				putchar (' ');
				putchar ((number2 / 10) + 48);
				putchar ((number2 % 10) + 48);

				if (number1 != 98 || number2 != 99)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
