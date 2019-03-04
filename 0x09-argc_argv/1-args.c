#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]__attribute__((unused)))
{

	if (argc > 1)
		printf("%d\n", argc - 1);
	else if (argc == 1)
		printf("%d\n", 0);
	return 0;
}
