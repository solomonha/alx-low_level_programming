#include "function_pointers.h"
#include <stdlib.h>
#define NULL 0
/**
 * array_iterator - executes function as a parameter on each element of array
 * @array: input array of ints to use as function parameters
 * @size: size of int array
 * @action: pointer to function to run with each element of array
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL && action == NULL)
		return;
	for (index = 0; index < size; index++)
		(*action)(array[index]);
}
