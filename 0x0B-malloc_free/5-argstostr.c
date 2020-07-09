#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int x, j;
	int k = 0, lent ;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (j = 0; av[x][j] != '\0'; j++)
		{
			lent++;
		}
		lent++;
	}
	str = malloc((lent + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (j = 0; av[x][j] != '\0'; j++)
		{
			str[k] = av[x][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
