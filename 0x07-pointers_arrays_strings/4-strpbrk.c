#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: number of bytes in the initial segment
 * @accept: consist only of bytes from
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int p = 0;
	int match;

	while (*s != '\0')
	{
		p = 0;
		match = 0;
		while (accept[p] != '\0')
		{
			if (*s == accept[p])
				match = 1;
			p++;
		}
		if (match == 1)
			return (s);
		s++;
	}
	return (NULL);
}
