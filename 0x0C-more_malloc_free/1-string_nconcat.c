#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * @n: first n bytes
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0;
	char *empty = "";
	char *dest;

	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	if (n >= y)
		n = y;
	dest = malloc(sizeof(*dest) * n + (x + 1));
	if (dest == NULL)
		return (NULL);
	
	x = 0;
	while (s1[x] != '\0')
	{
		dest[x] = s1[x];
		x++;
	}
	y = 0;
	while (s2[y] != '\0' && y < n)
	{
		dest[x] = s2[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
