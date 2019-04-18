#include "shell.h"

void free_cmds(char **m);
void prompt_printer(void);
void sighandle(int n);

/**
 * main - This program operates as a simple shell
 * @argc: the number of command line arguments
 * @argv: pointer to an array of command line
 * arguments
 * @envp: environment variable
 *
 * Return: Always 0
 *
 */

int main(int argc, char *argv[], char *envp[])
{
	char *line_buffer = NULL, *pathcmd = NULL, *path = NULL;
	size_t buffer_size = 0;
	ssize_t chars_in_line = 0;
	int i = 0;
	char **cmd = NULL, **paths = NULL;

	if (argc < 1)
		return (-1);
	signal(SIGINT, sighandle);
	while (1)
	{
		prompt_printer();
		chars_in_line = getline(&line_buffer, &buffer_size, stdin);
		if (chars_in_line < 0)
			break;

		if (line_buffer[chars_in_line - 1] == '\n')
			line_buffer[chars_in_line - 1]  = '\0';

		cmd = token_maker(line_buffer);
		if (cmd == NULL || *cmd == NULL || **cmd == '\0')
			continue;
		if (**cmd == '/')
		{
			exec_cmd(cmd[0], cmd);
			continue;
		}
		path = _getpath();
		paths = token_maker(path);
		pathcmd = try_paths(paths, cmd[0]);
		exec_cmd(pathcmd, cmd);
	}
	if (chars_in_line < 0 && flags.interactive)
		write(STDERR_FILENO, "\n", 1);
	free(line_buffer);
	free_cmds(cmd);
	return (0);
}


/**
 * free_cmds - This program frees the cmd array
 * @m: pointer to an array of command line
 * arguments
 *
 * Return: void
 */
void free_cmds(char **m)
{
	int index = 0;

	while (m[index])
	{
		free(m[index]);
		index++;
	}
	free(m);
}

/**
 * prompt_printer - This program prints the prompt if the
 * shell is in interactive mode
 *
 * Return: void
 */
void prompt_printer(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
	{
		flags.interactive = 1;
	}
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}

/**
 * sighandle - This program allows ctrl+C to be
 * printed by the shell
 * @n: the first operand
 *
 * Return: void
 */
void sighandle(int n)
{
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
