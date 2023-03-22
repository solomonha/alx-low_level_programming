#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - passes array of ints thru functions to determine 1st TRUE value
 * @array: input array of ints to use as function parameters
 * @size: size of int array
 * @cmp: pointer to function to compare int values
 *
 * Return: index of array for 1st occurance of where cmp does not return FALSE
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
