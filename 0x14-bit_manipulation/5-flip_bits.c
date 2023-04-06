#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: first input input
 * @m: second input
 * Return: count number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int bit1 = 0;
	unsigned long int bit2 = 0;

	while ((n > 0) || (m > 0))
	{
		bit1 = n & 1;
		bit2 = m & 1;
		if (bit1 != bit2)
			count++;
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
