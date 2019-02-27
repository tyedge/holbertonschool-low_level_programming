#include "holberton.h"

int findlen(char *n);

/**
 * is_palindrome - evaluates a string to
 * determine if it is a palindrome.
 * @s: First operand
 *
 * Return: 1 if string is palindrome. 0
 * otherwise.
 */

int is_palindrome(char *s)
{
	int i, j, len;

	len = findlen(s);
	i = 0;
	j = len - 1;

	if (*s == 0)
		return (1);
	else if (s[i] != s[j])
		return (0);
	is_palindrome(s + 1);
	return (1);
}

/**
 * findlen - this function finds the
 * length of a string
 * @n: First operand
 *
 * Return: string length
 */

int findlen(char *n)
{
	int i;

	for (i = 0; *n != 0; n++, i++)
	{
		;
	}
	return (i);
}
