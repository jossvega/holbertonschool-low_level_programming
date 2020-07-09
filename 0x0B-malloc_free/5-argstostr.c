#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int x, j, lent;
	int z = 0;

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
	ptr = malloc((lent + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (j = 0; av[x][j] != '\0'; j++)
		{
			ptr[z] = av[x][j];
			z++;
		}
		ptr[z] = '\n';
		z++;
	}
	ptr[z] = '\0';
	return (ptr);
}
