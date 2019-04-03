#include "holberton.h"

/**
 * read_textfile - This program reads a textfile and
 * prints it to the POSIX standard output
 * @filename: pointer to the file to be read
 * @letters: the number of letters the program should
 * read and print
 *
 * Return: the actual number of letters read and printed
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd0, size;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
	return (0);

	fd0 = open(filename, O_RDONLY);
	if (fd0 < 0)
		return (0);

	size = read(fd0, buf, letters);

	buf[size] = '\0';

	while (*buf)
	{
		_putchar(*buf);
		buf++;
		letters--;
	}

	close(fd0);

	return (size);
}
