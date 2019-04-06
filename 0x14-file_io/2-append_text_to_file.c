#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * append_text_to_file - This program appends text at the end
 * of a file
 * @filename: pointer to the file to be read
 * @text_content: the string to be appended
 *
 * Return: 1 on success, -1 on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file0;

	if (filename == NULL)
		return (-1);

	file0 = open(filename, O_RDWR | O_APPEND);
	if (file0 < 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (*text_content)
	{
		write(file0, (const void *)text_content, 1);
		text_content++;
	}

	close(file0);

	return (1);
}
