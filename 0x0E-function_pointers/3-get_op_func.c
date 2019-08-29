#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function which takes a char
 * argument and returns a pointer to a function
 * which takes two integer argument and returns
 * an integer
 * @s: operator passed from command line
 *
 * Return: pointer to the function matching the
 * given operator, if found, OR NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;


	i = 0;
	while (ops[i].op)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
