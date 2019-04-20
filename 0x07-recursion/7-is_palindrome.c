#include "holberton.h"

int _strend(char *s);
int _checker(int j, char *s, int i);

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

	len = _strend(s);
	j = len - 1;
	i = 0;

	i++;
	j--;
	return (_checker(j, s, i));
}


/**
 * _checker - runs comparison test
 * @j: end of string
 * @s: string
 * @i: beginning of string
 *
 * Return: 1 or 0
 */

int _checker(int j, char *s, int i)
{
	if (s[i] != s[j])
		return (0);
	else if (i >= j)
		return (1);
	return (_checker(j - 1, s, i + 1));
}


/**
 * _strend - this function finds the
 * end of string
 * @s: First operand
 *
 * Return: void
 */

int _strend(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);
	i = (_strend(s + 1));
	return (i + 1);
}
