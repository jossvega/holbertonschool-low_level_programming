#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	char *ar, *str;
	int x, j, lent;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (j = 0; av[x][j] != '\0'; j++)
		{
			j++;
			lent++;
		}
		lent++;
	}
	ar = malloc(lent * sizeof(char));
	if (ar == NULL)
		return (NULL);
	str = ar;
	for (x = 0; x < ac; x++)
	{
		for (j = 0; av[x][j] != '\0'; j++)
		{
			*ar = av[x][j];
			ar++;
		}
		*ar = '\n';
		ar++;
	}
	return (str);
}
