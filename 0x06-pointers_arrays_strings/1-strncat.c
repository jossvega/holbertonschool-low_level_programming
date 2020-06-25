#include "holberton.h"
/**
 * _strncat- function is similar to the _strcat.
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: it will use at most n bytes from src
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned int d = 0;
	int s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (s < n && src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	return (dest);
}
