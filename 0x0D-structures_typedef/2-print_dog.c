#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: First member
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if (d->name == NULL)
		printf("Name: %p\n", d->name);
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Age: (nil)\n");
	else
       		printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: %p\n", d->owner);
	else
		printf("Owner: %s\n", d->owner);
}
