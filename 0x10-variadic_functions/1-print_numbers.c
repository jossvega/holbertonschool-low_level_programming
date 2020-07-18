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
		if (x < (n - 1) && separator != NULL)
			printf("%d%s", cont, separator);
		else
			printf("%d", cont);
	}
	va_end(list);
	printf("\n");
}
