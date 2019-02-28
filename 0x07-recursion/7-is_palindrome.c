#include "holberton.h"

int _strlen_recursion(char *s);

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

	len = _strlen_recursion(s);
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
 * _strlen_recursion - this function finds the
 * length of an array.
 * @s: First operand
 *
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
