#include "variadic_functions.h"
/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum = 0;
	unsigned int x;

	if (n == 0)
		return (0);
	va_start(num, n);
	for (x = 0; x < n; x++)
		sum = sum + va_arg(num, int);
	va_end(num);
	return (sum);
}
