#include "main.h"
#include <string.h>
/**
 * binary_to_uint - a function that converts a binary
 *                          number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int power = 0;
	unsigned int sum = 0;
	int count = 0;
	unsigned int len;

	len = strlen(b);

	if (b == NULL)
		return (0);
	for (count = len - 1; count >= 0; count--)
	{
		if (b[count] == '1')
		{
			sum += (1 << power);
		}
		if (b[count] != '0' && b[count] != '1')
		{
				return (0);
		}
		power++;
	}
	return (sum);
}

