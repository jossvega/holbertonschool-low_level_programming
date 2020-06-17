#include <stdio.h>

/**
 * main - program that computes and prints the sum of all
 * the multiples of 3 or 5 below 1024
 * Return: int.
 */

int main(void)
{
	int n1 = 0; /*division*/
	int n2 = 0; /*Suma*/

	while (n1 < 1024)
	{
		if (n1 % 3 == 0 || n1 % 5 == 0)
		{
			n2 = n2 + n1; /*suma de multiplos por cada loop*/
		}
		n1 ++;
	}
	printf("%d\n", n2);/*total de la suma*/
	return (0);
}
