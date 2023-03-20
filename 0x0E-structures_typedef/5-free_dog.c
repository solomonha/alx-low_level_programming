#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to free information stored in struct dog
 * @d: name of structure defining dog's characteristics
 *
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
