#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: number of bytes in the initial segment
 * @needle: consist only of bytes from
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int p = 0;

	while (*needle != '\0')	
	{
		p = 0;
		while (haystack[p] != '\0')
		{
			if (*needle == haystack[p])
			return (needle);
			p++;
		}
		needle++;
	}
	return (NULL);
}
