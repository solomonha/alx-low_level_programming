#include "main.h"

/**
 * _abs - Calculates the absolute value of an integer.
 * @n: The integer we are calculating the absolute value of.
 *
 * Return: Always 0.
 */
int _abs(int n)
{
	int result;

	if (n < 0)
	{
		result = n * (-1);
	}
	else
	{
		result = n;
	}
	return (result);
}
