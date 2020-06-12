#include <stdio.h>

/**
* main - prints 0, 9 numbers
* 
* Return: 0
*/

int main(void)
{
	int n = 48;
	
	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n ++;
	}
	putchar('\n');
	return (0);
}
