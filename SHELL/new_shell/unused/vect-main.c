#include "shell.h"


int main(void)
{
	char **trial, **cmds;
	char *m = "Get me to the greeks";
	char *y;

	y = _getpath();
	trial = token_maker(m);
	cmds = token_maker(y);

	printf("%s\n", trial[2]);
	printf("%s\n", cmds[0]);

	return (0);
}
