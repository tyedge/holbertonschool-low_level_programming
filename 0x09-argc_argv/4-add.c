#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (int argc, char **argv)
{
        int i;
	int sum = 0;

        if (argc > 1)
        {
                for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				return (printf("%s\n", "Error"));
			}
		}
		printf("%d\n", sum);
        }
        else if (argc == 1)
        {
                printf("%d\n", 0);
        }
	return (0);
}
