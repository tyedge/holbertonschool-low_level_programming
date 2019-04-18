#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdbool.h>

char *_strdup(char *str);
char *_strchr(char *str, int chr);
int _strlen(const char *str);
char *_getpath(void);
char **token_maker(char *str);
void exec_cmd(char *c, char **cmd);
char *pathappend(char *path, char *cmd);
char *try_paths(char **p, char *cmd);
int _strncmp(const char *first, const char *second, int n);
void env(void);
void exiter(void);


extern char **environ;

/*
global variables

struct global
{
	char **global_1 = environ;
	env();
	exit();
	int global_1;
	char *global_2;
	...
} global;*/

struct global
{
        int exit;
        char *env;
        bool interactive;

} flags;

#endif
