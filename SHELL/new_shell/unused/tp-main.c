#include "shell.h"

int main(void)
{
	char *pth = NULL;
	char **paths = NULL;
	char *cmd = "echo";

	pth = _getpath();
	paths = token_maker(pth);
	try_paths(paths, cmd);

	return (0);
}
