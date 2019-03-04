#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints all arguments it
 * receives
 * @argc: First operand
 * @argv: Second operand
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
