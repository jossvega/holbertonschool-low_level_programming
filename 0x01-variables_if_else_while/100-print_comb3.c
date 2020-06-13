#include <stdio.h>

/**
 * main - program that prints combination
 * Numbers must be separated by ,followed by a space
 * Numbers should be printed in ascending order with 2 digits
 * You can only use the putchar five times
 * Return: 0
 */

int main(void)
{
	int n1;
	int n2;

	for (n1 = 48; n1 <= 57; n1++)
	{
		for (n2 = 48; n2 <= 57; n2++)
		{
			if (n1 >= n2)
			{
				continue;
			}
			putchar(n1);
			putchar(n2);
			if (n1 == 56 && n2 == 57)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
