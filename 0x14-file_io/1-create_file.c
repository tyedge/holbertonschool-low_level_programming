#include "holberton.h"

/**
 * create_file - This program creates a file
 * @filename: pointer to the name of file to be created
 * @text_content: string to write to file
 *
 * Return: 1 if successful, -1 otherwise
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd0, i, len;
	char *buf = text_content;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		*text_content = '\0';

	while (*text_content)
	{
		i++;
		text_content++;
	}
	len = i;

	fd0 = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd0 < 0)
	{
		return (-1);
	}
	buf[len] = '\0';
	write(fd0, (const void *)buf, len);

	close(fd0);

	return (1);
}
