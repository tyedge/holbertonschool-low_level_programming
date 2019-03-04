#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This program adds positive numbers
 * @argc: First operand
 * @argv: Second operand
 *
 * Return: 0 if all arguments of argv are
 * positive integers and 1 otherwise.
 */

int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				sum = 0;
				break;
			}
		}
		if (sum > 0)
		{
			printf("%d\n", sum);
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
