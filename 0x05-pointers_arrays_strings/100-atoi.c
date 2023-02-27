#include "main.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: the pointer to convert
 * Return: n integer
 */
int _atoi(char *s)
{
	int c = 0, min = 1, sign = 0;
	unsigned int n = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			sign = 1;
			n = (n * 10) + (s[c] - '0');
			c++;
		}
		if (sign == 1)
		{
			break;
		}
		c++;
	}
	n *= min;
	return (n);
}
