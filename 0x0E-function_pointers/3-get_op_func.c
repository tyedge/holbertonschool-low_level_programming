#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function which takes a char
 * argument and returns a pointer to function
 * which takes two integer argument and returns
 * an integer
 * @array: Array on which function will execute
 * @size: Size of the array
 * @cmp: Pointer to a function
 *
 * Return: first array index which matches the
 * item searched for OR -1 if no match is found
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
			return(ops[i].f);
		}
		i++;
	}
	return (ops[i].f);
}
