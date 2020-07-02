#include "holberton.h"

/**
 * is_prime_number - returns 1 if the input integer is a
 * prime number
 * otherwise return 0
 * @n: input number
 * @c: Counter variable
 *
 * Return: int
 */
int getNP(int n, int c);


int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (getNP(n, 2));
}

/**
 * getNP - function that gets if num is 0 or 1
 *
 * @n: input number
 * @c: Counter variable
 * Return: int
 */

int getNP(int n, int c)
{
	if (n == c)
		return (1);
	if (n % c == 0)
		return (0);
	return (getNP(n, c + 1));
}
