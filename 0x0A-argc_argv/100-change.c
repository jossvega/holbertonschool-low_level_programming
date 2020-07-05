#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum number of coins to
 * make change for an amount of money
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0, 1.
 */

int main(int argc, char *argv[])
{

	int num, x, min;
	int mon[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	min = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5; x++)
	{
		while (num >= mon[x])
		{
			num = num - mon[x];
			min++;
		}
	}
	printf("%d\n", min);
	return (0);
}
