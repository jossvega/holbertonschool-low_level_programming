#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char *const format, ...)
{
	int x = 0;
	char *s, *esp = "";
	va_list list;

	va_start(list, format);
	if (format != NULL)
	{
		while (format[x])
		{
			switch (format[x])
			{
			case 'c':
				printf("%s%c", esp, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", esp, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", esp, va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (s == NULL)
					s = "nil";
				printf("%s%s", esp, s);
				break;
			default:
				x++;
				continue;
			}
			esp = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(list);
}
