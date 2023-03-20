#include "dog.h"
/**
 * init_dog - function to initialize variable of type struct dog
 * @d: name of structure defining dog's characteristics
 * @name: dog's name
 * @age: dog's age
 * @owner: name of dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
