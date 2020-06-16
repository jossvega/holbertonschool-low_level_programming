#include "holberton.h"

/**
*main - entry point
*
*Return: always 0 (Success)
*/
int _isalpha(int c)
{
	return((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
