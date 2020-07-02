#include "holberton.h"

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: input number
 * @c: Counter variable
 *
 * Return: int
 */
int getNS(int n, int c);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (getNS(n, 0));
}

/**
 * getNS - function that gets de num of sqroot
 *
 * @n: input number
 * @c: Counter variable
 * Return: int
 */

int getNS(int n, int c)
{
	if (c * c > n)
	{
		return (-1);
	}
	if (c * c == n)
	{
		return (c);
	}
	else
		return (getNS(n, c + 1));
}
