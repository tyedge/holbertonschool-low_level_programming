#include "shell.h"

/**
 * _strlen - gets the length of a string
 * @str: string to evaluate
 *
 * Return: unsigned int character count
 */

int _strlen(const char *str)
{
	size_t i = 0;

	while (str[i])
		i++;
	return (i);
}
