#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1
 * at a given index
 * @n: unsigned long int input with size of 64 bits
 * @ index: input index value starting from 0 of the
 * bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	/* 1ul - specifies an unsigned long version of 1 */
	*n = *n | (1ul << index);
	return (1);

}
