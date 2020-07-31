#include "holberton.h"
/**
 * print_binary - function that prints the binary representation of a number.
 *
 * @n: pointing to a string
 *
 * Return: the converted number, or 0 if
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}

	else if (n == 1)
	{
		putchar('1');
		return;
	}
	print_binary(n >> 1);
	putchar('0' + (n & 1));
}
