#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - function to initialize information for new dog
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: name of dog's owner
 *
 * Return: pointer to new data stucture with dog's information
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len;
	char *ptr;

	if (name == 0 || owner == 0)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (len = 1, ptr = name; *ptr; len++)
		ptr++;
	d->name = malloc(len);
	if (d->name == 0)
	{
		free(d);
		return (NULL);
	}

	for (len = 1, ptr = owner; *ptr; len++)
		ptr++;
	d->owner = malloc(len);
	if (d->owner == 0)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (len = 0; *name != 0; len++, name++)
		d->name[len] = *name;
	d->name[len] = 0;
	for (len = 0; *owner != 0; len++)
		d->owner[len] = *owner++;
	d->owner[len] = 0;
	d->age = age;

	return (d);
}
