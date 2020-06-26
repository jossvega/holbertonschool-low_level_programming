#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: mamory area to return
 * @b: constant byte
 * @n: size of bytes
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{

		s[x] = b;
		x += 1;
	}
	return (s);
}
