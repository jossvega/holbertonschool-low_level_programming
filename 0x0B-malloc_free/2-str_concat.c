#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: input char 1
 * @s2: input char 2
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *dest;
	char *empty = "";
	unsigned int i = 0, j = 0, x = 0, y = 0;

	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	j++;

	dest = malloc((i + j) * sizeof(*dest));
	if (dest == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		dest[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		dest[x] = s2[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
