#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - a function that reallocates a memory block.
 * @ptr : void pointer to the allocated memory area .
 * @old_size : the old size of the allocated memory.
 * @new_size : the new size of reallocated memory.
 * Return: void pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old;
	char *new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	old = (char *)ptr;
	new = malloc(sizeof(char) * new_size);
	if (new == NULL)
		return (NULL);
	if (old_size < new_size)
	{
		for (i = 0; i < old_size; i++)
			new[i] = old[i];
	}
	else
	{
		for (i = 0; i < new_size; i++)
			new[i] = old[i];
	}
	free(ptr);
	return (new);
}
