#include <stdio.h>

/**
 * main - write a program that finds and prints the sum
 * of the even-valued terms, followed by a new line.
 * Return: void.
 */
int main(void)
{
	int i;
	unsigned long int x;
	unsigned long int y;
	unsigned long int z;
	unsigned long int a;

	x = 0;
	y = 1;
	a = 0;

	for (i = 1; i < 33; i++)
	{
		z = y + x;

		if (z < 4000000 && (z % 2) == 0)
		{
			a = a + z;
		}
		x = y;
		y = z;
	}
	printf("%lu\n", a);
	return (0);
}
