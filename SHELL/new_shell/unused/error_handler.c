#include <stdlib.h>

/**
 * str_concat - this function concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: pointer to addess containing s1 followed by
 * s2, or NULL if it fails
 */

char * error_handler(int count)
{
	char *p;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

	if (p == NULL)
		return (NULL);

	*p = s1[0];
	for (i = 0; *s1 != '\0'; s1++, i++)
	{
		p[i] = s1[0];
	}
	for (; *s2 != '\0'; s2++, i++)
	{
		p[i] = s2[0];
	}
	p[i++] = '\0';
	return (p);
}


/**
 * _strlen - finds the string length
 * @n: First operand
 *
 * Return: length of string
 */

int _strlen(char *n)
{
	int i = 0;

	while (*n++)
		i++;
	return (i);
}
