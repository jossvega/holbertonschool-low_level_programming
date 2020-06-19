#include <stdio.h>

/**
 * main - Fizz Buzz interview
 *
 * Return: void
 *
 */

int main(void)
{

	int j;

	for (j = 1; j <= 100; j++)
	{
		if ((j % 3 == 0) && (j % 5 == 0))
		{
			printf("Fizz Buzz");
		}
		else if ((j % 3 == 0) && (j % 5 != 0))
		{
			printf(" Fizz");
		}
		else if ((j % 5 == 0) && (j % 3 != 0))
		{
			printf("Buzz ");
		}
		else if ( j == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf(" %d ", j);
		}
	}
	printf("\n");
}
