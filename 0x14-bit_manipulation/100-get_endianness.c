#include  "main.h"

/**
 * get_endianness - A function to determine if an underlying
 * machine architecture is little endian or big endian
 * Return: returns 1, if architecture is little endian(lsb),
 * 0 in case of big endian(MSB)
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char*) &x;

	if (*c)
		return (1);
	else
		return (0);
}
