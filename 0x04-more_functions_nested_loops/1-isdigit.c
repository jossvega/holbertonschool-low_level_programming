#include "holberton.h"

/**
 * is digit - function retrun 1.
 * @c: first input value to check
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
