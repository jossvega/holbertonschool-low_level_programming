#include "holberton.h"

/**
 * _istdigit - function that checks for uppercase character.
 * @c: input value to check
 * Return: int.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
