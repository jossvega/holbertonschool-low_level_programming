#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *s1;
	char *s2;

	while (*haystack != '\0')
	{
		s1 = haystack;
		s2 = needle;

		while (*s2 == *haystack && *s2 != '\0' && *haystack != '\0')
		{
			haystack++;
			s2++;
		}
		if (*s2 == '\0')
			return (s1);
		haystack = s1 + 1;
	}
	return (NULL);
}
