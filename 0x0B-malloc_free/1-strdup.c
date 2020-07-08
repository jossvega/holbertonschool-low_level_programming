#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: input char
 * Return: char
 */

char *_strdup(char *str)
{
	char *cpy;
	unsigned int x = 0;
	unsigned int z = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[x] != '\0')
	{
		x++;
	}
	x++;
	cpy = malloc(x * sizeof(*cpy));
	if (cpy == NULL)
	{
		return (NULL);
	}
	while (z < x)
	{
		cpy[z] = str[z];
		z++;
	}
	return (cpy);
}
