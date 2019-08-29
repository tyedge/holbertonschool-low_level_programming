#include "shell.h"


int _strlen(const char *str);

/**
 * pathappend - concatenates a path token with a cmd token
 * @path: path string to append to
 * @cmd: command string to append
 *
 * Return: buffer to appended path
 */

char *append_path(char *path, char *cmd)
{
	char **path_array;
	int a = 0, len1, len2;

	path_array = token_maker(path);

	while (path_array[a] != NULL)
	{
		len1 = _strlen(path_array[a]);
		printf("%u\n", len1);
		len2 = _strlen(cmd);
		printf("%u\n", len2);
		printf("%s\n", path_array[a]);
		a++;
	}
	printf("%s\n", cmd);


/*
	if (cmd == 0) { cmd = ""; }
	if (path == 0) { path = ""; }
	buffer = malloc(sizeof(char) * _strlen(path) + _strlen(cmd) + 2);
	if (buffer == NULL)
		return (NULL);
	while (path[a])
		buffer[a] = path[a++];
	buffer[a++] = '/';
	while (cmd[b])
		buffer[a + b] = cmd[b++];
	buffer[a + b] = '\0';

	printf("New path token is: %s\n", buffer);

	return (buffer);*/
	return (*path_array);
}
/*
append_path(_getpath(), cmd)
*/


int _strlen(const char *str)
{
	size_t i = 0;

	while (str[i])
		i++;
	return (i);
}
