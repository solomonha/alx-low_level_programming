#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 *
 * @a: the name of the array
 * @size: the size of the array
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;
	int m = size * size;

	for (i = 0; i <= m; i = i + size + 1)
	{
		sum1 = sum1 + a[i];
	}
	for (j = size - 1; j <= m - size; j = j + size - 1)
	{
		sum2 = sum2 + a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}
