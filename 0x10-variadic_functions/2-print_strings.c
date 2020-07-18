#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string to be printed between numbers
 * @n: number of parameters
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list name;
	char *let;
	unsigned int x;

	va_start(name, n);
	for (x = 0; x < n; x++)
	{
		let = va_arg(name, char*);
		if (let == NULL)
			printf("nil");
		if (x == (n - 1))
			printf("%s\n", let);
		if (separator == NULL)
			printf("%s", let);
		else
			printf("%s%s", let, separator);
	}
	va_end(name);
}