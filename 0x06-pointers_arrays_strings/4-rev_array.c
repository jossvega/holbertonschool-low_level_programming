#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int x, y, z;

	x = 0;
	y = n - 1;

	while (x < y)
	{
		z = a[y];
		a[y] = a[x];
		a[x] = z;
		y--;
		x++;
	}
}
