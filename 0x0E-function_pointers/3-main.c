#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - This program  multiplies two numbers
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: calculated value of arguments
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0' || !get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	if (((argv[2][0] == 37 || argv[2][0] == 47) && (atoi(argv[3]) == 0)))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
