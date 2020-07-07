#include <stdlib.h>

/**
 * create_array - create an array of chars, with a specific char.
 * @size: input size
 * @c: input char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int x = 0;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	while (x < size)
	{
		ar[x] = c;
		x++;
	}
	ar[x] = '\0';
	return (ar);
}
