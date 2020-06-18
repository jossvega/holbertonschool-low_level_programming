#include "holberton.h"

/**
*_Write a function taht checks
*for uppercase character
*Return: int
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
