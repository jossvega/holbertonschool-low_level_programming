#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @n:elements of arrays
 * @a: pointer to int
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int x;

	x = 0;

	while (x < n)
	{
		printf("%d", a[x]);
		x++;
		if (x != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
