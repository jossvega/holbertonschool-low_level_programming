#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * But for multiples of three print Fizz
 * and for the multiples of five print Buzz
 * Return: void.
 */

int main(void)
{

	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 3 == 0 && j % 5 == 0)
		{
			printf("Fizz Buzz");
		}
		else if (j % 3 == 0 && j % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (j % 5 == 0 && j % 3 != 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf(" %d ", j);
		}
	}
}
