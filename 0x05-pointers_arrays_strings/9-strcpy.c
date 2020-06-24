#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src and null
 * @dest: elements of arrays s1.
 * @src: pointer to string source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];

	for (; dest[x] != '\0'; x++)
		dest[x] = '\0';
	return (dest);
}
