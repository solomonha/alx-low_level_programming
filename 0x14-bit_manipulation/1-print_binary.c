#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number
 * @n: input unsigned int
 * @Return: the bits of number
 * Description: right shift the number by 1 bit and recursive function call
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
