#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints the number
 * of arguments passed into it.
 * @argc: First operand
 * @argv: Second operand
 *
 * Return: 0
 */


int main(int argc, char *argv[]__attribute__((unused)))
{

	if (argc > 1)
		printf("%d\n", argc - 1);
	else if (argc == 1)
		printf("%d\n", 0);
	return (0);
}
