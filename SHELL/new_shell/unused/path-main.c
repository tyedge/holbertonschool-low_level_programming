#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"


/**
 * main - This program splits a string and prints
 * its parts
 *
 * Return: 0
 */

int main()
{
	char *path = "/bin/";
	char *cmd = "echo";


/*	_getpath();*/
	pathappend(path, cmd);
	return (0);
}
