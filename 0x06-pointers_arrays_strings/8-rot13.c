#include "holberton.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: Pointer to Char
 * Return: char.
 */

char *rot13(char *s)
{
	int x = 0;
	int y = 0;

	char *s1 = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *s2 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	while (s[x] != '\0')
	{
		while (s1[y] != '\0')
		{
			if (s[x] == s1[y])
			{
				s[x] = s2[y];
				break;
			}
			y++;
		}
		y = 0;
		x++;
	}
	return (s);
}
