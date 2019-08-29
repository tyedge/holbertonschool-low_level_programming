#include <unistd.h>
#include <stdio.h>
#include "shell.h"

/* The following functions represent our current suite of built-ins */

/**
 * env - This program is prints the current
 * environment
 *
 * Return: 0
 */

void exiter(void)
{
	_exit(EXIT_SUCCESS);
}

void env(void)
{
        char **env = environ;

        while (*env)
        {
                printf("%s\n", *env);
                env++;
        }
	write(STDERR_FILENO, "$ ", 2);
}


/**
exit
help
exit w/status
setenv
unsetenv
cd
help
history
*/
