#include "holberton.h"

void error97(void);
void error98(char *f);
void error99(char *t);
void error100(int fd);

/**
 * main - This program copies one file into another
 * @argc: number of command line arguments
 * @argv: array of pointers to command line arguments
 *
 * Return: 0 on success, non-zero value otherwise
 *
 */

int main(int argc, char **argv)
{
	int fd_fr0, fd2;
	char *file_from = argv[1];
	char *file_to = argv[2];
	char buf[1024];
	ssize_t reader, written, closerr;

	if (argc != 3)
		error97();
	fd_fr0 = open(file_from, O_RDONLY);
	if (fd_fr0 == -1)
		error98(file_from);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		error99(file_to);
	do {
		reader = read(fd_fr0, buf, 1024);
		if (reader == -1)
			error98(file_from);
		if (reader == 0)
			break;
		written = write(fd2, buf, reader);
		if (written == -1)
			error99(file_to);
	} while (1);

	closerr = close(fd2);
	if (closerr == -1)
		error100(fd2);
	closerr = close(fd_fr0);
	if (closerr == -1)
		error100(fd_fr0);

	return (0);
}


/**
 * error97 - This program prints error message and
 * causes program to exit with error number 97
 *
 * Return: void
 */
void error97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error98 - This program prints error message and
 * causes program to exit with error number 98
 * @f: pointer to a string
 *
 * Return: void
 */
void error98(char *f)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f);
	exit(98);
}

/**
 * error99 - This program prints error message and
 * causes program to exit with error number 99
 * @t: pointer to a string
 *
 * Return: void
 */
void error99(char *t)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", t);
	exit(99);
}

/**
 * error100 - This program prints error message and
 * causes program to exit with error number 100
 * @fd: file directory value
 *
 * Return: void
 */
void error100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
	exit(100);
}
