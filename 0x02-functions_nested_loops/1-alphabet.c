#include "holberton.h"

/**
* main - entry point
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
