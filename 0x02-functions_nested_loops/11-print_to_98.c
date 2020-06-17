#include <unistd.h>
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */


void print_to_98 (int n)
{
	int n1;

	if (n < 98)
	{
		for (n1 = n; n1 < 98; n1++)
		{
			if (n1 != 98)
			{
				printf ("%d, ", n1);
			}
			else
			{
				printf ("%d ", n1);

			}
		}
	}
	else
	{
		for (n1 = n; n1 >= 98; n1--)
		{
			if (n1 != 98)
			{
				printf ("%d, ", n1);
			}
			else
			{
				printf ("%d ", n1);

			}

		}

	}
	printf ("\n");
}
