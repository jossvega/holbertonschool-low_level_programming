#include "holberton.h"

/**
 * rev_string - revers the string
 * @s: pointer to char
 * Return: nothing
 */

void rev_string(char *s)
{
	int x;
	int y;
	char z;

	x = 0;
	y = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	x--;
	while (y < x)
	{
		z = (s[x]);
		s[x] = s[y];
		s[y] = z;
		y++;
		x--;
	}
}
