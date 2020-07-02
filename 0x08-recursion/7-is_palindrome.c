#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: string to receive
 * @len: length
 *
 * Return: int
 */

int getW(char *s, int len);
int is_palindrome(char *s);

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * getW - check if is 0 or 1
 * @s: input string
 * @len: length
 * Return: int
 */

int getW(char *s, int len)
{
	if (*s != *(s + len - 1))
		return (0);
	else if (*s == '\0')
		return (1);
	return (getW(s + 1, len - 2));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: input char
 * Return: int
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (getW(s, len));
}
