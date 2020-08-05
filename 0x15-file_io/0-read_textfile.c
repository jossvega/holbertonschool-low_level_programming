#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: actual numbers it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, wri, rd;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	rd = read(fd, buff, letters);
	if (rd == -1)
		return (0);
	buff[rd] = '\0';

	wri = write(STDOUT_FILENO, buff, rd);
	if (wri == -1 || wri != rd)
		return (0);

	rd = close(fd);
	if (rd == -1)
		return (0);

	free(buff);
	return (wri);
}
