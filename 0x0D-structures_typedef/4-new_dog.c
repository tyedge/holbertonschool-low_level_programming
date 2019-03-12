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

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;

	return (doggy);

}
