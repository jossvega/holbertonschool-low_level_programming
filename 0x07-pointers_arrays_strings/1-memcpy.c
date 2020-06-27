#include "holberton.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: dest positions
 * @src: source position
 * @n: size of bytes
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;
	unsigned int y = 0;

	while (x < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
