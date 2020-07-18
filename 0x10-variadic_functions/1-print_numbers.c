#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of parameters
 * Return: Sum of all parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int cont;
	unsigned int x;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		cont = va_arg(list, int);
		if (x == (n - 1))
			printf("%d\n", cont);
		if (separator == NULL)
			printf("%d", cont);
		else
			printf("%d%s", cont, separator);
	}
	va_end(list);
}
