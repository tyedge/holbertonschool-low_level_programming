#include <stdio.h>
#include "holberton.h"

/**
 * set_string - This program sets the value of a
 * pointer to a char.
 * @s: Pointer to address pointing to a string
 * @to: Pointer to a string
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;

}
