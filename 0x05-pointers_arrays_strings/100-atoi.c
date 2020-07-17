#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int n = 0, signo = 1, flag = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			signo = signo * -1;
		else if (*s >= '0' && *s <= '9')
		{
			n = n * 10 + *s - 48;
			flag = 1;
		}
		else if (flag == 1)
			break;
		s++;
	}
	n = n * signo;
	return (n);
}
