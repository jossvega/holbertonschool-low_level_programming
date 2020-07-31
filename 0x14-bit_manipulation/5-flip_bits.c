#include "holberton.h"
/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diference;
	unsigned int num;

	diference = n ^ m;
	num = 0;

	while (diference)
	{
		num++;
		diference &= (diference - 1);
	}

	return (num);
}
