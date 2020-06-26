#include "holberton.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: Pointer to Char
 * Return: char.
 */

char *leet(char *s)
{
	int x = 0;
	int y = 0;

	char *s1 = "aAeEoOlLtT";
	char *s2 = "4433001177";

	while (s[x] != '\0')
	{
		while (s1[y] != '\0')
		{
			if (s[x] == s1[y])
			{
				s[x] = s2[y];
			}
			y++;
		}
		y = 0;
		x++;
	}
	return (s);
}
