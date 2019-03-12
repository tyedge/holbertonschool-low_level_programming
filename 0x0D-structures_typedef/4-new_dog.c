#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - prints a struct dog
 * @name: First member
 * @age: First member
 * @owner: First member
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	char *nm, *own;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	nm = malloc(sizeof(char *));
	if (nm == NULL)
	{
		free(doggy);
		return (NULL);
	}
	nm = name;
	own = malloc(sizeof(char *));
	if (own == NULL)
	{
		free(nm);
		free(doggy);
		return (NULL);
	}
	own = owner;

	doggy->name = nm;
	doggy->age = age;
	doggy->owner = own;

	return (doggy);

}
