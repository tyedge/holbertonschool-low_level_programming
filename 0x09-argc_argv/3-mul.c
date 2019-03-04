#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
        int x = 1;
	int y = 2;

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[x]) * atoi(argv[y]));
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}
