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
	int len;
	char *name_t;
	char *owner_t;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	for (len  = 0; name[len]; len++)
	name_t = malloc((len + 1) * sizeof(char));
	if (name_t == NULL)
	{
		free(d);
		return (NULL);
	}
	for (len = 0; name[len]; len++)
		name_t[len] = name[len];
	name_t[len] = '\0';

	for (len = 0; owner[len]; len++)
	owner_t = malloc((len + 1) * sizeof(char));
	if (owner_t == NULL)
	{
		free(d);
		free(name_t);
		return (NULL);
	}
	for (len = 0; owner[len]; len++)
		owner_t[len] = owner[len];
	owner_t[len] = '\0';

	d->name = name_t;
	d->age = age;
	d->owner = owner_t;

	return (d);
}
