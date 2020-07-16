#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: input array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int x;
	int match = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (array != 0 && cmp != 0)
	{
		for (x = 0; x < size; x++)
		{
			match = cmp(array[x]);

			if (match != 0)
				break;
		}
		if (!match)
			return (-1);
		return (x);
	}
}
