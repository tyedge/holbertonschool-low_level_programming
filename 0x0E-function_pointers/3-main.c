#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - This program  multiplies two numbers
 * @argc: First operand
 * @argv: Second operand
 *
 * Return: 0 if two numbers are passed and 0 otherwise.
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit (99);
       	}
	if (((argv[2][0] == 37 || argv[2][0] == 47) && (atoi(argv[3]) == 0)))
	{
		printf("Error\n");
		exit (100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
