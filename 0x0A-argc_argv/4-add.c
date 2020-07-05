#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */

int main(int argc, char *argv[])
{
	int x, z;
	int sum = 0;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			for (z = 0; argv[x][z] != '\0'; z++)
				if (!(isdigit(argv[x][z])))
				{
					printf("Error\n");
					return (1);
				}
			sum = sum + atoi(argv[x]);
		}
	}
	else
	{
		printf("%d\n", 0);
		return (0);
	}
	printf("%d\n", sum);
	return (0);
}
