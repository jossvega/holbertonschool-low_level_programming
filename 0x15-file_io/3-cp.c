#include "holberton.h"
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, x, y;
	char buf[1024];
	ssize_t rd, wri;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	for (x = 0; x < 1024; x++)
		buf[x] = 0;

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]);
		exit(99);
	}

	rd = read(file_from, buf, 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	while (rd)
	{
		wri = write(file_to, buf, rd);
		if (wri == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
			exit(99);
		}

		rd = read(file_from, buf, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

	}

	y = close(file_from);
	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	y = close(file_to);
	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
