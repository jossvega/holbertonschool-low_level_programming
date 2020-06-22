#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: void.
 */
int main(void)
{
	long int i;
	long int x;
	long int y;
	long int z;

	x = 0;

	y = 1;

	for (i = 0; i < 50; i++)
	{
		z = y + x;

		if (i != 49)
		{
			printf("%ld, ", z);
		} else
		{
			printf("%ld\n", z);
		}

		x = y;
		y = z;
	}
}
