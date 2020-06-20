#include <stdio.h>

/**
 *main- print the larger number
 *return: void
 */

int main(void)
{
	long int n = 612852475143;
	long int d = 2;
	long int max = 0;

	while (n != 0)
	{
		if ((n % d) != 0)
		{
			d = d + 1;
		}
		else
		{
			max = n;
			n = n / d;
			if (n == 1)
			{
				printf("%ld", max);
				break;
			}
		}
	}
	printf("\n");
	return (0);
}
