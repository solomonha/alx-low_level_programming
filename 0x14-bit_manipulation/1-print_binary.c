#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number
 * @n: input unsigned int
 * Return: 0 (success)
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		/* right shift the number by 1 bit and recursive function call */
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
