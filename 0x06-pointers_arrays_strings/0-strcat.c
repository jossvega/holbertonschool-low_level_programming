#include "holberton.h"
/**
 * _strcpy - copies the string pointed to by src and null
 * @dest: elements of arrays s1.
 * @src: pointer to string source
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	unsigned int d = 0;
	unsigned int s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
