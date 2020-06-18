#include "holberton.h"

/**
 *_isdigit - checks for a digit (0 through 9).
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
