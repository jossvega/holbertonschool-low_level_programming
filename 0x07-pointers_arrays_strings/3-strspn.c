#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: number of bytes in the initial segment
 * @accept: consist only of bytes from
 * Return: char
 */

unsigned int _strspn(char *s, char *accept)
{
	int p = 0;
	int match;
	unsigned int cont = 0;

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
		if (match == 0)
			break;
		cont++;
		s++;
	}
	return (cont);
}
