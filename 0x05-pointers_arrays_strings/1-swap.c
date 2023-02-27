#include "main.h"

/**
 * swap_int - that swaps the values of two integers
 * @a: input first
 * @b: input second
 * return: integer
 */
void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}
