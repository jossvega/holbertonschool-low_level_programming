#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char symbol;
	int (*j)(int, int);
	
	if (argc !=4)
	{
		printf("Error\n");
		return(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	j = get_op_func(argv[2]);
	if (!j)
	{
		printf("Error\n");
		return(99);
	}
	symbol = *argv[2];
	if ((symbol == '/' || symbol == '%') && num2 == 0)
	{
		printf("Error\n");
		return(100);
	}

	result = j(num1, num2);
	printf("%d\n", result);

	return (0);
}
