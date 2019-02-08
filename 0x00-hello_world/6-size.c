#include <stdio.h>

/**
 * main - This program uses the printf function from
 * the standard library to print the various sizes of
 * the different C data types that exist on the
 * computer the program is compiled and run on.
 *
 * Return: 0
 */
#include <stdio.h>
int main(void)
{

	char c;
	int i;
	long int li;
	long long lld;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lld));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);

}
