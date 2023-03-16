#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - allocates memory for an array of integers from min to max
 * @min: input first int in array of (max - min + 1) elements
 *
 * @max: input last int in array of (max - min + 1) elements
 *
 * Return: void pointer to allocated memory
 */
int *array_range(int min, int max)
{

	int *arr;
	int i, range;

	range = max - min;

	if (min > max)
	{
		return (NULL);
	}
	if (min == max)
	{
		range = 1;
	}
	arr = (int *)malloc((range + 1) * sizeof(int));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i <= range; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
